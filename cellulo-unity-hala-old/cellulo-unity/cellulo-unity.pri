QT += quick bluetooth

CONFIG += qt c++11 nostrip

linux:!android {
    CONFIG += link_pkgconfig

    packagesExist(bluez){
        PKGCONFIG += bluez
        DEFINES += BT_MULTIADAPTER_SUPPORT
        message("BlueZ found, enabling Bluetooth multiadapter support.")
    }
    else{
        message("BlueZ not found, disabling Bluetooth multiadapter support.")
    }
}

android{
    QT += androidextras
}

DEFINES += CELLULOUNITY_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    $$PWD/cellulounity.cpp \
    $$PWD/cellulothread.cpp \
    $$PWD/cellulorobotwrapper.cpp \
    $$PWD/CelluloUnity_Cellulo.cpp \
    $$PWD/cellulopoolclient.cpp

HEADERS += \
    $$PWD/cellulounity.h \
    $$PWD/cellulo-unity_global.h \
    $$PWD/cellulothread.h \
    $$PWD/cellulorobotwrapper.h \
    $$PWD/CelluloUnity_Cellulo.h \
    $$PWD/cellulopoolclient.h

LIBS += -lcelluloplugin -L$$[QT_INSTALL_QML]/Cellulo -L./

INCLUDEPATH += $$PWD/../../cellulo-core/qml-cellulo/src/ $$PWD/../../cellulo-core/qml-cellulo/include/
