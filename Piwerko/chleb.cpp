#include "chleb.h"
#include <QQmlComponent>
#include <qtextstream.h>
#include <emotionalwintermaager.cpp>
#include <emotionalwintermaager.h>
#include <QtAndroidExtras>
#include <sms1.h>
QString wyslane;

chleb::chleb(QObject *parent) : QObject(parent)
{

}

void chleb::wypiecz() {
    emit wypieczony();
}

void chleb::wysyl(QString wyslane, QString numer)
{
qDebug() << wyslane;
qDebug() << numer;
sms1 *a1;
a1->WYSLIJSMS(wyslane, numer);
//a1->My_Procedure_Call_SendSMS(1);
a1->My_Procedure_Call_ReceiveSMS(2);
QString a = "telefontumasz";
EmotionalWinterMaager *z;
z = new EmotionalWinterMaager();
z->zapisac1(wyslane,numer,a);
//sialala to numer, wyslane tresc sms, a bedzie lokalizacja

emit wysylacz();
}
