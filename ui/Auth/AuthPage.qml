import QtQuick 2.15
import QtQuick.Controls 2.15

Item {
    width: 400
    height: 300

    Rectangle {
        width: parent.width
        height: parent.height
        color: "lightblue"

        RegisterPage {
            id: registerPage
            anchors.fill: parent
            visible: false
        }

        LoginPage {
            id: loginPage
            anchors.fill: parent
            visible: true
        }

        Button {
            anchors.bottom: parent.bottom
            text: "Register"
            onClicked: {
                if(loginPage.visible) {
                    loginPage.visible = false;
                    registerPage.visible = true;
                }else{
                    loginPage.visible = true;
                    registerPage.visible = false;
                }
            }
        }

    }

}
