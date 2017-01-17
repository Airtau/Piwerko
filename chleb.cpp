#include "chleb.h"
#include <QQmlComponent>
#include <qtextstream.h>
#include <emotionalwintermaager.cpp>
#include <emotionalwintermaager.h>
#include <QtAndroidExtras>
#include <sms1.h>
#include <gps.h>
 #include <QThread>
QString wyslane;
QString lokalsi;
chleb::chleb(QObject *parent) : QObject(parent)
{

}

void chleb::wypiecz() {
    emit wypieczony();
}
void chleb::lap1(QString lokalizacja)
{
    lokalsi = lokalizacja;
}


void chleb::wysyl(QString wyslane, QString numer)
{int b = 0;
 int c = 0;


gps* gps2 = new gps();
gps2->startLocationAPI();

int wielkosc,ilosc_numerow;
QString  osobny_numer;
sms1 *a1;
EmotionalWinterMaager *z;
z = new EmotionalWinterMaager();
int n = 1000;
//a1->My_Procedure_Call_ReceiveSMS(n);

    QString plus = "+48";
    numer.remove(QString(';'), Qt::CaseInsensitive);
    numer.remove(plus);
    wielkosc = numer.length();
    ilosc_numerow = wielkosc / 9;
    QString tablica[ilosc_numerow];
    for ( c = 0; c < ilosc_numerow; c++)
        {
            osobny_numer = numer.left(9);
            numer.remove(osobny_numer);
            tablica[c] = osobny_numer;

           a1->WYSLIJSMS(osobny_numer, wyslane);
           z->zapisac1(wyslane,osobny_numer,lokalsi);
           z->thread()->usleep(1000000);
           z->szukacz(osobny_numer);
    }
//z->aktualizator("609001998","");
z->odleglosci(numer,wyslane);
emit Doqml("MyRect1");
emit wysylacz();
}
