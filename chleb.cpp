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

void chleb::wysyl(QString wyslane, QString sialala)
{
qDebug( )<< wyslane;
qDebug() << sialala;
sms1 *a1;
a1->WYSLIJSMS();
//a1->My_Procedure_Call_SendSMS(1);

QString a = "telefontumasz";
EmotionalWinterMaager *z;
z = new EmotionalWinterMaager();
z->zapisac1(wyslane,sialala,a);
//sialala to numer, wyslane tresc sms, a bedzie lokalizacja

emit wysylacz();
}
