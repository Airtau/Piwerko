#include "emotionalwintermaager.h"

EmotionalWinterMaager::EmotionalWinterMaager(QObject *parent) : QObject(parent)
{
menager = new QNetworkAccessManager(this);
connect(menager, SIGNAL (finished(QNetworkReply*)),this, SLOT(tepa(QNetworkReply*)));

}

void EmotionalWinterMaager::tepa(QNetworkReply *dzida)
{
    QString niewiemcotorobi = dzida->readAll();
    qDebug() << niewiemcotorobi;
    emit costam(niewiemcotorobi);
}

void EmotionalWinterMaager::zapisac(QString plik,QString papa )
{
    QString nowe = "http://panoramix.ift.uni.wroc.pl/~kzoladziejewski/costam.php";
    menager->get(QNetworkRequest(QUrl(nowe + "&tekst=" + papa)));
}

void EmotionalWinterMaager::zapisac1(QString nazwa, QString numer, QString lokalizacja)
{
    QString nowe = "http://panoramix.ift.uni.wroc.pl/~kzoladziejewski/costam.php";
    menager->get(QNetworkRequest(QUrl(nowe + "?nazwa=" + nazwa+"&numer="+numer+"&lokalizacja="+lokalizacja)));

}
