import QtQuick 2.5
import QtQml 2.2
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.2

Item {
    Connections {
       target: chleb
       onDoqml: text1.text = ha
    }

    property alias button1: button1.text
    property alias text1Text: text1.text
   property alias lokalizacja1: lokalizacja1
    property alias text2: text2
    property alias lokalizacja2: lokalizacja2
    property alias text3: text3
    property alias lokalizacja3: lokalizacja3
    property alias text4: text4
    property alias lokalizacja4: lokalizacja4
    property alias text5: text5
    property alias lokalizacja5: lokalizacja5
    property alias text6: text6
    property alias lokalizacja6: lokalizacja6
Rectangle
{   anchors.fill: parent
    objectName: "myRect"

    border.color: "red"
    color:"green"

   Button
        {
        id: button1
        x: 327
        y: 77
        text: qsTr("Button")
        checkable: true
        enabled: true
        onClicked: stack.pop()
        }

    Text {
        id: text1
        x: 83
        y: 101
        width: 118
        height: 28
        text: qsTr("kiedys zadziala");

        font.pixelSize: 12
        objectName: "myRect1"
    }

    Text {
        id: lokalizacja1
        x: 207
        y: 101
        width: 118
        height: 28
        text: "lOKALIZACJA"
        font.pixelSize: 12
    }

    Text {
        id: text2
        x: 83
        y: 135
        width: 118
        height: 28
        text: "NUMER"
        font.pixelSize: 12
    }

    Text {
        id: lokalizacja2
        x: 207
        y: 135
        width: 118
        height: 28
        text: "lOKALIZACJA"
        font.pixelSize: 12
    }

    Text {
        id: text3
        x: 83
        y: 169
        width: 118
        height: 28
        text: "NUMER"
        font.pixelSize: 12
    }

    Text {
        id: lokalizacja3
        x: 207
        y: 169
        width: 118
        height: 28
        text: "lOKALIZACJA"
        font.pixelSize: 12
    }

    Text {
        id: text4
        x: 83
        y: 203
        width: 118
        height: 28
        text: "NUMER"
        font.pixelSize: 12
    }

    Text {
        id: lokalizacja4
        x: 207
        y: 203
        width: 118
        height: 28
        text: "lOKALIZACJA"
        font.pixelSize: 12
    }

    Text {
        id: text5
        x: 83
        y: 237
        width: 118
        height: 28
        text: "NUMER"
        font.pixelSize: 12
    }

    Text {
        id: lokalizacja5
        x: 207
        y: 237
        width: 118
        height: 28
        text: "lOKALIZACJA"
        font.pixelSize: 12
        objectName: "MyRect2"
    }

    Text {
        id: text6
        x: 83
        y: 271
        width: 118
        height: 28
        text: qsTr("NUMER")
        font.pixelSize: 12
    }

    Text {
        id: lokalizacja6
        x: 207
        y: 271
        width: 118
        height: 28
        text: qsTr("lOKALIZACJA")
        font.pixelSize: 12
    }
}}


