import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Dialogs 1.2


OpcjeForm
{

  // button1.onClicked: chleb.wypiecz()
   property int i: 0
   button1.onClicked: zamiana()
   button2.onClicked: stack.pop()

   Connections {
       target: chleb
       //onWypieczony: console.log("smacznego")
   }
        //anchors.fill: parent
   function zamiana()
   {   //var i
       var re;

       re =textInput1.text
   if (i==0)
       {
          text1.text = re
          console.log(re)
          i++
      }
    else if (i==1)
  {
          text2.text = re
          console.log(re)
          i++

   }
else if (i==2)
      {
              text3.text = re
              console.log(re)
              i=0}
}
}
       // anchors.fill: parent
    /*StackView {
        id: stack
        initialItem: mainView
        anchors.fill: parent

    }*/


