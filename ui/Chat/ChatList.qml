import QtQuick 2.15
import QtQuick.Controls 2.15

ListView {
    width: 300
    height: 400
    Text {
        text: "Lista dostępnych chatów"
        font.pixelSize: 20
    }

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
        height: 50

        Rectangle {
            width: parent.width
            height: 50
            color: "lightblue"

            Text {
                anchors.centerIn: parent
                text: model.title
            }

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log("Clicked on:", model.id)
                    // zapisanie lobby_id
                    ChatController.set_lobby_id(model.id);
                    // przeniesienie do innego widoku
                    chatloader.source = "../Chat/ChatPage.qml"
                }
            }
        }
    }
}