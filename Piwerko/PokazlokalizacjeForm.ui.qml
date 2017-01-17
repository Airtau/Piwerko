import QtQuick 2.4
import QtQuick.Controls 1.4
import QtPositioning 5.0
Item {
    property alias button1: button1
    width: 400
    height: 400

    Button {
        id: button1
        x: 310
        y: 31
        text: qsTr("Button")
    }
}
