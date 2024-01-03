/****************************************************************************
** Meta object code from reading C++ file 'ChatController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ChatController.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChatController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSChatControllerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSChatControllerENDCLASS = QtMocHelpers::stringData(
    "ChatController",
    "get_lobby",
    "QList<QVariantMap>",
    "",
    "get_messages",
    "lobbyid",
    "send_message",
    "message",
    "userid",
    "set_lobby_id",
    "id",
    "lobby_id",
    "user_id"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSChatControllerENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[15];
    char stringdata1[10];
    char stringdata2[19];
    char stringdata3[1];
    char stringdata4[13];
    char stringdata5[8];
    char stringdata6[13];
    char stringdata7[8];
    char stringdata8[7];
    char stringdata9[13];
    char stringdata10[3];
    char stringdata11[9];
    char stringdata12[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSChatControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSChatControllerENDCLASS_t qt_meta_stringdata_CLASSChatControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "ChatController"
        QT_MOC_LITERAL(15, 9),  // "get_lobby"
        QT_MOC_LITERAL(25, 18),  // "QList<QVariantMap>"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 12),  // "get_messages"
        QT_MOC_LITERAL(58, 7),  // "lobbyid"
        QT_MOC_LITERAL(66, 12),  // "send_message"
        QT_MOC_LITERAL(79, 7),  // "message"
        QT_MOC_LITERAL(87, 6),  // "userid"
        QT_MOC_LITERAL(94, 12),  // "set_lobby_id"
        QT_MOC_LITERAL(107, 2),  // "id"
        QT_MOC_LITERAL(110, 8),  // "lobby_id"
        QT_MOC_LITERAL(119, 7)   // "user_id"
    },
    "ChatController",
    "get_lobby",
    "QList<QVariantMap>",
    "",
    "get_messages",
    "lobbyid",
    "send_message",
    "message",
    "userid",
    "set_lobby_id",
    "id",
    "lobby_id",
    "user_id"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSChatControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    3, 0x0a,    1 /* Public */,
       4,    1,   51,    3, 0x0a,    2 /* Public */,
       6,    3,   54,    3, 0x0a,    4 /* Public */,
       9,    1,   61,    3, 0x0a,    8 /* Public */,
      11,    0,   64,    3, 0x0a,   10 /* Public */,
      12,    0,   65,    3, 0x0a,   11 /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int,    5,    7,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Int,
    QMetaType::Int,

       0        // eod
};

Q_CONSTINIT const QMetaObject ChatController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSChatControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSChatControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSChatControllerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ChatController, std::true_type>,
        // method 'get_lobby'
        QtPrivate::TypeAndForceComplete<QList<QVariantMap>, std::false_type>,
        // method 'get_messages'
        QtPrivate::TypeAndForceComplete<QList<QVariantMap>, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'send_message'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'set_lobby_id'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'lobby_id'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'user_id'
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void ChatController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QList<QVariantMap> _r = _t->get_lobby();
            if (_a[0]) *reinterpret_cast< QList<QVariantMap>*>(_a[0]) = std::move(_r); }  break;
        case 1: { QList<QVariantMap> _r = _t->get_messages((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QVariantMap>*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->send_message((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 3: _t->set_lobby_id((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: { int _r = _t->lobby_id();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: { int _r = _t->user_id();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *ChatController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSChatControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ChatController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
