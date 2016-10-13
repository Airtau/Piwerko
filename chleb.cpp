#include "chleb.h"
#include <QQmlComponent>
chleb::chleb(QObject *parent) : QObject(parent)
{

}

void chleb::wypiecz() {


    emit wypieczony();
}
