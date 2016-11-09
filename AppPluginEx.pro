#-------------------------------------------------
#
# Project created by QtCreator 2016-11-08T11:48:05
#
#-------------------------------------------------

QT       += core gui

TARGET = AppPluginEx
TEMPLATE = lib
CONFIG += plugin

DESTDIR = $$[QT_INSTALL_PLUGINS]/generic

SOURCES += dlgplugin.cpp \
    DlgModel.cpp

HEADERS += dlgplugin.h \
    DlgModel.h
DISTFILES += AppPluginEx.json

unix {
    target.path = /usr/lib
    INSTALLS += target
}
