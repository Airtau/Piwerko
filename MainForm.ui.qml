import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.2

Item {
    id: item1
    property alias button1: button1
    property alias button2: button2
    width: 9900
    height: 9500
    property alias button3: button3
    property alias button4: button4
    visible: true
    clip: false


    ApplicationWindow
    {
        id: start
        width: 500
        height: 500
        color: "#fbfbfb"
        title: "START"



        RowLayout {
            anchors.centerIn: parent

        }
    }

    Button {
        id: button1
        x: 190
        y: 0
        width: 150
        height: 90
        text: qsTr("Zapros Ludzi")
    }

    Button {
        id: button2
        x: 190
        y: 110
        width: 150
        height: 90
        text: qsTr("Opcje")
        transformOrigin: Item.Center
    }

    Button {
        id: button3
        x: 190
        y: 220
        width: 150
        height: 90
        text: qsTr("Pokaz lokalizacje")
    }

    Button {
        id: button4
        x: 190
        y: 330
        width: 150
        height: 90
        text: qsTr("Wyjscie")
    }
}


