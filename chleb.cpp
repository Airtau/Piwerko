#include "chleb.h"
#include <QQmlComponent>
QString wyslane;
chleb::chleb(QObject *parent) : QObject(parent)
{

}

void chleb::wypiecz() {
    emit wypieczony();
}

void chleb::wysyl(QObject *wyslane)
{
if (&wyslane == QString)
{
        destroyed(this);
}
emit wysylacz();
}
