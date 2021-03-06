TEMPLATE = app


QT += sensors
QT += sql
QT += qml
QT += quick
QT += positioning
QT += network
QT += location
QT += widgets
android: QT += androidextras



CONFIG += c++11
CONFIG += mobility
MOBILITY += sensors
MOBILITY  += location

SOURCES += main.cpp \
    chleb.cpp \
    emotionalwintermaager.cpp \
    sms1.cpp \
    gps.cpp

RESOURCES += qml.qrc


# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    chleb.h \
    emotionalwintermaager.h \
    sms1.h \
    gps.h \

DISTFILES += \
    My_Java_Procedures.java \
    android/AndroidManifest.xml \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/gradlew \
    android/res/values/libs.xml \
    android/build.gradle \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradlew.bat \
    MyActivity.java

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android

