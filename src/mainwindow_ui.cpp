#include <mainwindow_ui.h>

void Ui_MainWindow::setupUi(MainWindow *mainWindow)
{
    centralWidget = new QWidget(mainWindow);
    centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
    centralWidget->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    mainLayout = new QVBoxLayout(centralWidget);
    mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
    mainLayout->setSpacing(6);

    // ---- top-level navigation ----
    navTabBar = new QTabBar();
    navTabBar->setObjectName(QString::fromUtf8("navTabBar"));
    navTabBar->setExpanding(false);
    navTabBar->setDrawBase(false);
    for (int i = StatusTab; i <= LogTab; ++i) navTabBar->addTab(QString());

    mainLayout->addWidget(navTabBar, 0, Qt::AlignHCenter);

    // ---- validation error banner ----
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

    mainLayout->addWidget(wrongInputLabel);

    stackedWidget = new QStackedWidget();
    stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
    stackedWidget->setSizePolicy(QSizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding));

    // ---- Status: sub-page list on the left, content on the right ----
    statusPage = new QWidget();
    statusPage->setObjectName(QString::fromUtf8("statusPage"));
    statusPageLayout = new QHBoxLayout(statusPage);
    statusPageLayout->setObjectName(QString::fromUtf8("statusPageLayout"));
    statusPageLayout->setContentsMargins(0, 0, 0, 0);

    statusNavList = new QListWidget(statusPage);
    statusNavList->setObjectName(QString::fromUtf8("statusNavList"));
    statusNavList->setSizePolicy(QSizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding));
    statusNavList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    statusNavList->setSelectionMode(QAbstractItemView::SingleSelection);
    statusNavList->setUniformItemSizes(true);
    statusNavList->setSpacing(1);
    for (int i = 0; i < 9; ++i) statusNavList->addItem(QString());

    statusPageLayout->addWidget(statusNavList);

    verticalLayout_2 = new QVBoxLayout();
    verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

    statusPageLayout->addLayout(verticalLayout_2, 1);

    stackedWidget->addWidget(statusPage);

    // ---- Tunnels ----
    tunnelsPage = new QWidget();
    tunnelsPage->setObjectName(QString::fromUtf8("tunnelsPage"));
    verticalLayout_6 = new QVBoxLayout(tunnelsPage);
    verticalLayout_6->setSpacing(6);
    verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
    verticalLayout_6->setContentsMargins(0, 0, 0, 0);

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
    tunnelsScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    tunnelsScrollArea->setWidgetResizable(true);
    tunnelsScrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
    tunnelsScrollArea->setSizePolicy(QSizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding));
    tunnelsScrollAreaWidgetContents = new QWidget();
    tunnelsScrollAreaWidgetContents->setObjectName(QString::fromUtf8("tunnelsScrollAreaWidgetContents"));
    QVBoxLayout*tunlay=new QVBoxLayout();
    mainWindow->tunnelsListLayout=tunlay;
    tunnelsScrollAreaWidgetContents->setLayout(tunlay);
    tunnelsScrollArea->setWidget(tunnelsScrollAreaWidgetContents);

    verticalLayout_6->addWidget(tunnelsScrollArea);

    stackedWidget->addWidget(tunnelsPage);

    // ---- Settings ----
    settingsPage = new QWidget();
    settingsPage->setObjectName(QString::fromUtf8("settingsPage"));
    verticalLayout_4 = new QVBoxLayout(settingsPage);
    verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
    verticalLayout_4->setContentsMargins(0, 0, 0, 0);

    settingsScrollArea = new QScrollArea();
    settingsScrollArea->setObjectName(QString::fromUtf8("settingsScrollArea"));
    settingsScrollArea->setSizePolicy(QSizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding));
    settingsScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    settingsScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    settingsScrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
    settingsScrollArea->setWidgetResizable(true);
    settingsContents = new QWidget();
    settingsContents->setObjectName(QString::fromUtf8("settingsContents"));
    settingsContents->setSizePolicy(QSizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding));
    settingsScrollArea->setWidget(settingsContents);

    verticalLayout_4->addWidget(settingsScrollArea);

    stackedWidget->addWidget(settingsPage);

    // ---- Log ----
    logViewerPage = new QWidget();
    logViewerPage->setObjectName(QString::fromUtf8("logViewerPage"));
    logViewerPage->setSizePolicy(QSizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding));
    verticalLayout_4_logViewer = new QVBoxLayout(logViewerPage);
    verticalLayout_4_logViewer->setObjectName(QString::fromUtf8("verticalLayout_4_logViewer"));
    verticalLayout_4_logViewer->setContentsMargins(0, 0, 0, 0);

    logViewerTextEdit = new QPlainTextEdit(logViewerPage);
    logViewerTextEdit->setObjectName(QString::fromUtf8("logViewerTextEdit"));
    logViewerTextEdit->setSizePolicy(QSizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding));
    logViewerTextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    logViewerTextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    logViewerTextEdit->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
    logViewerTextEdit->setMaximumBlockCount(10000);
    logViewerTextEdit->setReadOnly(true);

    verticalLayout_4_logViewer->addWidget(logViewerTextEdit);

    stackedWidget->addWidget(logViewerPage);

    mainLayout->addWidget(stackedWidget, 1);

    // ---- footer: about link, save, restart, quit ----
    footerLayout = new QHBoxLayout();
    footerLayout->setObjectName(QString::fromUtf8("footerLayout"));

    aboutHrefLabel = new QLabel();
    aboutHrefLabel->setObjectName(QString::fromUtf8("aboutHrefLabel"));
    QFont font;
    font.setPointSize(9);
    aboutHrefLabel->setFont(font);
    aboutHrefLabel->setContextMenuPolicy(Qt::NoContextMenu);
    aboutHrefLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    footerLayout->addWidget(aboutHrefLabel);
    footerLayout->addStretch(1);

    saveButtonPane = new QWidget();
    saveButtonPane->setObjectName(QString::fromUtf8("saveButtonPane"));
    QHBoxLayout *saveButtonLayout = new QHBoxLayout(saveButtonPane);
    saveButtonLayout->setContentsMargins(0, 0, 0, 0);
    saveButton = new QPushButton();
    saveButton->setObjectName(QString::fromUtf8("saveButton"));
    saveButtonLayout->addWidget(saveButton);
    saveButtonPane->setVisible(false);

    footerLayout->addWidget(saveButtonPane);

    restartPushButton = new QPushButton();
    restartPushButton->setObjectName(QString::fromUtf8("restartPushButton"));

    footerLayout->addWidget(restartPushButton);

    // Quit actions are shared by the Quit dialog and the tray menu
    gracefulQuitAction = new QAction(mainWindow);
    gracefulQuitAction->setObjectName(QString::fromUtf8("gracefulQuitAction"));
    fastQuitAction = new QAction(mainWindow);
    fastQuitAction->setObjectName(QString::fromUtf8("fastQuitAction"));

    quitPushButton = new QPushButton();
    quitPushButton->setObjectName(QString::fromUtf8("quitPushButton"));

    footerLayout->addWidget(quitPushButton);

    mainLayout->addLayout(footerLayout);

    mainWindow->setCentralWidget(centralWidget);

    retranslateUi(mainWindow);

    navTabBar->setCurrentIndex(StatusTab);
    stackedWidget->setCurrentIndex(StatusTab);

    // Size the status list to its widest entry
    statusNavList->setFixedWidth(statusNavList->sizeHintForColumn(0)
                                 + 2 * statusNavList->frameWidth() + 24);

    mainWindow->setMinimumSize(QSize(640, 480));
    mainWindow->resize(QSize(908, 640));

    QMetaObject::connectSlotsByName(mainWindow);
} // setupUi
