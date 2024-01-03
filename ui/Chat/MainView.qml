import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15

Rectangle {
    width: parent.width
    height: parent.height

    ColumnLayout {
        anchors.centerIn: parent



        Loader{
            id:chatloader
            anchors.centerIn: parent
            source: "../Chat/ChatList.qml"
        }


    }
}
