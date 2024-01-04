//
// Created by Artur on 02/01/2024.
//

#ifndef CHATAPPQML_CHATCONTROLLER_H
#define CHATAPPQML_CHATCONTROLLER_H


#include <QObject>
#include <QSettings>
#include "apiservice.h"

class ChatController : public QObject{
    Q_OBJECT

public:
    ChatController(QObject *parent);
    int _lobby_id;
    QString lobby_name;


public slots:
    QList<QVariantMap> get_lobby();
    QList<QVariantMap> get_messages(int lobbyid);
    void send_message(int lobbyid,QString message,int userid);
    void set_lobby_id(int id);
    int lobby_id();
    int user_id();
    QString lobby_title();
    void set_lobby_name(QString title);


private:
    apiservice *api;
    QSettings *settings;

};


#endif //CHATAPPQML_CHATCONTROLLER_H
