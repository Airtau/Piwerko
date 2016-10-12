import QtQuick 2.4
import QtQuick.Controls 1.4
import QtQuick.Dialogs 1.2
Item {
OpcjeForm
{
    anchors.fill: parent
    button2.onClicked: stack.replace('qrc:/Glowne.qml')
}
PokazlokalizacjeForm
{
    anchors.fill: parent
    button1.onClicked: stack.replace('qrc:/Glowne.qml')
}
}
