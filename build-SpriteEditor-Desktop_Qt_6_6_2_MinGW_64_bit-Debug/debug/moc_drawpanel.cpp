/****************************************************************************
** Meta object code from reading C++ file 'drawpanel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SpriteEditor/drawpanel.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drawpanel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDrawPanelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDrawPanelENDCLASS = QtMocHelpers::stringData(
    "DrawPanel",
    "updateClickPoint",
    "",
    "lastPoint",
    "drawLineTo",
    "releasePoint",
    "undoStroke",
    "updateStrokeState",
    "redoStroke",
    "sendScaleSize",
    "displayDrawing",
    "image",
    "setScale",
    "sizeVal"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDrawPanelENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[10];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[11];
    char stringdata5[13];
    char stringdata6[11];
    char stringdata7[18];
    char stringdata8[11];
    char stringdata9[14];
    char stringdata10[15];
    char stringdata11[6];
    char stringdata12[9];
    char stringdata13[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDrawPanelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDrawPanelENDCLASS_t qt_meta_stringdata_CLASSDrawPanelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "DrawPanel"
        QT_MOC_LITERAL(10, 16),  // "updateClickPoint"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 9),  // "lastPoint"
        QT_MOC_LITERAL(38, 10),  // "drawLineTo"
        QT_MOC_LITERAL(49, 12),  // "releasePoint"
        QT_MOC_LITERAL(62, 10),  // "undoStroke"
        QT_MOC_LITERAL(73, 17),  // "updateStrokeState"
        QT_MOC_LITERAL(91, 10),  // "redoStroke"
        QT_MOC_LITERAL(102, 13),  // "sendScaleSize"
        QT_MOC_LITERAL(116, 14),  // "displayDrawing"
        QT_MOC_LITERAL(131, 5),  // "image"
        QT_MOC_LITERAL(137, 8),  // "setScale"
        QT_MOC_LITERAL(146, 7)   // "sizeVal"
    },
    "DrawPanel",
    "updateClickPoint",
    "",
    "lastPoint",
    "drawLineTo",
    "releasePoint",
    "undoStroke",
    "updateStrokeState",
    "redoStroke",
    "sendScaleSize",
    "displayDrawing",
    "image",
    "setScale",
    "sizeVal"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDrawPanelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,
       4,    1,   65,    2, 0x06,    3 /* Public */,
       6,    0,   68,    2, 0x06,    5 /* Public */,
       7,    0,   69,    2, 0x06,    6 /* Public */,
       8,    0,   70,    2, 0x06,    7 /* Public */,
       9,    1,   71,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,   74,    2, 0x0a,   10 /* Public */,
      12,    1,   77,    2, 0x0a,   12 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::QPoint,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,   11,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject DrawPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_meta_stringdata_CLASSDrawPanelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDrawPanelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDrawPanelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DrawPanel, std::true_type>,
        // method 'updateClickPoint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint, std::false_type>,
        // method 'drawLineTo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint, std::false_type>,
        // method 'undoStroke'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateStrokeState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'redoStroke'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendScaleSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'displayDrawing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QImage, std::false_type>,
        // method 'setScale'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void DrawPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DrawPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateClickPoint((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 1: _t->drawLineTo((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 2: _t->undoStroke(); break;
        case 3: _t->updateStrokeState(); break;
        case 4: _t->redoStroke(); break;
        case 5: _t->sendScaleSize((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->displayDrawing((*reinterpret_cast< std::add_pointer_t<QImage>>(_a[1]))); break;
        case 7: _t->setScale((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DrawPanel::*)(QPoint );
            if (_t _q_method = &DrawPanel::updateClickPoint; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DrawPanel::*)(QPoint );
            if (_t _q_method = &DrawPanel::drawLineTo; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DrawPanel::*)();
            if (_t _q_method = &DrawPanel::undoStroke; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DrawPanel::*)();
            if (_t _q_method = &DrawPanel::updateStrokeState; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DrawPanel::*)();
            if (_t _q_method = &DrawPanel::redoStroke; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DrawPanel::*)(int );
            if (_t _q_method = &DrawPanel::sendScaleSize; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *DrawPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DrawPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDrawPanelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int DrawPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void DrawPanel::updateClickPoint(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DrawPanel::drawLineTo(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DrawPanel::undoStroke()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DrawPanel::updateStrokeState()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DrawPanel::redoStroke()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void DrawPanel::sendScaleSize(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
