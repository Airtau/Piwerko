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

signals:
    void wypieczony();
    void wysylacz();

public slots:
};

#endif // CHLEB_H
