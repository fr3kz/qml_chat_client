import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15


Item {
    id: registerPage

    Rectangle {
        width: parent.width
        height: parent.height
        color: "lightcoral"

        ColumnLayout{
            id: registercolumnlayout
            anchors.centerIn: parent

            Text {
                text: "Register Page"
                font.pixelSize: 20
            }

            TextField {
                id:registeremailField
                placeholderText: "Email"
                Layout.fillWidth: true
                Layout.margins: 5
            }

            TextField {
                id:registerpasswordField
                placeholderText: "Password"
                Layout.fillWidth: true
                Layout.margins: 5
            }

            Button{
                text: "Zarejestruj sie"
                onClicked:{
                    console.log("Email:", registeremailField.text);
                    console.log("Password:", registerpasswordField.text);

                }
            }


        }




    }


}
