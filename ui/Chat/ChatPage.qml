import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import QtWebSockets 1.3

Rectangle {
    width: parent ? parent.width : 0
    height: parent ? parent.height : 0

    property int lobbyId: ChatController.lobby_id()

    WebSocket {
        id: socket
        url: "ws://127.0.0.1:8000/ws/chat/" + lobbyId + "/2/"
        onTextMessageReceived: {
            console.log("Received message:", message);
            try {
                var messageObj = JSON.parse(message);
                messageModel.append({
                    user: messageObj.user ? messageObj.user : "Unknown User",
                    message: messageObj.message ? messageObj.message : "Unknown Message",
                    time: messageObj.time ? formatTime(messageObj.time) : "Unknown Time"
                });
            } catch (error) {
                console.error("Error parsing message:", error);
            }
        }
        onStatusChanged: {
            if (socket.status == WebSocket.Error) {
                console.log("Error: " + socket.errorString);
            } else if (socket.status == WebSocket.Open) {
                console.log("Socket open. URL: " + socket.url);
            } else if (socket.status == WebSocket.Closed) {
                console.log("Socket closed");
            }
        }
        active: true
    }

    function formatTime(dateTime) {
        var date = new Date(dateTime);
        return date.getHours() + ":" + (date.getMinutes() < 10 ? '0' : '') + date.getMinutes();
    }

    ColumnLayout {
        anchors.centerIn: parent
        Layout.margins: 10

        Text {
            text: "Chat"
            font.pixelSize: 20
            color: "blue"
        }

        ListView {
            width: 400
            height: 300
            model: ListModel {
                id: messageModel
            }

            delegate: Item {
                width: parent ? parent.width : 0
                height: 80

                Rectangle {
                    width: parent ? parent.width : 0
                    height: 80
                    color: "lightblue"
                    border.color: "blue"
                    border.width: 1

                    ColumnLayout {
                        Text {
                            text: "User: " + (model.user ? model.user : "Unknown User")
                            color: "black"
                            padding: 5
                        }

                        Text {
                            text: "Message: " + (model.message ? model.message : "Unknown Message")
                            color: "black"
                            padding: 5
                        }

                        Text {
                            text: "Time: " + (model.time ? model.time : "Unknown Time")
                            color: "black"
                            padding: 5
                            horizontalAlignment: Text.AlignRight
                        }
                    }
                }
            }
        }

        RowLayout {
            spacing: 10

            Rectangle {
                width: 300
                height: 50
                color: "white"
                border.color: "blue"
                border.width: 1

                TextInput {
                    id: messageInput
                    anchors.fill: parent
                    text: "Type a message"
                    color: "black"
                    padding: 5
                }
            }

            Button {
                text: "Send"
                onClicked: {
                    var messageText = messageInput.text.trim()
                    if (messageText !== "") {
                        console.log(ChatController.lobby_id())
                        socket.sendTextMessage(JSON.stringify({ message: messageText }))
                        messageInput.text = ""
                    }
                }
            }
        }
    }
}
