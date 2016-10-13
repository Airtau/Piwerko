#include "chleb.h"

chleb::chleb(QObject *parent) : QObject(parent)
{

}

void chleb::wypiecz() {

    emit wypieczony();
}
