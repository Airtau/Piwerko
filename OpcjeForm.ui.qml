import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.2


Item {
    id: item1
    property alias button1: button1
    property alias button2: button2
    property alias textInput1: textInput1
    property alias text1: text1
    property alias text2: text2
    property alias text3: text3
    Button {
        id: button1
        x: 327
        y: 81
        width: 154
        height: 87
        text: qsTr("+")
    }

    TextInput {
        id: textInput1
        x: 110
        y: 45
        width: 211
        height: 70
        text: qsTr("|")
        clip: false
        cursorVisible: true
        opacity: 1
        selectionColor: "#1915a1"
        font.pixelSize: 12
    }

    Text {
        id: text1
        text: qsTr("Text")
        anchors.top: parent.top
        anchors.topMargin: 114
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 281
        anchors.left: parent.left
        anchors.leftMargin: 110
        anchors.right: parent.right
        anchors.rightMargin: 319
        font.pixelSize: 12
    }

    Text {
        id: text2
        text: qsTr("Text")
        anchors.top: parent.top
        anchors.topMargin: 199
        anchors.right: parent.right
        anchors.rightMargin: 319
        anchors.left: parent.left
        anchors.leftMargin: 110
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 196
        font.pixelSize: 12
    }

    Text {
        id: text3
        text: qsTr("Text")
        anchors.right: parent.right
        anchors.rightMargin: 319
        anchors.left: parent.left
        anchors.leftMargin: 110
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 104
        anchors.top: parent.top
        anchors.topMargin: 285
        font.pixelSize: 12
    }

    Button {
        id: button2
        x: 327
        y: 225
        width: 154
        height: 78
        text: qsTr("Wróć")
    }

}


