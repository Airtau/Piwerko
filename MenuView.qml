import QtQuick 2.4
import QtQuick.Controls 1.4
import QtQuick.Dialogs 1.2

MainForm {
   //anchors.fill: parent
    button1.onClicked: stack.push('qrc:/Zaprosludzi.qml')
    button2.onClicked: stack.push('qrc:/Opcje.qml')
    button3.onClicked: stack.push('qrc:/Pokazlokalizacje.qml')

    button4.onClicked: Qt.quit()

}

