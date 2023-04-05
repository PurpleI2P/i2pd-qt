#include <memory>

#include "launcher/i2pd_qt_launcher.h"
#include "controller/i2pd_daemon_controller.h"
#include "Daemon.h"
#include "mainwindow.h"

#include "Log.h"

#include <QMessageBox>
#include <QApplication>
#include <QMutexLocker>
#include <QThread>

//#define DEBUG_WITH_DEFAULT_LOGGING (1)

namespace i2p {
namespace qt {

    //TODO rework for clean MVC
    int RunQT (int argc, char* argv[]) {

        QApplication app(argc, argv);

        int result;

        {
            std::shared_ptr<std::iostream> logstreamptr =
#ifdef DEBUG_WITH_DEFAULT_LOGGING
                    nullptr
#else
                    std::make_shared<std::stringstream>()
#endif
            ;
            //TODO move daemon init deinit to a bg thread
            DaemonQTImpl daemon;
            if (logstreamptr) (*logstreamptr) << "Initialising the daemon..." << std::endl;
            bool daemonInitSuccess = daemon.init(argc, argv, logstreamptr);
            if (!daemonInitSuccess) {
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
