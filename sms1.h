#ifndef SMS1_H
#define SMS1_H

#include <QObject>
#include <QtAndroidExtras/QAndroidJniObject> // For JNI, need to select Android Build
#include <QAndroidJniObject>

class sms1
{
public:
    sms1();
    void WYSLIJSMS();
    int My_Procedure_Call_SendSMS(int n);
    int My_Procedure_Call_ReceiveSMS(int n);
};

#endif // SMS1_H
