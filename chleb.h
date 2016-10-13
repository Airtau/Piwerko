#ifndef CHLEB_H
#define CHLEB_H
#include <QObject>

class chleb : public QObject
{
    Q_OBJECT
public:
    explicit chleb(QObject *parent = 0);
    Q_INVOKABLE void wypiecz();

signals:
    void wypieczony();

public slots:
};

#endif // CHLEB_H
