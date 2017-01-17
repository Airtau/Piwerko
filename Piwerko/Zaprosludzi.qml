import QtQuick 2.5

ZaprosludziForm {
    button3.onClicked: stack.pop()
    button1.onClicked: {chleb.wysyl(textArea1.text, textArea2.text);
    textArea1.text = "", textArea2.text=""}


    Connections {
        target: chleb
    }


}
