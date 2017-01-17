#ifndef CHLEB_H
#define CHLEB_H
#include <QObject>
#include <QGeoCoordinate>
class chleb : public QObject
{
    Q_OBJECT
public:
    explicit chleb(QObject *parent = 0);
    Q_INVOKABLE void wypiecz();
    Q_INVOKABLE void wysyl(QString wyslane, QString numer);
    Q_INVOKABLE void lap1(QString lokalizalicja);
signals:
    void wypieczony();
    void wysylacz();
     void Doqml(QString ha);
public slots:
};

#endif // CHLEB_H
