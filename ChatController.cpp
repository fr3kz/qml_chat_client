//
// Created by Artur on 02/01/2024.
//

#include <QJsonArray>
#include <QJsonObject>
#include "ChatController.h"

ChatController::ChatController(QObject *parent) : QObject(parent),api(new apiservice(this)),settings(new QSettings("chatappqml","chatappqml")) {

}

QList<QVariantMap> ChatController::get_lobby() {
    QJsonDocument response = QJsonDocument::fromJson(api->get_auth("http://127.0.0.1:8000/").toJson());

    if (response.isObject()) {
        QJsonObject responseObject = response.object();
        if (responseObject.contains("lobby") && responseObject["lobby"].isArray()) {
            QJsonArray jsonArray = responseObject["lobby"].toArray();

            qDebug() << "Array size:" << jsonArray.size();

            QList<QVariantMap> lobbylist;
            for (const auto &lobbyValue : jsonArray) {
                if (lobbyValue.isObject()) {
                    QJsonObject lobbyObject = lobbyValue.toObject();
                    QVariantMap lobbyMap;

                    lobbyMap["id"] = lobbyObject["id"].toInt();
                    lobbyMap["title"] = lobbyObject["title"].toString();

                    QVariantList userList;
                    QJsonValue usersValue = lobbyObject["users"];
                    if (usersValue.isArray()) {
                        QJsonArray usersArray = usersValue.toArray();
                        for (const auto &userValue : usersArray) {
                            userList.append(userValue.toInt());
                        }
                    }

                    lobbyMap["users"] = userList;
                    lobbylist.append(lobbyMap);

                }
            }

            return lobbylist;
        } else {
            qDebug() << "Error: 'lobby' key not found or it's not an array.";
        }
    } else {
        qDebug() << "Error: Response is not an object.";
    }

    return QList<QVariantMap>();
}

void ChatController::set_lobby_id(int id) {
    _lobby_id = id;
}

int ChatController::lobby_id() {
    return _lobby_id;
}

QList<QVariantMap> ChatController::get_messages(int lobbyid) {

    //web socket
}

void ChatController::send_message(int lobbyid, QString message, int userid) {}