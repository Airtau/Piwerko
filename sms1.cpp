#include "sms1.h"
#include <QtAndroidExtras/QAndroidJniObject>
#include <QAndroidJniObject>
#include <qdebug.h>
#include <QString>



/*void sms1::ODCZYTSMS()
{
   QAndroidJniObject activity = QAndroidJniObject::callStaticObjectMethod("org/qtproject/qt5/android/QtNative.java",
                                                                          "activity",
                                                                       "()Landroid/app/Activity;");
     qDebug() << "pochwal sie1";
   QAndroidJniObject SmsMessage = QAndroidJniObject::callStaticObjectMethod("android/telephony/SmsMessage",
                                                                            "",
                                                                            "()Landroid/telephony/SmsMessage");
   qDebug() << "pochwal sie2";

SmsMessage.callMethod<void>("getMessageBody","");

qDebug() << "pochwal sie3";
}
*/

int sms1::My_Procedure_Call_ReceiveSMS(int n)
{

int Answer2;
Answer2 =  QAndroidJniObject::callStaticMethod<jint>("org/qtproject/qt5/android/bindings/MyActivity","JAVA_Receive_SMS","(I)I",n);
qDebug() << Answer2;
return Answer2;
}



void sms1::WYSLIJSMS(QString numer, QString tekstwiadomosci)
{{
QAndroidJniObject activity = QAndroidJniObject::callStaticObjectMethod("org/qtproject/qt5/android/QtNative.java",
                                                                       "activity",
                                                                       "()Landroid/app/Activity;");

        qDebug() << "cos zlego z aktywnoscia...";
    }
        QAndroidJniObject mySmsManager = QAndroidJniObject::callStaticObjectMethod("android/telephony/SmsManager",
                                                                                   "getDefault",
                                                                                   "()Landroid/telephony/SmsManager;");
        if (!mySmsManager.isValid()) {

        }
        else {
        QAndroidJniObject myPhoneNumber = QAndroidJniObject::fromString(numer);
        QAndroidJniObject myTextMessage = QAndroidJniObject::fromString(tekstwiadomosci);
        mySmsManager.callMethod<void>("sendTextMessage",
                                 "(Ljava/lang/String;"
                                 "Ljava/lang/String;"
                                 "Ljava/lang/String;"
                                 "Landroid/app/PendingIntent;"
                                 "Landroid/app/PendingIntent;)V",
                                 myPhoneNumber.object<jstring>(),
                                 NULL,
                                 myTextMessage.object<jstring>(),
                                 NULL,
                                 NULL );

        }}



