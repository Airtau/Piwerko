#ifndef SMS1_H
#define SMS1_H

#include <QObject>
#include <QtAndroidExtras/QAndroidJniObject>
#include <QAndroidJniObject>

class sms1
{
public:
    sms1();
    void WYSLIJSMS(QString numer, QString tekstwiadomosci);
    int My_Procedure_Call_ReceiveSMS(int n );
};

#endif // SMS1_H
