import QtQuick
import QtQuick.Controls

Item {
    width: 400
    height: 300

    Rectangle {
        width: parent.width
        height: parent.height
        color: "lightblue"

        Rectangle{
            color: "lightgreen"
            width:350
            height:350
            anchors.centerIn: parent
            radius:40
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



        }

}

}
