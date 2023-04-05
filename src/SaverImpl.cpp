#include "SaverImpl.h"

#include <fstream>
#include <assert.h>
#include <sstream>

#include "QList"
#include "QString"

#include "mainwindow.h"

SaverImpl::SaverImpl(MainWindow *mainWindowPtr_) :
    confpath(), tunconfpath(), mainWindowPtr(mainWindowPtr_)
{
    QObject::connect(this, SIGNAL(showPreventedSaveTunnelsConfMessage()), mainWindowPtr, SLOT(showTunnelsPagePreventedMessage()));
}

SaverImpl::~SaverImpl() {}

bool SaverImpl::save(bool reloadAfterSave, const FocusEnum focusOn, const std::string& tunnelNameToFocus, QWidget* widgetToFocus) {
    MutexWrapperLock lock(mainWindowPtr->volatileDataHolder->getMutex());
    MainWindow::VolatileData* vdata = mainWindowPtr->volatileDataHolder->getData();

    //save main config
    {
        std::stringstream out;
        for(QList<MainWindowItem*>::iterator it = vdata->configItems.begin(); it!= vdata->configItems.end(); ++it) {
            MainWindowItem* item = *it;
            item->saveToStringStream(out);
        }

        using namespace std;


        QString backup=confpath+"~";
        if(QFile::exists(backup)) QFile::remove(backup);//TODO handle errors
        if(QFile::exists(confpath)) QFile::rename(confpath, backup);//TODO handle errors
        ofstream outfile;
        outfile.open(confpath.toStdString());//TODO handle errors
        outfile << out.str().c_str();
        outfile.close();
    }

    //save tunnels config
    if (mainWindowPtr->isPreventSaveTunnelsMode()) {
        emit showPreventedSaveTunnelsConfMessage();
    }else{
        std::stringstream out;

        for (const auto& it : vdata->tunnelConfigs) {
            //const std::string& name = it->first;
            TunnelConfig* tunconf = it.second;
            tunconf->saveHeaderToStringStream(out);
            tunconf->saveToStringStream(out);
            tunconf->saveI2CPParametersToStringStream(out);
        }

        using namespace std;

        QString backup=tunconfpath+"~";
        if(QFile::exists(backup)) QFile::remove(backup);//TODO handle errors
        if(QFile::exists(tunconfpath)) QFile::rename(tunconfpath, backup);//TODO handle errors
        ofstream outfile;
        outfile.open(tunconfpath.toStdString());//TODO handle errors
        outfile << out.str().c_str();
        outfile.close();
    }

    if(reloadAfterSave) {
        //reload saved configs
#if 0
        i2p::client::context.ReloadConfig();
#endif

        if(reloadAfterSave) emit reloadTunnelsConfigAndUISignal(focusOn==FocusEnum::focusOnTunnelName?QString::fromStdString(tunnelNameToFocus):"");
    }

    return true;
}

void SaverImpl::setConfPath(QString& confpath_) { confpath = confpath_; }

void SaverImpl::setTunnelsConfPath(QString& tunconfpath_) { tunconfpath = tunconfpath_; }

/*void SaverImpl::setTunnelFocus(bool focusOnTunnel, std::string tunnelNameToFocus) {
    this->focusOnTunnel=focusOnTunnel;
    this->tunnelNameToFocus=tunnelNameToFocus;
}*/
