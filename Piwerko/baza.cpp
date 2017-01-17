#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QString>
#include <QUrl>
#include <QSqlError>
int baza()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");

    db.setPort(3306);
    db.setHostName("www.mysql.cba.pl"); //gdzie
    db.setUserName("piwerko2"); //login
   // db.setPassword("kkk"); //haslo
   db.setPassword("kkk!"); //haslo
    db.setDatabaseName("piwerko2"); //ktora


    if(!db.open()) //dostep
    {qDebug() << db.lastError();
        qDebug() << "Nieudane polaczenie z baza danychn";
}
    else
{qDebug() << "dzialam";
        //QSqlQuery dodawanie;
      //  dodawanie.exec("INSERT INTO db687437 (nazwa, numer, lokalizacjaNW, lokalizacjaEW) VALUES ('JA', '570098352', '0', '0')");
       // dodawanie.exec("INSERT INTO db687437 (nazwa, numer, lokalizacjaNW, lokalizacjaEW) VALUES ('HANIA', '609001998', '0', '0')");

      /*  QStringList tables = db.tables();
        for(int i=0;i<tables.size();i++)
            qDebug() << tables.at(i);
         QSqlQuery pobieranie;
        if(!pobieranie.exec("SELECT * FROM nazwa"))
            qDebug() << "Brak rekordów w tabeli Stats";

        while(pobieranie.next())
        {
            int d = pobieranie.value("Deaths").toInt();
            int k = pobieranie.value(2).toInt();

            qDebug() << k << " / " << d;
        }
*/
        db.close();
}
}
