//
// Created by Artur on 02/01/2024.
//

#ifndef CHATAPPQML_AUTHCONTROLLER_H
#define CHATAPPQML_AUTHCONTROLLER_H

#include <QObject>
#include <QString>
#include <QSettings>
#include "apiservice.h"

class AuthController : public QObject{
    Q_OBJECT

public:
    AuthController(QObject *parent);
    ~AuthController();
public slots:
    void sign_up(QString email, QString password);

signals:
    void loginsuccess();
private:
    apiservice *api;
    QSettings *settings;
};


#endif //CHATAPPQML_AUTHCONTROLLER_H
