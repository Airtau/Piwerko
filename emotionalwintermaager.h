#ifndef EMOTIONALWINTERMAAGER_H
#define EMOTIONALWINTERMAAGER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QUrl>

class EmotionalWinterMaager : public QObject
{
    Q_OBJECT
public:
    explicit EmotionalWinterMaager(QObject *parent = 0);
    Q_INVOKABLE void zapisac1(QString nazwa, QString numer, QString lokalizacja );
   // Q_INVOKABLE void lap(QString nazwa, QString numer);

    Q_INVOKABLE void aktualizator(QString numer, QString lokalizacja);
    Q_INVOKABLE void szukacz(QString numer);
    Q_INVOKABLE void odleglosci(QString numerek, QString lokal);
public slots:
    void tepa(QNetworkReply *dzida);
    void otoona(QNetworkReply *jedyna);

signals:
    void costam(QString costam1);
    void lubiecisze(QString duzociszy);



private:
     QNetworkAccessManager *menager;
     QNetworkAccessManager *otoon;

};

#endif // EMOTIONALWINTERMAAGER_H
