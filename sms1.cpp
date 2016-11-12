#include "sms1.h"
#include <QtAndroidExtras/QAndroidJniObject> // For JNI, need to select Android Build
#include <QAndroidJniObject>
#include <qdebug.h>
#include <QString>

int sms1::My_Procedure_Call_SendSMS(int n)
{
int Answer1;
Answer1 =  QAndroidJniObject::callStaticMethod<jint>("org/qtproject/qt5/android/bindings/MyActivity","JAVA_Send_SMS","(I)I",n);
return Answer1;
qDebug() << Answer1;
qDebug() << "hahahahahahahahahahahahahahahahahahahahah";
}

int sms1::My_Procedure_Call_ReceiveSMS(int n)
{
int Answer2;
Answer2 =  QAndroidJniObject::callStaticMethod<jint>("org/qtproject/qt5/android/bindings/MyActivity","JAVA_Receive_SMS","(I)I",n);
qDebug() << Answer2;
return Answer2;
}

void sms1::WYSLIJSMS(QString numer, QString tekstwiadomosci)
{
    QAndroidJniObject activity = QAndroidJniObject::callStaticObjectMethod("org/qtproject/qt5/android/QtNative.java",
                                                                            "activity",
                                                                            "()Landroid/app/Activity;");
    if (activity.isValid()){
        qDebug() << "cos zlego z aktywnoscia...";
    }
        QAndroidJniObject mySmsManager = QAndroidJniObject::callStaticObjectMethod("android/telephony/SmsManager",
                                                                                   "getDefault",
                                                                                   "()Landroid/telephony/SmsManager;");
        if (!mySmsManager.isValid()) {
            qDebug() << "wywala";
        }
        else {




            QAndroidJniObject myPhoneNumber = QAndroidJniObject::fromString(numer);
            QAndroidJniObject myTextMessage = QAndroidJniObject::fromString(tekstwiadomosci);
            QAndroidJniObject scAddress = NULL;
            //QAndroidJniObject sentIntent = NULL;
           // QAndroidJniObject deliveryIntent = NULL;


           mySmsManager.callMethod<void>("sendTextMessage",
                                          "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/app/PendingIntent;Landroid/app/PendingIntent;)V",
                                          myPhoneNumber.object<jstring>(),
                                          NULL,
                                          myTextMessage.object<jstring>(), NULL, NULL );

        }}


