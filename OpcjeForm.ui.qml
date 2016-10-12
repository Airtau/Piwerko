import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.2


Item {

    ApplicationWindow
    {
        id: opcje
        width: 500
        height: 500
        color: "#fbfbfb"
        title: "START"



        RowLayout {
            anchors.centerIn: parent

        }



TextInput {
    id: textInput1
    x: 4526
    y: 4632
    width: 177
    height: 33
    text: qsTr("Text Input")
    font.pixelSize: 12
}

Button {
    id: button1
    x: 4726
    y: 4632
    width: 112
    height: 33
    text: qsTr("Button")
}

Text {
    id: text1
    x: 4526
    y: 4703
    width: 177
    height: 28
    text: qsTr("Text")
    font.pixelSize: 12
}

Text {
    id: text2
    x: 4526
    y: 4771
    width: 177
    height: 49
    text: qsTr("Text")
    font.pixelSize: 12
}

Text {
    id: text3
    x: 4526
    y: 4826
    width: 177
    height: 58
    text: qsTr("Text")
    font.pixelSize: 12
}

Button {
    id: button2
    x: 4709
    y: 4771
    width: 129
    height: 49
    text: qsTr("Button")
}}

Button {
    id: button3
    x: 323
    y: 190
    text: qsTr("Button")
}

}
