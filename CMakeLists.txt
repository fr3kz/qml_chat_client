cmake_minimum_required(VERSION 3.27)
project(chatappqml)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/Users/artur/Qt/6.6.1/macos")

find_package(Qt6 COMPONENTS Core Quick Gui Qml WebSockets REQUIRED)

qt_add_executable(chatappqml
        main.cpp
        qml.qrc
        ui/Main.qml
        AuthController.cpp
        AuthController.h
        apiservice.cpp
        apiservice.h
        ChatController.cpp
        ChatController.h
)

target_link_libraries(chatappqml PRIVATE Qt6::Core Qt6::Gui Qt6::Quick Qt6::Qml Qt6::WebSockets)
