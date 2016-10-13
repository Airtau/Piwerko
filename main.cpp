#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "chleb.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    chleb razowy;
    engine.rootContext()->setContextProperty("chleb", &razowy);

    return app.exec();
}
