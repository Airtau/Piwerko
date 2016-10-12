import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Dialogs 1.2

ApplicationWindow {
    visible: true
    width: 500
    height: 500
    title: qsTr("PIWERKO")
    StackView {
        id: stack
        initialItem: MenuView {}
        anchors.fill: parent
    }


   /* MainForm {
        anchors.fill: parent
        button1.onClicked: stack.push('qrc:/Zaprosludzi.qml')
        button2.onClicked: stack.push('qrc:/Opcje.qml')
        button3.onClicked: stack.push('qrc:/Pokazlokalizacje.qml')
        button4.onClicked: Qt.quit()
    }*/
}


/*  menuBar: MenuBar {
      Menu {
          title: qsTr("File")
          MenuItem {
              text: qsTr("&Open")
              onTriggered: console.log("Open action triggered");
          }
          MenuItem {
              text: qsTr("Exit")
              onTriggered: Qt.quit();
          }
      }
  }*/
