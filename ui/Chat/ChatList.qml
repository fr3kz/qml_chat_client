import QtQuick
import QtQuick.Controls

Rectangle {
    width: 400
    height: 450
    color: "#6A5ACD" // Kolor tła pozostałego obszaru
    radius: 20

    Rectangle {
        width: parent.width
        height: 50
        color: "transparent" // Kolor nagłówka
        Text {
            anchors.centerIn: parent
            text: "Lista dostępnych chatów"
            color: "white"
            font.pixelSize: 20
        }
    }

    ListView {
        width: parent.width - 100
        height: parent.height - 150 // Zmniejszono wysokość o 50, aby napisać wyświetlało się nad listą
        anchors.topMargin: 100 // Zwiększono odstęp od góry
        anchors.centerIn: parent
        spacing: 10
        clip: true

        model: ListModel {
            id: chatModel

            Component.onCompleted: {
                var lobbyData = ChatController.get_lobby();
                for (var i = 0; i < lobbyData.length; ++i) {
                    append({ "id": lobbyData[i].id, "title": lobbyData[i].title });
                }
            }
        }

        delegate: Item {
            width: parent.width
            height: 80

            Rectangle {
                width: parent.width
                height: 80
                color: "lightgreen" // Kolor elementu listy
                border.color: "#6A5ACD" // Kolor obramowania
                border.width: 1
                radius: 10

                Text {
                    anchors.centerIn: parent
                    text: model.title
                    color: "white"
                    font.pixelSize: 16
                }

                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        console.log("Clicked on:", model.id)
                        ChatController.set_lobby_id(model.id);
                        ChatController.set_lobby_name(model.title);
                        chatloader.source = "../Chat/ChatPage.qml"
                    }
                }
            }
        }
    }
}
