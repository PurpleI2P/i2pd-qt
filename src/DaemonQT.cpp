#include <memory>

#include "DaemonQT.h"
#include "Daemon.h"
#include "mainwindow.h"

#include "Log.h"

#include <QMessageBox>
#include <QApplication>
#include <QMutexLocker>
#include <QThread>

//#define DEBUG_WITH_DEFAULT_LOGGING (1)

namespace i2p
{
namespace qt
{
	Worker::Worker (DaemonQTImpl& daemon):
		m_Daemon (daemon)
	{
	}

	void Worker::startDaemon()
	{
		qDebug("Performing daemon start...");
        try{
            m_Daemon.start();
            qDebug("Daemon started.");
            emit resultReady(false, "");
        }catch(std::exception& ex){
            emit resultReady(true, ex.what());
        }catch(...){
            emit resultReady(true, QObject::tr("Error: unknown exception"));
        }
	}
	void Worker::restartDaemon()
	{
		qDebug("Performing daemon restart...");
        try{
            m_Daemon.restart();
            qDebug("Daemon restarted.");
            emit resultReady(false, "");
        }catch(std::exception& ex){
            emit resultReady(true, ex.what());
        }catch(...){
            emit resultReady(true, QObject::tr("Error: unknown exception"));
        }
    }
	void Worker::stopDaemon() {
		qDebug("Performing daemon stop...");
        try{
            m_Daemon.stop();
            qDebug("Daemon stopped.");
            emit resultReady(false, "");
        }catch(std::exception& ex){
            emit resultReady(true, ex.what());
        }catch(...){
            emit resultReady(true, QObject::tr("Error: unknown exception"));
        }
    }

    Controller::Controller(DaemonQTImpl& daemon):
		m_Daemon (daemon)
	{
		Worker *worker = new Worker (m_Daemon);
		worker->moveToThread(&workerThread);
		connect(&workerThread, &QThread::finished, worker, &QObject::deleteLater);
		connect(this, &Controller::startDaemon, worker, &Worker::startDaemon);
		connect(this, &Controller::stopDaemon, worker, &Worker::stopDaemon);
		connect(this, &Controller::restartDaemon, worker, &Worker::restartDaemon);
		connect(worker, &Worker::resultReady, this, &Controller::handleResults);
		workerThread.start();
	}
	Controller::~Controller()
	{
		qDebug("Closing and waiting for daemon worker thread...");
		workerThread.quit();
		workerThread.wait();
		qDebug("Waiting for daemon worker thread finished.");
        if(m_Daemon.isRunning())
        {
		    qDebug("Stopping the daemon...");
            m_Daemon.stop();
		    qDebug("Stopped the daemon.");
		}
	}

	DaemonQTImpl::DaemonQTImpl ():
        mutex(nullptr), m_IsRunning(nullptr), m_RunningChangedCallback(nullptr)
	{
	}

	DaemonQTImpl::~DaemonQTImpl ()
	{
		delete mutex;
	}

    bool DaemonQTImpl::init(int argc, char* argv[], std::shared_ptr<std::ostream> logstream)
	{
		mutex=new QMutex(QMutex::Recursive);
		setRunningCallback(0);
        m_IsRunning=false;
        return Daemon.init(argc,argv,logstream);
	}

	void DaemonQTImpl::start()
	{
		QMutexLocker locker(mutex);
		setRunning(true);
		Daemon.start();
	}

	void DaemonQTImpl::stop()
	{
		QMutexLocker locker(mutex);
		Daemon.stop();
		setRunning(false);
	}

	void DaemonQTImpl::restart()
	{
		QMutexLocker locker(mutex);
		stop();
		start();
	}

	void DaemonQTImpl::setRunningCallback(runningChangedCallback cb)
	{
		m_RunningChangedCallback = cb;
	}

	bool DaemonQTImpl::isRunning()
	{
        return m_IsRunning;
	}

	void DaemonQTImpl::setRunning(bool newValue)
	{
        bool oldValue = m_IsRunning;
		if(oldValue!=newValue)
		{
            m_IsRunning = newValue;
		    if(m_RunningChangedCallback)
				m_RunningChangedCallback();
		}
	}

	int RunQT (int argc, char* argv[])
	{
        QApplication app(argc, argv);
        int result;

        {
            std::shared_ptr<std::iostream> logstreamptr=
#ifdef DEBUG_WITH_DEFAULT_LOGGING
                    nullptr
#else
                    std::make_shared<std::stringstream>()
#endif
            ;
            //TODO move daemon init deinit to a bg thread
            DaemonQTImpl daemon;
            if(logstreamptr) (*logstreamptr) << "Initialising the daemon..." << std::endl;
            bool daemonInitSuccess = daemon.init(argc, argv, logstreamptr);
            if(!daemonInitSuccess)
            {
                QMessageBox::critical(0, "Error", "Daemon init failed");
                return 1;
            }
            LogPrint(eLogDebug, "Initialised, creating the main window...");
            MainWindow w(logstreamptr);
            LogPrint(eLogDebug, "Before main window.show()...");
            w.show ();

            {
                i2p::qt::Controller daemonQtController(daemon);
                w.setI2PController(&daemonQtController);
                LogPrint(eLogDebug, "Starting the daemon...");
                emit daemonQtController.startDaemon();
                //daemon.start ();
                LogPrint(eLogDebug, "Starting GUI event loop...");
                result = app.exec();
                //daemon.stop ();
            }
        }

		//QMessageBox::information(&w, "Debug", "demon stopped");
        LogPrint(eLogDebug, "Exiting the application");
		return result;
	}
}
}

