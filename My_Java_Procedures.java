My_Java_Procedures.java
package org.qtproject.qt5.android.bindings;
import android.app.Activity;
import android.content.ContentResolver;
import android.database.Cursor;
import android.net.Uri;
import android.os.Bundle;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.Button;
import android.widget.ListView;
import android.widget.SimpleCursorAdapter;
import android.widget.TextView;
import android.content.Intent;
import java.util.HashSet;
import java.util.Set;
import java.util.StringTokenizer;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.preference.PreferenceManager;
import android.telephony.SmsMessage;


public class My_Java_Procedures {


public My_Java_Procedures My_Java_Procedures_instance;
{
    My_Java_Procedures_instance = this;
}




public int sms_receive(int n)
{
    System.out.println("Debug message Receive SMS");
  Activity act = new Activity();
    Cursor cursor = act.getApplicationContext().getContentResolver().query(Uri.parse("content://sms/inbox"), null, null, null, null);

    System.out.println("Debug 2");


    if (cursor.moveToFirst()) {
    System.out.println("Debug 3");
        do {
           String msgData = "";
           for(int idx=0;idx<cursor.getColumnCount();idx++)
           {
               msgData += " " + cursor.getColumnName(idx) + ":" + cursor.getString(idx);
               System.out.println(msgData);
           }

        } while (cursor.moveToNext());
    } else {

    }

return n+100;
}
}
