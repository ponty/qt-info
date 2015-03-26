#-------------------------------------------------
#
# Project created by QtCreator 2014-10-21T16:06:11
#
#-------------------------------------------------

QT       += core gui
QT += gui-private core-private
QT += opengl

TARGET = qt-info
CONFIG   += console
CONFIG   += debug
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp


isEmpty(PREFIX) {
 PREFIX = /usr/local
}
installPrefix = $${PREFIX}
#installPrefix = /opt/$${TARGET}
target.path = $${installPrefix}/bin
export(target.path)
INSTALLS += target


include(info.pri)

DISTFILES += \
    README.md
