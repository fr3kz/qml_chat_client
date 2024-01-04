import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

Item {
    id: loginPage
   Rectangle{

   }
    Rectangle {
        width: 350
        height: 300
        anchors.centerIn: parent
        color: "#6A5ACD" // Jasny kolor tła
        radius: 10

        ColumnLayout {
            anchors.centerIn: parent
            spacing: 10

            Text {
                text: "Chat App"
                font.pixelSize: 24
                color: "#333333" // Ciemny kolor tekstu
                font.bold: true
            }

            TextField {
                id: emailField
                placeholderText: "Email"
                Layout.fillWidth: true
                Layout.margins: 5
                font.pixelSize: 16
                background: Rectangle {
                    color: "lightgreen"
                    radius: 5
                }
                color:"#333333"
                placeholderTextColor: "#333333"
            }

            TextField {
                id: passwordField
                placeholderText: "Password"
                echoMode: TextInput.Password
                Layout.fillWidth: true
                Layout.margins: 5
                font.pixelSize: 16
                background: Rectangle {
                    color: "lightgreen"
                    radius: 5
                }
                color:"#333333"
                placeholderTextColor: "#333333"
            }
            Button{
                width: parent.width
                padding: 15
                background: Rectangle {
                    color: "#4285f4" // Kolor przycisku, przykładowy kolor niebieski
                    radius: 5
                }
                contentItem: Text {
                    text: "Nie masz konta?"
                    color: "white"
                    font.bold: true
                }
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
            Button {
                text: "Zaloguj się"
                width: parent.width
                padding: 10
                background: Rectangle {
                    color: "#4285f4" // Kolor przycisku, przykładowy kolor niebieski
                    radius: 5
                }
                contentItem: Text {
                    text: "Zaloguj się"
                    color: "white"
                    font.bold: true
                }
                onClicked: {
                    console.log("Email:", emailField.text);
                    console.log("Password:", passwordField.text);

                    // Tutaj możesz wywołać funkcję z kontrolera autoryzacji
                     AuthController.sign_up(emailField.text, passwordField.text)
                }
            }
        }
    }
}
