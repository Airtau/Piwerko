import QtQuick 2.4

Item {
    width: 400
    height: 400

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

    Opcje {
        x: -19
        y: 112
    }
}

