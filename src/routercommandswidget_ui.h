/********************************************************************************
** Form generated from reading UI file 'routercommandswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROUTERCOMMANDSWIDGET_H
#define UI_ROUTERCOMMANDSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_routerCommandsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *runPeerTestPushButton;
    QPushButton *declineTransitTunnelsPushButton;
    QPushButton *acceptTransitTunnelsPushButton;
    QPushButton *cancelGracefulQuitPushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *routerCommandsWidget)
    {
        if (routerCommandsWidget->objectName().isEmpty())
            routerCommandsWidget->setObjectName(QString::fromUtf8("routerCommandsWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        verticalLayout = new QVBoxLayout(routerCommandsWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(routerCommandsWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        runPeerTestPushButton = new QPushButton(routerCommandsWidget);
        runPeerTestPushButton->setObjectName(QString::fromUtf8("runPeerTestPushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(runPeerTestPushButton->sizePolicy().hasHeightForWidth());
        runPeerTestPushButton->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(runPeerTestPushButton);

        declineTransitTunnelsPushButton = new QPushButton(routerCommandsWidget);
        declineTransitTunnelsPushButton->setObjectName(QString::fromUtf8("declineTransitTunnelsPushButton"));
        sizePolicy2.setHeightForWidth(declineTransitTunnelsPushButton->sizePolicy().hasHeightForWidth());
        declineTransitTunnelsPushButton->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(declineTransitTunnelsPushButton);

        acceptTransitTunnelsPushButton = new QPushButton(routerCommandsWidget);
        acceptTransitTunnelsPushButton->setObjectName(QString::fromUtf8("acceptTransitTunnelsPushButton"));
        sizePolicy2.setHeightForWidth(acceptTransitTunnelsPushButton->sizePolicy().hasHeightForWidth());
        acceptTransitTunnelsPushButton->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(acceptTransitTunnelsPushButton);

        cancelGracefulQuitPushButton = new QPushButton(routerCommandsWidget);
        cancelGracefulQuitPushButton->setObjectName(QString::fromUtf8("cancelGracefulQuitPushButton"));
        cancelGracefulQuitPushButton->setEnabled(false);
        sizePolicy2.setHeightForWidth(cancelGracefulQuitPushButton->sizePolicy().hasHeightForWidth());
        cancelGracefulQuitPushButton->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(cancelGracefulQuitPushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(routerCommandsWidget);

        QMetaObject::connectSlotsByName(routerCommandsWidget);
    } // setupUi

    void retranslateUi(QWidget *routerCommandsWidget)
    {
        routerCommandsWidget->setWindowTitle(QCoreApplication::translate("routerCommandsWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("routerCommandsWidget", "Router Commands", nullptr));
        runPeerTestPushButton->setText(QCoreApplication::translate("routerCommandsWidget", "Run peer test", nullptr));
        declineTransitTunnelsPushButton->setText(QCoreApplication::translate("routerCommandsWidget", "Decline transit tunnels", nullptr));
        acceptTransitTunnelsPushButton->setText(QCoreApplication::translate("routerCommandsWidget", "Accept transit tunnels", nullptr));
        cancelGracefulQuitPushButton->setText(QCoreApplication::translate("routerCommandsWidget", "Cancel graceful quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class routerCommandsWidget: public Ui_routerCommandsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROUTERCOMMANDSWIDGET_H
