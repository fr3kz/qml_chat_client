import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15

Item {
    id: loginPage

    Rectangle {
        width: parent.width
        height: parent.height
        color: "lightgreen"

        ColumnLayout {
            anchors.centerIn: parent

            Text {
                text: "Login Page"
                font.pixelSize: 20
            }

            TextField {
                id: emailField
                placeholderText: "Email"
                Layout.fillWidth: true
                Layout.margins: 5
            }

            TextField {
                id: passwordField
                placeholderText: "Password"
                echoMode: TextInput.Password
                Layout.fillWidth: true
                Layout.margins: 5
            }

            Button {
                text: "Zaloguj się"
                onClicked: {
                    console.log("Email:", emailField.text);
                    console.log("Password:", passwordField.text);

                    AuthController.sign_up(emailField.text,passwordField.text)


                }
            }
        }
    }
}
