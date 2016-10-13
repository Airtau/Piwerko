import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Dialogs 1.2


OpcjeForm
{
   button1.onClicked: chleb.wypiecz()
   button2.onClicked: stack.pop()

   Connections {
       target: chleb
       onWypieczony: console.log("smacznego")
   }
        //anchors.fill: parent
    }

       // anchors.fill: parent
    /*StackView {
        id: stack
        initialItem: mainView
        anchors.fill: parent

    }*/


