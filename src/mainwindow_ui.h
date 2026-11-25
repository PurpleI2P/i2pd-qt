/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QAction> // QtWidgets in Qt5, QtGui in Qt6
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mainwindow.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    // Order of the top-level tabs; also the page order in stackedWidget.
    enum MainTab { StatusTab = 0, TunnelsTab, SettingsTab, LogTab };

    QWidget *centralWidget;
    QVBoxLayout *mainLayout;
    QTabBar *navTabBar;
    QLabel *wrongInputLabel;
    QStackedWidget *stackedWidget;

    QWidget *statusPage;
    QHBoxLayout *statusPageLayout;
    QListWidget *statusNavList;
    QVBoxLayout *verticalLayout_2; // status content area, filled in by MainWindow

    QWidget *tunnelsPage;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_42;
    QPushButton *addClientTunnelPushButton;
    QPushButton *addServerTunnelPushButton;
    QSpacerItem *horizontalSpacer_30;
    QScrollArea *tunnelsScrollArea;
    QWidget *tunnelsScrollAreaWidgetContents;

    QWidget *settingsPage;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *settingsScrollArea;
    QWidget *settingsContents;

    QWidget *logViewerPage;
    QVBoxLayout *verticalLayout_4_logViewer;
    QPlainTextEdit *logViewerTextEdit;

    QHBoxLayout *footerLayout;
    QLabel *aboutHrefLabel;
    QWidget *saveButtonPane;
    QPushButton *saveButton;
    QPushButton *restartPushButton;
    QPushButton *quitPushButton;
    QAction *gracefulQuitAction;
    QAction *fastQuitAction;

    void setupUi(MainWindow *mainWindow);

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));

        navTabBar->setTabText(StatusTab, QCoreApplication::translate("MainWindow", "Status", nullptr));
        navTabBar->setTabText(TunnelsTab, QCoreApplication::translate("MainWindow", "Tunnels", nullptr));
        navTabBar->setTabText(SettingsTab, QCoreApplication::translate("MainWindow", "Settings", nullptr));
        navTabBar->setTabText(LogTab, QCoreApplication::translate("MainWindow", "Log", nullptr));

        // Order must match MainWindow::StatusPage
        static const char * const statusPageNames[] = {
            QT_TRANSLATE_NOOP("MainWindow", "Overview"),
            QT_TRANSLATE_NOOP("MainWindow", "Router commands"),
            QT_TRANSLATE_NOOP("MainWindow", "Local destinations"),
            QT_TRANSLATE_NOOP("MainWindow", "Leasesets"),
            QT_TRANSLATE_NOOP("MainWindow", "Tunnels"),
            QT_TRANSLATE_NOOP("MainWindow", "Transit tunnels"),
            QT_TRANSLATE_NOOP("MainWindow", "Transports"),
            QT_TRANSLATE_NOOP("MainWindow", "I2P tunnels"),
            QT_TRANSLATE_NOOP("MainWindow", "SAM sessions"),
        };
        for (int i = 0; i < statusNavList->count(); ++i)
            statusNavList->item(i)->setText(QCoreApplication::translate("MainWindow", statusPageNames[i], nullptr));

        saveButton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        restartPushButton->setText(QCoreApplication::translate("MainWindow", "Restart", nullptr));
        quitPushButton->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        gracefulQuitAction->setText(QCoreApplication::translate("MainWindow", "Graceful quit", nullptr));
        fastQuitAction->setText(QCoreApplication::translate("MainWindow", "Quit now", nullptr));
#if QT_CONFIG(tooltip)
        aboutHrefLabel->setToolTip(QCoreApplication::translate("MainWindow", "Show app name, version and build date", nullptr));
        restartPushButton->setToolTip(QCoreApplication::translate("MainWindow", "Restart the i2pd router", nullptr));
#endif // QT_CONFIG(tooltip)
        wrongInputLabel->setText(QCoreApplication::translate("MainWindow", "wrongInputMessageLabel", nullptr));
        addClientTunnelPushButton->setText(QCoreApplication::translate("MainWindow", "Add Client Tunnel", nullptr));
        addServerTunnelPushButton->setText(QCoreApplication::translate("MainWindow", "Add Server Tunnel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
