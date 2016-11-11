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
    Q_INVOKABLE void zapisac(QString plik, QString papa);
    Q_INVOKABLE void zapisac1(QString nazwa, QString numer, QString lokalizacja );

public slots:
    void tepa(QNetworkReply *dzida);

signals:
    void costam(QString costam1);

private:
     QNetworkAccessManager *menager;
};

#endif // EMOTIONALWINTERMAAGER_H
