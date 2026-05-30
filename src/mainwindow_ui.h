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
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mainwindow.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *statusPagePushButton;
    QWidget *statusButtonsPane;
    QPushButton *logViewerPushButton;
    QPushButton *settingsPagePushButton;
    QPushButton *tunnelsPagePushButton;
    QPushButton *restartPagePushButton;
    QPushButton *quitPagePushButton;
    QSpacerItem *horizontalSpacer_19;
    QSpacerItem *verticalSpacer;
    QLabel *aboutHrefLabel;
    QVBoxLayout *verticalLayout_7;
    QLabel *wrongInputLabel;
    QStackedWidget *stackedWidget;
    QWidget *statusPage;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QWidget *logViewerPage;
    QVBoxLayout *verticalLayout_4_logViewer;
    QLabel *logViewerTitleLabel;
    QPlainTextEdit *logViewerTextEdit;
    QWidget *settingsPage;
    QVBoxLayout *verticalLayout_4;
    QLabel *settingsTitleLabel;
    QScrollArea *settingsScrollArea;
    QWidget *settingsContents;
    QWidget *tunnelsPage;
    QVBoxLayout *verticalLayout_6;
    QLabel *tunnelsTitleLabel;
    QHBoxLayout *horizontalLayout_42;
    QPushButton *addClientTunnelPushButton;
    QPushButton *addServerTunnelPushButton;
    QSpacerItem *horizontalSpacer_30;
    QScrollArea *tunnelsScrollArea;
    QWidget *tunnelsScrollAreaWidgetContents;
    QWidget *restartPage;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QPushButton *doRestartI2PDPushButton;
    QSpacerItem *verticalSpacer_3;
    QWidget *quitPage;
    QVBoxLayout *quitPageVerticalLayout;
    QLabel *label_2;
    QPushButton *fastQuitPushButton;
    QPushButton *gracefulQuitPushButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(MainWindow *mainWindow);

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        statusPagePushButton->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        logViewerPushButton->setText(QCoreApplication::translate("MainWindow", "Log", nullptr));
        settingsPagePushButton->setText(QCoreApplication::translate("MainWindow", "General settings", nullptr));
        tunnelsPagePushButton->setText(QCoreApplication::translate("MainWindow", "Tunnels settings", nullptr));
        restartPagePushButton->setText(QCoreApplication::translate("MainWindow", "Restart", nullptr));
        quitPagePushButton->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
#if QT_CONFIG(tooltip)
        aboutHrefLabel->setToolTip(QCoreApplication::translate("MainWindow", "Show app name, version and build date", nullptr));
#endif // QT_CONFIG(tooltip)
        aboutHrefLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><a href=\"about:i2pd_qt\"><span style=\"text-decoration: none; color:#a0a0a0;\"><span style=\"font-weight: 500;\">i2pd_qt</span><br/>Version SHORT_VERSION \302\267 About...</span></a></p></body></html>", nullptr));
        wrongInputLabel->setText(QCoreApplication::translate("MainWindow", "wrongInputMessageLabel", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        logViewerTitleLabel->setText(QCoreApplication::translate("MainWindow", "Log", nullptr));
        settingsTitleLabel->setText(QCoreApplication::translate("MainWindow", "General settings", nullptr));
        tunnelsTitleLabel->setText(QCoreApplication::translate("MainWindow", "Tunnels settings", nullptr));
        addClientTunnelPushButton->setText(QCoreApplication::translate("MainWindow", "Add Client Tunnel", nullptr));
        addServerTunnelPushButton->setText(QCoreApplication::translate("MainWindow", "Add Server Tunnel", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Restart", nullptr));
        doRestartI2PDPushButton->setText(QCoreApplication::translate("MainWindow", "Restart i2pd", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        fastQuitPushButton->setText(QCoreApplication::translate("MainWindow", "Quit Now", nullptr));
        gracefulQuitPushButton->setText(QCoreApplication::translate("MainWindow", "Graceful Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
