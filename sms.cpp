#include <QtAndroidExtras/QAndroidJniObject> // For JNI, need to select Android Build
#include <QAndroidJniObject>
#include <QDebug>
/*int My_Procedure_Call_SendSMS(int n)
{
int Answer1;
Answer1 =  QAndroidJniObject::callStaticMethod<jint>("org/qtproject/qt5/android/bindings/MyActivity","JAVA_Send_SMS","(I)I",n);
return Answer1;
}

int My_Procedure_Call_ReceiveSMS(int n)
{
int Answer2;
Answer2 =  QAndroidJniObject::callStaticMethod<jint>("org/qtproject/qt5/android/bindings/MyActivity","JAVA_Receive_SMS","(I)I",n);
return Answer2;
}
*/

void WYSLIJSMS()
{
    QAndroidJniObject activity = QAndroidJniObject::callStaticObjectMethod("org/qtproject/qt7/android/QtNative",
                                                                            "activity",
                                                                            "()Landroid/app/Activity;");
    if (activity.isValid()){

        //get the default SmsManager
        QAndroidJniObject mySmsManager = QAndroidJniObject::callStaticObjectMethod("android/telephony/SmsManager",
                                                                                   "getDefault",
                                                                                   "()Landroid/telephony/SmsManager;");
        if (!mySmsManager.isValid()) {
            qDebug() << "Something wrong with SMS manager...";
        } else {

            // get phone number & text from UI and convert to Java String
           // QAndroidJniObject myPhoneNumber = QAndroidJniObject::fromString(ui->lineEditDestinataire->text());
            //QAndroidJniObject myTextMessage = QAndroidJniObject::fromString(ui->lineEditTexte->text());
            QAndroidJniObject numer = QAndroidJniObject::fromString(QString ("790730600"));
            QAndroidJniObject tekst = QAndroidJniObject::fromString(QString ("testuje, daj znac czy masz tego sms"));
            QAndroidJniObject scAddress = NULL;
            mySmsManager.callMethod<void>("sendTextMessage",
                                          "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/app/PendingIntent;Landroid/app/PendingIntent;)V",
                                          numer.object<jstring>(),
                                          scAddress.object<jstring>(),
                                          tekst.object<jstring>(), NULL, NULL );
        }

    } else {
        qDebug() << "Something wrong with Qt activity...";
    }
}
