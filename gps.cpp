#include "gps.h"
#include "chleb.h"
#include <QGeoCoordinate>
#include <QApplication>
#include <QDesktopWidget>
#include <QGeoPositionInfo>
#include <QCoreApplication>
#include <QGeoPositionInfoSource>
#include <QDebug>

gps::gps(QWidget *parent)
 : QObject(parent), m_pLocationInfo(NULL)
{

 startLocationAPI();
}

gps::~gps()
{

}

void gps::startLocationAPI()
{


if (!m_pLocationInfo)
{
m_pLocationInfo =QGeoPositionInfoSource::createDefaultSource(0);
m_pLocationInfo->setPreferredPositioningMethods(QGeoPositionInfoSource::NonSatellitePositioningMethods);
connect(m_pLocationInfo, SIGNAL (positionUpdated(QGeoPositionInfo)),this, SLOT (positionUpdated(QGeoPositionInfo)));
m_pLocationInfo->startUpdates();
//qDebug() << m_pLocationInfo;
QGeoPositionInfo geoPositionInfo;


QGeoCoordinate q = geoPositionInfo.coordinate();
qreal latitude = q.latitude();
qreal longitude = q.longitude();
q.setLatitude(latitude);
q.setLongitude(longitude);
//qDebug() << q.toString(q.Degrees);


 }
}

void gps::positionUpdated(QGeoPositionInfo geoPositionInfo)
{
 if (geoPositionInfo.isValid())
QGeoCoordinate q;
QGeoCoordinate b;
QGeoCoordinate q = geoPositionInfo.coordinate();
qreal latitude = q.latitude();
qreal longitude = q.longitude();
QString value = q.toString(q.Degrees);
chleb *zimno;
zimno->lap1(value);
b.setLatitude(51.034126400000005);
b.setLongitude(17.344277299999998);

QString value1 = b.toString(b.Degrees);
b.type();
//qDebug() << value1;
qreal distanteTo = b.distanceTo(q);
qDebug() << distanteTo;
 }

