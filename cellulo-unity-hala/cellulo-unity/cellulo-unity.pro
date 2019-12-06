#-------------------------------------------------
#
# Project created by QtCreator 2018-07-30T12:15:05
#
#-------------------------------------------------


# including base file
include(cellulo-unity.pri)

TARGET = cellulo-unity
TEMPLATE = lib

CONFIG += debug

unix {
    target.path = /usr/lib
    INSTALLS += target
}
