//
// Created by Artur on 02/01/2024.
//
#include <QJsonObject>
#include <QJsonArray>
#include "AuthController.h"

AuthController::AuthController(QObject *parent) : QObject(parent),api(new apiservice(this)),settings(new QSettings("chatappqml","chatappqml")) {

}

void AuthController::sign_up(QString email, QString password) {

    QJsonObject jobj;
    jobj["username"] = email;
    jobj["password"] = password;

    QJsonDocument jdoc(jobj);

    QByteArray jbytearray;
    jbytearray = jdoc.toJson();

    QJsonDocument response = api->post_auth("http://127.0.0.1:8000/users/login/",jbytearray);
    QJsonObject response_obj = response.object();

    qDebug() << response_obj["userid"];
    settings->setValue("sessionid",response_obj["message"].toString());
    settings->setValue("user",response_obj["user"].toString());
    settings->setValue("userid",response_obj["userid"].toInt());

    emit loginsuccess();
}

AuthController::~AuthController() noexcept {
}
