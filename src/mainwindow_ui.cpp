#include <mainwindow_ui.h>

void Ui_MainWindow::setupUi(MainWindow *mainWindow)
{
    centralWidget = new QWidget(mainWindow);
    centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
    centralWidget->setSizePolicy(sizePolicy);
    centralWidget->setMinimumSize(QSize(908, 600));
    horizontalLayout = new QHBoxLayout(centralWidget);
    horizontalLayout->setSpacing(6);
    horizontalLayout->setContentsMargins(11, 11, 11, 11);
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
    horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
    horizontalLayout->setContentsMargins(0, 0, 0, 0);
    verticalLayout = new QVBoxLayout();
    verticalLayout->setSpacing(6);
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
    verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
    statusPagePushButton = new QPushButton();
    statusPagePushButton->setObjectName(QString::fromUtf8("statusPagePushButton"));
    statusPagePushButton->setEnabled(true);

    verticalLayout->addWidget(statusPagePushButton);

    statusButtonsPane = new QWidget();
    statusButtonsPane->setObjectName(QString::fromUtf8("statusButtonsPane"));
    QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(statusButtonsPane->sizePolicy().hasHeightForWidth());
    statusButtonsPane->setSizePolicy(sizePolicy1);
    statusButtonsPane->setFixedWidth(172);

    verticalLayout->addWidget(statusButtonsPane);

    logViewerPushButton = new QPushButton();
    logViewerPushButton->setObjectName(QString::fromUtf8("logViewerPushButton"));

    verticalLayout->addWidget(logViewerPushButton);

    settingsPagePushButton = new QPushButton();
    settingsPagePushButton->setObjectName(QString::fromUtf8("settingsPagePushButton"));
    settingsPagePushButton->setEnabled(true);

    verticalLayout->addWidget(settingsPagePushButton);

    tunnelsPagePushButton = new QPushButton();
    tunnelsPagePushButton->setObjectName(QString::fromUtf8("tunnelsPagePushButton"));
    tunnelsPagePushButton->setEnabled(true);

    verticalLayout->addWidget(tunnelsPagePushButton);

    restartPagePushButton = new QPushButton();
    restartPagePushButton->setObjectName(QString::fromUtf8("restartPagePushButton"));
    restartPagePushButton->setEnabled(true);

    verticalLayout->addWidget(restartPagePushButton);

    quitPagePushButton = new QPushButton();
    quitPagePushButton->setObjectName(QString::fromUtf8("quitPagePushButton"));
    quitPagePushButton->setEnabled(true);

    verticalLayout->addWidget(quitPagePushButton);

    horizontalSpacer_19 = new QSpacerItem(171, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

    verticalLayout->addItem(horizontalSpacer_19);

    verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    verticalLayout->addItem(verticalSpacer);

    aboutHrefLabel = new QLabel();
    aboutHrefLabel->setObjectName(QString::fromUtf8("aboutHrefLabel"));
    QFont font;
    font.setPointSize(9);
    aboutHrefLabel->setFont(font);
    aboutHrefLabel->setContextMenuPolicy(Qt::NoContextMenu);
    aboutHrefLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
    aboutHrefLabel->setMargin(6);
    aboutHrefLabel->setIndent(0);

    verticalLayout->addWidget(aboutHrefLabel);


    horizontalLayout->addLayout(verticalLayout);

    verticalLayout_7 = new QVBoxLayout();
    verticalLayout_7->setSpacing(6);
    verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
    verticalLayout_7->setSizeConstraint(verticalLayout_7->SetMaximumSize);
    wrongInputLabel = new QLabel();
    wrongInputLabel->setObjectName(QString::fromUtf8("wrongInputLabel"));
    wrongInputLabel->setMinimumSize(QSize(0, 30));
    QPalette palette;
    QBrush brush(QColor(0, 0, 0, 255));
    brush.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
    QBrush brush1(QColor(255, 0, 0, 255));
    brush1.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Button, brush1);
    QBrush brush2(QColor(255, 127, 127, 255));
    brush2.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Light, brush2);
    QBrush brush3(QColor(255, 63, 63, 255));
    brush3.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
    QBrush brush4(QColor(127, 0, 0, 255));
    brush4.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
    QBrush brush5(QColor(170, 0, 0, 255));
    brush5.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
    palette.setBrush(QPalette::Active, QPalette::Text, brush);
    QBrush brush6(QColor(255, 255, 255, 255));
    brush6.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
    palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
    palette.setBrush(QPalette::Active, QPalette::Base, brush6);
    palette.setBrush(QPalette::Active, QPalette::Window, brush1);
    palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
    palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
    QBrush brush7(QColor(255, 255, 220, 255));
    brush7.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
    palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
    palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
    palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
    palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
    palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
    palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
    palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
    palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
    palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
    palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
    palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
    palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
    palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
    palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
    palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
    palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
    palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
    palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
    palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
    palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
    palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
    palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
    palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
    palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
    palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
    palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
    palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
    palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
    palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
    palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
    palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
    wrongInputLabel->setPalette(palette);
    wrongInputLabel->setWordWrap(true);
    wrongInputLabel->setMargin(10);

    verticalLayout_7->addWidget(wrongInputLabel);

    stackedWidget = new QStackedWidget();
    stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
    stackedWidget->setSizePolicy(QSizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding));
    statusPage = new QWidget();
    statusPage->setObjectName(QString::fromUtf8("statusPage"));
    verticalLayoutWidget_5 = new QWidget(statusPage);
    verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
    verticalLayoutWidget_5->setGeometry(QRect(0, 0, 707, 586));
    verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
    verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
    verticalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
    label_4 = new QLabel(verticalLayoutWidget_5);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    QFont font1;
    font1.setPointSize(15);
    label_4->setFont(font1);
    label_4->setSizePolicy(QSizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed));
    label_4->setFixedHeight(label_4->sizeHint().height());

    verticalLayout_5->addWidget(label_4);

    verticalLayout_2 = new QVBoxLayout();
    verticalLayout_2->setSpacing(6);
    verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
    verticalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);

    verticalLayout_5->addLayout(verticalLayout_2);

    stackedWidget->addWidget(statusPage);
    logViewerPage = new QWidget();
    logViewerPage->setObjectName(QString::fromUtf8("logViewerPage"));
    _logViewer = new QWidget(logViewerPage);
    _logViewer->setObjectName(QString::fromUtf8("_logViewer"));
    _logViewer->setGeometry(QRect(0, 0, 707, 586));
    verticalLayout_4_logViewer = new QVBoxLayout(_logViewer);
    verticalLayout_4_logViewer->setObjectName(QString::fromUtf8("verticalLayout_4_logViewer"));
    verticalLayout_4_logViewer->setSizeConstraint(QLayout::SetDefaultConstraint);
    logViewerTitleLabel = new QLabel(_logViewer);
    logViewerTitleLabel->setObjectName(QString::fromUtf8("logViewerTitleLabel"));
    logViewerTitleLabel->setFont(font1);
    logViewerTitleLabel->setSizePolicy(QSizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed));
    logViewerTitleLabel->setFixedHeight(logViewerTitleLabel->sizeHint().height());

    verticalLayout_4_logViewer->addWidget(logViewerTitleLabel);

    logViewerTextEdit = new QPlainTextEdit(_logViewer);
    logViewerTextEdit->setObjectName(QString::fromUtf8("logViewerTextEdit"));
    sizePolicy.setHeightForWidth(logViewerTextEdit->sizePolicy().hasHeightForWidth());
    logViewerTextEdit->setSizePolicy(sizePolicy);
    logViewerTextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    logViewerTextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    logViewerTextEdit->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
    logViewerTextEdit->setMaximumBlockCount(10000);
    logViewerTextEdit->setProperty("acceptRichText", QVariant(false));
    logViewerTextEdit->setProperty("widgetResizable", QVariant(true));

    verticalLayout_4_logViewer->addWidget(logViewerTextEdit);

    stackedWidget->addWidget(logViewerPage);
    settingsPage = new QWidget();
    settingsPage->setObjectName(QString::fromUtf8("settingsPage"));
    verticalLayout_4 = new QVBoxLayout(settingsPage);
    verticalLayout_4->setSpacing(6);
    verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
    verticalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
    //verticalLayout_4->setContentsMargins(0, 0, 0, 0);
    settingsTitleLabel = new QLabel();
    settingsTitleLabel->setObjectName(QString::fromUtf8("settingsTitleLabel"));
    settingsTitleLabel->setFont(font1);
    settingsTitleLabel->setSizePolicy(QSizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed));
    settingsTitleLabel->setFixedHeight(settingsTitleLabel->sizeHint().height());

    verticalLayout_4->addWidget(settingsTitleLabel);

    settingsScrollArea = new QScrollArea();
    settingsScrollArea->setObjectName(QString::fromUtf8("settingsScrollArea"));
    settingsScrollArea->setSizePolicy(QSizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding));
    settingsScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    settingsScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    settingsScrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
    settingsScrollArea->setWidgetResizable(true);
    settingsContents = new QWidget();
    settingsContents->setObjectName(QString::fromUtf8("settingsContents"));
    settingsContents->setSizePolicy(QSizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding));
    settingsScrollArea->setWidget(settingsContents);

    verticalLayout_4->addWidget(settingsScrollArea);

    stackedWidget->addWidget(settingsPage);
    tunnelsPage = new QWidget();
    tunnelsPage->setObjectName(QString::fromUtf8("tunnelsPage"));
    verticalLayout_6 = new QVBoxLayout(tunnelsPage);
    verticalLayout_6->setSpacing(6);
    verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
    verticalLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
    tunnelsTitleLabel = new QLabel();
    tunnelsTitleLabel->setObjectName(QString::fromUtf8("tunnelsTitleLabel"));
    tunnelsTitleLabel->setFont(font1);
    tunnelsTitleLabel->setSizePolicy(QSizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed));
    tunnelsTitleLabel->setFixedHeight(tunnelsTitleLabel->sizeHint().height());
    //tunnelsTitleLabel->setMaximumHeight(tunnelsTitleLabel->sizeHint().height());
    //tunnelsTitleLabel->setMinimumHeight(50);
    verticalLayout_6->addWidget(tunnelsTitleLabel);

    horizontalLayout_42 = new QHBoxLayout();
    horizontalLayout_42->setSpacing(6);
    horizontalLayout_42->setObjectName(QString::fromUtf8("horizontalLayout_42"));
    addClientTunnelPushButton = new QPushButton();
    addClientTunnelPushButton->setObjectName(QString::fromUtf8("addClientTunnelPushButton"));

    horizontalLayout_42->addWidget(addClientTunnelPushButton);

    addServerTunnelPushButton = new QPushButton();
    addServerTunnelPushButton->setObjectName(QString::fromUtf8("addServerTunnelPushButton"));

    horizontalLayout_42->addWidget(addServerTunnelPushButton);

    horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout_42->addItem(horizontalSpacer_30);


    verticalLayout_6->addLayout(horizontalLayout_42);

    tunnelsScrollArea = new QScrollArea();
    tunnelsScrollArea->setObjectName(QString::fromUtf8("tunnelsScrollArea"));
    tunnelsScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    tunnelsScrollArea->setWidgetResizable(true);
    tunnelsScrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
    tunnelsScrollArea->setSizePolicy(QSizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding));
    tunnelsScrollAreaWidgetContents = new QWidget();
    tunnelsScrollAreaWidgetContents->setObjectName(QString::fromUtf8("tunnelsScrollAreaWidgetContents"));
    QVBoxLayout*tunlay=new QVBoxLayout();
    mainWindow->tunnelsListLayout=tunlay;
    tunnelsScrollAreaWidgetContents->setLayout(tunlay);
    //tunnelsScrollAreaWidgetContents->setGeometry(QRect(0, 0, 699, 425));
    tunnelsScrollArea->setWidget(tunnelsScrollAreaWidgetContents);

    verticalLayout_6->addWidget(tunnelsScrollArea);

    stackedWidget->addWidget(tunnelsPage);
    restartPage = new QWidget();
    restartPage->setObjectName(QString::fromUtf8("restartPage"));
    verticalLayoutWidget_3 = new QWidget(restartPage);
    verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
    verticalLayoutWidget_3->setGeometry(QRect(0, 0, 707, 586));
    verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
    verticalLayout_3->setSpacing(6);
    verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
    verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
    label_3 = new QLabel(verticalLayoutWidget_3);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setFont(font1);
    label_3->setSizePolicy(QSizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed));
    label_3->setFixedHeight(label_3->sizeHint().height());

    verticalLayout_3->addWidget(label_3);

    doRestartI2PDPushButton = new QPushButton(verticalLayoutWidget_3);
    doRestartI2PDPushButton->setObjectName(QString::fromUtf8("doRestartI2PDPushButton"));

    verticalLayout_3->addWidget(doRestartI2PDPushButton);

    verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    verticalLayout_3->addItem(verticalSpacer_3);

    stackedWidget->addWidget(restartPage);
    quitPage = new QWidget();
    quitPage->setObjectName(QString::fromUtf8("quitPage"));
    verticalLayoutWidget_2 = new QWidget(quitPage);
    verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
    verticalLayoutWidget_2->setGeometry(QRect(0, 0, 707, 531));
    quitPageVerticalLayout = new QVBoxLayout(verticalLayoutWidget_2);
    quitPageVerticalLayout->setObjectName(QString::fromUtf8("quitPageVerticalLayout"));
    quitPageVerticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
    label_2 = new QLabel(verticalLayoutWidget_2);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setFont(font1);
    label_2->setSizePolicy(QSizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed));
    label_2->setFixedHeight(label_2->sizeHint().height());

    quitPageVerticalLayout->addWidget(label_2);

    fastQuitPushButton = new QPushButton(verticalLayoutWidget_2);
    fastQuitPushButton->setObjectName(QString::fromUtf8("fastQuitPushButton"));

    quitPageVerticalLayout->addWidget(fastQuitPushButton);

    gracefulQuitPushButton = new QPushButton(verticalLayoutWidget_2);
    gracefulQuitPushButton->setObjectName(QString::fromUtf8("gracefulQuitPushButton"));

    quitPageVerticalLayout->addWidget(gracefulQuitPushButton);

    verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    quitPageVerticalLayout->addItem(verticalSpacer_2);

    stackedWidget->addWidget(quitPage);

    verticalLayout_7->addWidget(stackedWidget);


    horizontalLayout->addLayout(verticalLayout_7);

    mainWindow->setCentralWidget(centralWidget);

    retranslateUi(mainWindow);

    stackedWidget->setCurrentIndex(1);

    mainWindow->updateGeometry();
    QMetaObject::connectSlotsByName(mainWindow);
} // setupUi
