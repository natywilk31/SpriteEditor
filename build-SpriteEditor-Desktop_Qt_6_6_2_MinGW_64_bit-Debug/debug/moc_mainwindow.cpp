/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SpriteEditor/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "start",
    "",
    "sizeVal",
    "sendPenColor",
    "color",
    "saveWarningSave",
    "saveWarningDiscard",
    "onColorPickerClicked",
    "updateMaxFrame",
    "count",
    "updateButtons",
    "previewPopup",
    "saveWarningPopup",
    "startSizeInput"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[11];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[13];
    char stringdata5[6];
    char stringdata6[16];
    char stringdata7[19];
    char stringdata8[21];
    char stringdata9[15];
    char stringdata10[6];
    char stringdata11[14];
    char stringdata12[13];
    char stringdata13[17];
    char stringdata14[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 5),  // "start"
        QT_MOC_LITERAL(17, 0),  // ""
        QT_MOC_LITERAL(18, 7),  // "sizeVal"
        QT_MOC_LITERAL(26, 12),  // "sendPenColor"
        QT_MOC_LITERAL(39, 5),  // "color"
        QT_MOC_LITERAL(45, 15),  // "saveWarningSave"
        QT_MOC_LITERAL(61, 18),  // "saveWarningDiscard"
        QT_MOC_LITERAL(80, 20),  // "onColorPickerClicked"
        QT_MOC_LITERAL(101, 14),  // "updateMaxFrame"
        QT_MOC_LITERAL(116, 5),  // "count"
        QT_MOC_LITERAL(122, 13),  // "updateButtons"
        QT_MOC_LITERAL(136, 12),  // "previewPopup"
        QT_MOC_LITERAL(149, 16),  // "saveWarningPopup"
        QT_MOC_LITERAL(166, 14)   // "startSizeInput"
    },
    "MainWindow",
    "start",
    "",
    "sizeVal",
    "sendPenColor",
    "color",
    "saveWarningSave",
    "saveWarningDiscard",
    "onColorPickerClicked",
    "updateMaxFrame",
    "count",
    "updateButtons",
    "previewPopup",
    "saveWarningPopup",
    "startSizeInput"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x06,    1 /* Public */,
       4,    1,   77,    2, 0x06,    3 /* Public */,
       6,    0,   80,    2, 0x06,    5 /* Public */,
       7,    0,   81,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   82,    2, 0x0a,    7 /* Public */,
       9,    1,   83,    2, 0x0a,    8 /* Public */,
      11,    1,   86,    2, 0x0a,   10 /* Public */,
      12,    0,   89,    2, 0x0a,   12 /* Public */,
      13,    0,   90,    2, 0x0a,   13 /* Public */,
      14,    0,   91,    2, 0x0a,   14 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sendPenColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        // method 'saveWarningSave'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveWarningDiscard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onColorPickerClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateMaxFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateButtons'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'previewPopup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveWarningPopup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startSizeInput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->start((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->sendPenColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 2: _t->saveWarningSave(); break;
        case 3: _t->saveWarningDiscard(); break;
        case 4: _t->onColorPickerClicked(); break;
        case 5: _t->updateMaxFrame((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->updateButtons((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->previewPopup(); break;
        case 8: _t->saveWarningPopup(); break;
        case 9: _t->startSizeInput(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(int );
            if (_t _q_method = &MainWindow::start; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const QColor & );
            if (_t _q_method = &MainWindow::sendPenColor; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::saveWarningSave; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::saveWarningDiscard; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::start(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::sendPenColor(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::saveWarningSave()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MainWindow::saveWarningDiscard()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
