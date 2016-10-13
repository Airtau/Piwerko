import QtQuick 2.5

ZaprosludziForm {
    button3.onClicked: stack.pop()
    button1.onClicked: wyslij()

    Connections {
        target: chleb
        onWysylacz: wysyl(wyslane)
    }

    function wyslij()
    {
    var wyslane
    wyslane = textInput1.text
    textInput1.text = ""

}
}
