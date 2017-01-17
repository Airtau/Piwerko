#ifndef GPS_H
#define GPS_H

#include <QMainWindow>
#include <QGeoPositionInfo>
#include <QGeoPositionInfoSource>


// QtMobility namespace



class gps : public QObject
{
 Q_OBJECT
public:

explicit gps(QWidget *parent = 0);

 virtual ~gps();

public slots:
    void positionUpdated(QGeoPositionInfo geoPositionInfo);
     void startLocationAPI();

    private:
     QGeoPositionInfoSource *m_pLocationInfo;


    };

    #endif //GPS_H
