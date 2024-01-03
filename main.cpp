#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "AuthController.h"
#include "ChatController.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);


    QQmlApplicationEngine engine;


    AuthController authController(&app);
    ChatController chatController(&app);
    const QUrl url("../ui/Main.qml");
    QObject::connect(
            &engine,
            &QQmlApplicationEngine::objectCreationFailed,
            &app,
            []() { QCoreApplication::exit(-1); },
            Qt::QueuedConnection);


    engine.rootContext()->setContextProperty("QmlEngine", &engine);
    engine.rootContext()->setContextProperty("AuthController",&authController);
    engine.rootContext()->setContextProperty("ChatController",&chatController);

    engine.load(url);
    return app.exec();
}
