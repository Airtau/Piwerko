import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Dialogs 1.2
GlowneForm {
    StackView {
        id: stack
        initialItem: MenuView {}
        anchors.fill: parent
    }

}
