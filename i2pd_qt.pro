QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = i2pd_qt
TEMPLATE = app
QMAKE_CXXFLAGS *= -Wno-unused-parameter -Wno-maybe-uninitialized -Wno-deprecated-copy
CONFIG += strict_c++ c++11

CONFIG(debug, debug|release) {
    message(Debug build)

    # do not redirect logging to std::ostream and to Log pane
    DEFINES += DEBUG_WITH_DEFAULT_LOGGING

    DEFINES += I2PD_QT_DEBUG
    I2PDMAKE += DEBUG=yes
}
CONFIG(release, debug|release) {
    message(Release build)
    DEFINES += I2PD_QT_RELEASE
    I2PDMAKE += DEBUG=no
}

SOURCES += \
    src/DaemonQT.cpp \
    src/mainwindow.cpp \
    src/ClientTunnelPane.cpp \
    src/MainWindowItems.cpp \
    src/ServerTunnelPane.cpp \
    src/SignatureTypeComboboxFactory.cpp \
    src/TunnelConfig.cpp \
    src/TunnelPane.cpp \
    src/textbrowsertweaked1.cpp \
    src/pagewithbackbutton.cpp \
    src/widgetlock.cpp \
    src/widgetlockregistry.cpp \
    src/logviewermanager.cpp \
    src/DelayedSaveManager.cpp \
    src/Saver.cpp \
    src/DelayedSaveManagerImpl.cpp \
    src/SaverImpl.cpp \
    src/i2pd/daemon/Daemon.cpp \
    src/i2pd/daemon/HTTPServer.cpp \
    src/i2pd/daemon/I2PControl.cpp \
    src/i2pd/daemon/i2pd.cpp \
    src/i2pd/daemon/UPnP.cpp \
    src/AboutDialog.cpp \
    src/I2pdQtUtil.cpp

HEADERS += \
    src/DaemonQT.h \
    src/mainwindow.h \
    src/ClientTunnelPane.h \
    src/MainWindowItems.h \
    src/ServerTunnelPane.h \
    src/SignatureTypeComboboxFactory.h \
    src/TunnelConfig.h \
    src/TunnelPane.h \
    src/TunnelsPageUpdateListener.h \
    src/textbrowsertweaked1.h \
    src/pagewithbackbutton.h \
    src/widgetlock.h \
    src/widgetlockregistry.h \
    src/i2pd.rc \
    src/logviewermanager.h \
    src/DelayedSaveManager.h \
    src/Saver.h \
    src/DelayedSaveManagerImpl.h \
    src/SaverImpl.h \
    src/i2pd/daemon/Daemon.h \
    src/i2pd/daemon/HTTPServer.h \
    src/i2pd/daemon/I2PControl.h \
    src/i2pd/daemon/UPnP.h \
    src/AboutDialog.h \
    src/BuildDateTimeQt.h \
    src/I2pdQtUtil.h \
    src/I2pdQtTypes.h

INCLUDEPATH += src
INCLUDEPATH += src/i2pd/daemon
INCLUDEPATH += src/i2pd/libi2pd
INCLUDEPATH += src/i2pd/libi2pd_client

FORMS += \
    src/mainwindow.ui \
    src/tunnelform.ui \
    src/statusbuttons.ui \
    src/routercommandswidget.ui \
    src/generalsettingswidget.ui \
    src/AboutDialog.ui

LIBS += $$PWD/src/i2pd/libi2pd.a $$PWD/src/i2pd/libi2pdclient.a -lz

libi2pd.commands = @echo Building i2pd libraries
libi2pd.target = $$PWD/src/i2pd/libi2pd.a
libi2pd.depends = i2pd FORCE

i2pd.commands = cd $$PWD/src/i2pd/ && mkdir -p obj/libi2pd obj/libi2pd_client && CC=$$QMAKE_CC CXX=$$QMAKE_CXX $(MAKE) USE_UPNP=yes $$I2PDMAKE mk_obj_dir api_client
i2pd.target += $$PWD/src/i2pd/libi2pdclient.a
i2pd.depends = FORCE

cleani2pd.commands = cd $$PWD/src/i2pd/ && CC=$$QMAKE_CC CXX=$$QMAKE_CXX $(MAKE) clean
#cleani2pd.depends = clean

PRE_TARGETDEPS += $$PWD/src/i2pd/libi2pd.a $$PWD/src/i2pd/libi2pdclient.a
QMAKE_EXTRA_TARGETS += cleani2pd i2pd libi2pd
CLEAN_DEPS += cleani2pd

BuildDateTimeQtTarget.target = $$PWD/src/BuildDateTimeQt.h
BuildDateTimeQtTarget.depends = FORCE
# 'touch' is unix-only; will probably break on non-unix, TBD
BuildDateTimeQtTarget.commands = touch $$PWD/src/BuildDateTimeQt.h
PRE_TARGETDEPS += $$PWD/src/BuildDateTimeQt.h
QMAKE_EXTRA_TARGETS += BuildDateTimeQtTarget

# git only, port to other VCS, too. TBD
DEFINES += VCS_COMMIT_INFO="\\\"git:$(shell git -C \""$$_PRO_FILE_PWD_"\" describe)\\\""

macx {
	message("using mac os x target")
	BREWROOT=/usr/local
	BOOSTROOT=$$BREWROOT/opt/boost
	SSLROOT=$$BREWROOT/opt/libressl
	UPNPROOT=$$BREWROOT/opt/miniupnpc
	INCLUDEPATH += $$BOOSTROOT/include
	INCLUDEPATH += $$SSLROOT/include
	INCLUDEPATH += $$UPNPROOT/include
	LIBS += $$SSLROOT/lib/libcrypto.a
	LIBS += $$SSLROOT/lib/libssl.a
	LIBS += $$BOOSTROOT/lib/libboost_system.a
	LIBS += $$BOOSTROOT/lib/libboost_date_time.a
	LIBS += $$BOOSTROOT/lib/libboost_filesystem.a
	LIBS += $$BOOSTROOT/lib/libboost_program_options.a
	LIBS += $$UPNPROOT/lib/libminiupnpc.a
	LIBS += -Wl,-dead_strip
	LIBS += -Wl,-dead_strip_dylibs
	LIBS += -Wl,-bind_at_load
}

linux:!android {
        message("Using Linux settings")
        LIBS += -lcrypto -lssl -lboost_system -lboost_date_time -lboost_filesystem -lboost_program_options -lpthread -lminiupnpc
}

windows {
        message("Using Windows settings")
        RC_FILE = src/i2pd.rc
        DEFINES += BOOST_USE_WINDOWS_H WINDOWS _WINDOWS WIN32_LEAN_AND_MEAN MINIUPNP_STATICLIB
        DEFINES -= UNICODE _UNICODE
        BOOST_SUFFIX = -mt
        QMAKE_CXXFLAGS_RELEASE = -Os
        QMAKE_LFLAGS = -Wl,-Bstatic -static-libgcc -static-libstdc++ -mwindows

        # linker's -s means "strip"
        QMAKE_LFLAGS_RELEASE += -s

        LIBS = \
        $$PWD/src/i2pd/libi2pd.a $$PWD/src/i2pd/libi2pdclient.a \
        -lminiupnpc \
        -lboost_system$$BOOST_SUFFIX \
        -lboost_date_time$$BOOST_SUFFIX \
        -lboost_filesystem$$BOOST_SUFFIX \
        -lboost_program_options$$BOOST_SUFFIX \
        -lssl \
        -lcrypto \
        -lz \
        -lwsock32 \
        -lws2_32 \
        -lgdi32 \
        -liphlpapi \
        -lstdc++ \
        -lpthread
}

!android:!symbian:!maemo5:!simulator {
	message("Build with a system tray icon")
	# see also http://doc.qt.io/qt-4.8/qt-desktop-systray-systray-pro.html for example on wince*
	#sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS i2pd_qt.pro resources images
	RESOURCES = src/i2pd.qrc
	QT += xml
	#INSTALLS += sources
}

