import QtQuick 2.4
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.2
Item {
    width: 400
    height: 400
    property alias button1: button1
    property alias button3: button3
    property alias button2: button2
    property alias textArea1: textArea1
    property alias textArea2: textArea2
    Button {
        id: button1
        x: 221
        y: 38
        width: 98
        height: 63
        text: qsTr("Wyslij")
    }

    Label {
        id: label1
        x: 47
        y: 268
        width: 168
        height: 49
        text: qsTr("Label")
    }

    Button {
        id: button2
        x: 221
        y: 141
        text: qsTr("...")
    }

    Button {
        id: button3
        x: 221
        y: 244
        width: 98
        height: 73
        text: qsTr("Wroc")
    }

    TextArea {
        id: textArea1
        x: 26
        y: 27
        width: 189
        height: 101
    }

    TextArea {
        id: textArea2
        x: 26
        y: 141
        width: 189
        height: 82
    }
}
