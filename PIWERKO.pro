TEMPLATE = app

android: QT += androidextras
QT += sensors
QT += sql
QT += qml quick widgets
QT += positioning


CONFIG += c++11
CONFIG += mobility
MOBILITY += sensors

SOURCES += main.cpp \
    chleb.cpp \
    baza.cpp \
    emotionalwintermaager.cpp \
    sms1.cpp

RESOURCES += qml.qrc


# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    chleb.h \
    emotionalwintermaager.h \
    sms1.h

DISTFILES += \
    MyActivity.java \
    My_Java_Procedures.java
