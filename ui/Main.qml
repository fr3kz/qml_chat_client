import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: "Chat Application"

    Loader {
        id: mainLoader
        anchors.fill: parent
        source: "../ui/Auth/AuthPage.qml"
    }

    Connections {
        target: AuthController
        function onLoginsuccess() {
            console.log("Zalogowano:")
            mainLoader.source = "../ui/Chat/MainView.qml"
        }
    }
}
