#include "emotionalwintermaager.h"

#include <QDebug>
#include <QThread>
#include <QQuickView>
 #include <QQuickItem>
#include <QQmlComponent>
#include <QQmlProperty>
#include <QColor>
#include <QQmlApplicationEngine>
QString tresc;
QString numeros;



EmotionalWinterMaager::EmotionalWinterMaager(QObject *parent) : QObject(parent)
{

menager = new QNetworkAccessManager(this);
connect(menager, SIGNAL (finished(QNetworkReply*)),this, SLOT(tepa(QNetworkReply*)));
otoon = new QNetworkAccessManager(this);
    connect(otoon, SIGNAL (finished(QNetworkReply*)),this, SLOT(otoona(QNetworkReply*)));
qml = new QNetworkAccessManager(this);
        connect(qml, SIGNAL (finished()),this, SLOT(odleglosci()));
}

void EmotionalWinterMaager::tepa(QNetworkReply *dzida)
{
    QString niewiemcotorobi = dzida->readAll();
qDebug () << niewiemcotorobi;
   emit costam(niewiemcotorobi);
}

void EmotionalWinterMaager::otoona(QNetworkReply *jedyna)
{
    int a,b;
    QString swecialowygina = jedyna->readAll();
    a = swecialowygina.length();
    b = a/2;
QString tancze = swecialowygina.left(b);
    qDebug () << tancze;
    emit lubiecisze(swecialowygina.left(b));

}

void EmotionalWinterMaager::zapisac1(QString nazwa, QString numer, QString lokalizacja)
{
 QString nowe = "http://panoramix.ift.uni.wroc.pl/~kzoladziejewski/costam.php";
menager->get(QNetworkRequest(QUrl(nowe + "?nazwa=" + nazwa+"&numer="+numer+"&lokalizacja="+lokalizacja)));
}

void EmotionalWinterMaager::aktualizator(QString numer, QString lokalizacja)
{QString nowe = "http://panoramix.ift.uni.wroc.pl/~kzoladziejewski/costam2.php";
     menager->get(QNetworkRequest(QUrl(nowe+"?numer="+numer+"&lokalizacja="+lokalizacja)));
}

void EmotionalWinterMaager::szukacz(QString numer)
{
QString nowe1 = "http://panoramix.ift.uni.wroc.pl/~kzoladziejewski/costam1.php";

 otoon->get(QNetworkRequest(QUrl(nowe1+"?numer="+numer)));


}

void EmotionalWinterMaager::odleglosci(QString numerek, QString lokal)
{

 /*
    QQmlApplicationEngine engine;

    qDebug() << "A1";
    //view.setSource(QUrl(QStringLiteral("qrc:/Pokazlokalizacje.qml")));
    engine.load(QUrl(QStringLiteral("qrc:/Pokazlokalizacje.qml")));
    qDebug() << "A2";

    qDebug() << "A3";
    QObject *   myRect1 = engine.rootObjects().at(0)->findChild<QObject*>("myRect1");
    qDebug() << "A4";

        qDebug() << "A5";
    qDebug() << "stara nazwa to:" << myRect1->property("text");
    myRect1->setProperty("text","bialy kiel ");
    qDebug() << "zmienilem nazwe:" << myRect1->property("text");

        qDebug() << "A6 ";

*/
    emit Doqml("MyRect1");

}
