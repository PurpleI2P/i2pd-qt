#ifndef SAVERIMPL_H
#define SAVERIMPL_H

#include <map>
#include <string>

#include <QObject>
#include "QList"
#include "QSharedPointer"

#include "mainwindow.h"
#include "TunnelConfig.h"
#include "Saver.h"

class MainWindowItem;
class TunnelConfig;

class SaverImpl : public Saver
{
public:
    SaverImpl(MainWindow *mainWindowPtr_, QSharedPointer<QList<MainWindowItem*>> configItems_, QSharedPointer<std::map<std::string,TunnelConfig*>> tunnelConfigs_);
    virtual ~SaverImpl();
    virtual bool save(bool reloadAfterSave, const FocusEnum focusOn, const std::string& tunnelNameToFocus, QWidget* widgetToFocus);
    void setConfPath(QString& confpath_);
    void setTunnelsConfPath(QString& tunconfpath_);
private:
    QSharedPointer<QList<MainWindowItem*>> configItems;
    QSharedPointer<std::map<std::string,TunnelConfig*>> tunnelConfigs;
    QString confpath;
    QString tunconfpath;
    MainWindow* mainWindowPtr;
};

#endif // SAVERIMPL_H
