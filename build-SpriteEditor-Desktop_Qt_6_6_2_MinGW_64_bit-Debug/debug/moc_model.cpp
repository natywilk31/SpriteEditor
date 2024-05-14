/****************************************************************************
** Meta object code from reading C++ file 'model.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SpriteEditor/model.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'model.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSModelENDCLASS = QtMocHelpers::stringData(
    "Model",
    "updateImageOnPanel",
    "",
    "image",
    "sendNumberOfFrames",
    "frames",
    "sendCurrentFrame",
    "frame",
    "showPreviewDialog",
    "showOrNot",
    "paintPreviewFrame",
    "updateImageOnPreview",
    "sendBack",
    "openSaveWarning",
    "sendScaleSize",
    "toSizeGetter",
    "updateClickPoint",
    "pt",
    "getPenColor",
    "color",
    "drawLineTo",
    "endPoint",
    "drawOn",
    "eraserOn",
    "addFrame",
    "copyCurrentFrame",
    "deleteFrame",
    "nextFrame",
    "prevFrame",
    "addFirstFrame",
    "sizeVal",
    "jumpToFrame",
    "mirrorVerticalAxis",
    "onOrOff",
    "mirrorHorizontalAxis",
    "mirrorDiagonalAxis",
    "undoStroke",
    "redoStroke",
    "insertIntoStrokeState",
    "save",
    "open",
    "newFile",
    "imageOnPreviewSender",
    "isDiscarded"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSModelENDCLASS_t {
    uint offsetsAndSizes[88];
    char stringdata0[6];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[19];
    char stringdata5[7];
    char stringdata6[17];
    char stringdata7[6];
    char stringdata8[18];
    char stringdata9[10];
    char stringdata10[18];
    char stringdata11[21];
    char stringdata12[9];
    char stringdata13[16];
    char stringdata14[14];
    char stringdata15[13];
    char stringdata16[17];
    char stringdata17[3];
    char stringdata18[12];
    char stringdata19[6];
    char stringdata20[11];
    char stringdata21[9];
    char stringdata22[7];
    char stringdata23[9];
    char stringdata24[9];
    char stringdata25[17];
    char stringdata26[12];
    char stringdata27[10];
    char stringdata28[10];
    char stringdata29[14];
    char stringdata30[8];
    char stringdata31[12];
    char stringdata32[19];
    char stringdata33[8];
    char stringdata34[21];
    char stringdata35[19];
    char stringdata36[11];
    char stringdata37[11];
    char stringdata38[22];
    char stringdata39[5];
    char stringdata40[5];
    char stringdata41[8];
    char stringdata42[21];
    char stringdata43[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSModelENDCLASS_t qt_meta_stringdata_CLASSModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 5),  // "Model"
        QT_MOC_LITERAL(6, 18),  // "updateImageOnPanel"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 5),  // "image"
        QT_MOC_LITERAL(32, 18),  // "sendNumberOfFrames"
        QT_MOC_LITERAL(51, 6),  // "frames"
        QT_MOC_LITERAL(58, 16),  // "sendCurrentFrame"
        QT_MOC_LITERAL(75, 5),  // "frame"
        QT_MOC_LITERAL(81, 17),  // "showPreviewDialog"
        QT_MOC_LITERAL(99, 9),  // "showOrNot"
        QT_MOC_LITERAL(109, 17),  // "paintPreviewFrame"
        QT_MOC_LITERAL(127, 20),  // "updateImageOnPreview"
        QT_MOC_LITERAL(148, 8),  // "sendBack"
        QT_MOC_LITERAL(157, 15),  // "openSaveWarning"
        QT_MOC_LITERAL(173, 13),  // "sendScaleSize"
        QT_MOC_LITERAL(187, 12),  // "toSizeGetter"
        QT_MOC_LITERAL(200, 16),  // "updateClickPoint"
        QT_MOC_LITERAL(217, 2),  // "pt"
        QT_MOC_LITERAL(220, 11),  // "getPenColor"
        QT_MOC_LITERAL(232, 5),  // "color"
        QT_MOC_LITERAL(238, 10),  // "drawLineTo"
        QT_MOC_LITERAL(249, 8),  // "endPoint"
        QT_MOC_LITERAL(258, 6),  // "drawOn"
        QT_MOC_LITERAL(265, 8),  // "eraserOn"
        QT_MOC_LITERAL(274, 8),  // "addFrame"
        QT_MOC_LITERAL(283, 16),  // "copyCurrentFrame"
        QT_MOC_LITERAL(300, 11),  // "deleteFrame"
        QT_MOC_LITERAL(312, 9),  // "nextFrame"
        QT_MOC_LITERAL(322, 9),  // "prevFrame"
        QT_MOC_LITERAL(332, 13),  // "addFirstFrame"
        QT_MOC_LITERAL(346, 7),  // "sizeVal"
        QT_MOC_LITERAL(354, 11),  // "jumpToFrame"
        QT_MOC_LITERAL(366, 18),  // "mirrorVerticalAxis"
        QT_MOC_LITERAL(385, 7),  // "onOrOff"
        QT_MOC_LITERAL(393, 20),  // "mirrorHorizontalAxis"
        QT_MOC_LITERAL(414, 18),  // "mirrorDiagonalAxis"
        QT_MOC_LITERAL(433, 10),  // "undoStroke"
        QT_MOC_LITERAL(444, 10),  // "redoStroke"
        QT_MOC_LITERAL(455, 21),  // "insertIntoStrokeState"
        QT_MOC_LITERAL(477, 4),  // "save"
        QT_MOC_LITERAL(482, 4),  // "open"
        QT_MOC_LITERAL(487, 7),  // "newFile"
        QT_MOC_LITERAL(495, 20),  // "imageOnPreviewSender"
        QT_MOC_LITERAL(516, 11)   // "isDiscarded"
    },
    "Model",
    "updateImageOnPanel",
    "",
    "image",
    "sendNumberOfFrames",
    "frames",
    "sendCurrentFrame",
    "frame",
    "showPreviewDialog",
    "showOrNot",
    "paintPreviewFrame",
    "updateImageOnPreview",
    "sendBack",
    "openSaveWarning",
    "sendScaleSize",
    "toSizeGetter",
    "updateClickPoint",
    "pt",
    "getPenColor",
    "color",
    "drawLineTo",
    "endPoint",
    "drawOn",
    "eraserOn",
    "addFrame",
    "copyCurrentFrame",
    "deleteFrame",
    "nextFrame",
    "prevFrame",
    "addFirstFrame",
    "sizeVal",
    "jumpToFrame",
    "mirrorVerticalAxis",
    "onOrOff",
    "mirrorHorizontalAxis",
    "mirrorDiagonalAxis",
    "undoStroke",
    "redoStroke",
    "insertIntoStrokeState",
    "save",
    "open",
    "newFile",
    "imageOnPreviewSender",
    "isDiscarded"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  212,    2, 0x06,    1 /* Public */,
       4,    1,  215,    2, 0x06,    3 /* Public */,
       6,    1,  218,    2, 0x06,    5 /* Public */,
       8,    1,  221,    2, 0x06,    7 /* Public */,
      10,    1,  224,    2, 0x06,    9 /* Public */,
      11,    1,  227,    2, 0x06,   11 /* Public */,
      12,    0,  230,    2, 0x06,   13 /* Public */,
      13,    0,  231,    2, 0x06,   14 /* Public */,
      14,    1,  232,    2, 0x06,   15 /* Public */,
      15,    0,  235,    2, 0x06,   17 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      16,    1,  236,    2, 0x0a,   18 /* Public */,
      18,    1,  239,    2, 0x0a,   20 /* Public */,
      20,    1,  242,    2, 0x0a,   22 /* Public */,
      22,    0,  245,    2, 0x0a,   24 /* Public */,
      23,    0,  246,    2, 0x0a,   25 /* Public */,
      24,    0,  247,    2, 0x0a,   26 /* Public */,
      25,    0,  248,    2, 0x0a,   27 /* Public */,
      26,    0,  249,    2, 0x0a,   28 /* Public */,
      27,    0,  250,    2, 0x0a,   29 /* Public */,
      28,    0,  251,    2, 0x0a,   30 /* Public */,
      29,    1,  252,    2, 0x0a,   31 /* Public */,
      31,    1,  255,    2, 0x0a,   33 /* Public */,
      32,    1,  258,    2, 0x0a,   35 /* Public */,
      34,    1,  261,    2, 0x0a,   37 /* Public */,
      35,    1,  264,    2, 0x0a,   39 /* Public */,
      36,    0,  267,    2, 0x0a,   41 /* Public */,
      37,    0,  268,    2, 0x0a,   42 /* Public */,
      38,    0,  269,    2, 0x0a,   43 /* Public */,
      39,    0,  270,    2, 0x0a,   44 /* Public */,
      40,    0,  271,    2, 0x0a,   45 /* Public */,
      41,    0,  272,    2, 0x0a,   46 /* Public */,
      42,    0,  273,    2, 0x0a,   47 /* Public */,
      43,    0,  274,    2, 0x0a,   48 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QImage,    3,
    QMetaType::Void, QMetaType::QImage,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,   17,
    QMetaType::Void, QMetaType::QColor,   19,
    QMetaType::Void, QMetaType::QPoint,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool,   33,
    QMetaType::Void, QMetaType::Bool,   33,
    QMetaType::Void, QMetaType::Bool,   33,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Model::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSModelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Model, std::true_type>,
        // method 'updateImageOnPanel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QImage, std::false_type>,
        // method 'sendNumberOfFrames'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sendCurrentFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'showPreviewDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'paintPreviewFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QImage, std::false_type>,
        // method 'updateImageOnPreview'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QImage, std::false_type>,
        // method 'sendBack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openSaveWarning'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendScaleSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'toSizeGetter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateClickPoint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint, std::false_type>,
        // method 'getPenColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        // method 'drawLineTo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'drawOn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'eraserOn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'copyCurrentFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'nextFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'prevFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addFirstFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'jumpToFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'mirrorVerticalAxis'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'mirrorHorizontalAxis'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'mirrorDiagonalAxis'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'undoStroke'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'redoStroke'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'insertIntoStrokeState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'save'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'open'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'newFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'imageOnPreviewSender'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isDiscarded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Model::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Model *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateImageOnPanel((*reinterpret_cast< std::add_pointer_t<QImage>>(_a[1]))); break;
        case 1: _t->sendNumberOfFrames((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->sendCurrentFrame((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->showPreviewDialog((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->paintPreviewFrame((*reinterpret_cast< std::add_pointer_t<QImage>>(_a[1]))); break;
        case 5: _t->updateImageOnPreview((*reinterpret_cast< std::add_pointer_t<QImage>>(_a[1]))); break;
        case 6: _t->sendBack(); break;
        case 7: _t->openSaveWarning(); break;
        case 8: _t->sendScaleSize((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->toSizeGetter(); break;
        case 10: _t->updateClickPoint((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 11: _t->getPenColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 12: _t->drawLineTo((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 13: _t->drawOn(); break;
        case 14: _t->eraserOn(); break;
        case 15: _t->addFrame(); break;
        case 16: _t->copyCurrentFrame(); break;
        case 17: _t->deleteFrame(); break;
        case 18: _t->nextFrame(); break;
        case 19: _t->prevFrame(); break;
        case 20: _t->addFirstFrame((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->jumpToFrame((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->mirrorVerticalAxis((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->mirrorHorizontalAxis((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->mirrorDiagonalAxis((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 25: _t->undoStroke(); break;
        case 26: _t->redoStroke(); break;
        case 27: _t->insertIntoStrokeState(); break;
        case 28: _t->save(); break;
        case 29: _t->open(); break;
        case 30: _t->newFile(); break;
        case 31: _t->imageOnPreviewSender(); break;
        case 32: _t->isDiscarded(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Model::*)(QImage );
            if (_t _q_method = &Model::updateImageOnPanel; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Model::*)(int );
            if (_t _q_method = &Model::sendNumberOfFrames; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Model::*)(int );
            if (_t _q_method = &Model::sendCurrentFrame; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Model::*)(bool );
            if (_t _q_method = &Model::showPreviewDialog; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Model::*)(QImage );
            if (_t _q_method = &Model::paintPreviewFrame; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Model::*)(QImage );
            if (_t _q_method = &Model::updateImageOnPreview; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Model::*)();
            if (_t _q_method = &Model::sendBack; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Model::*)();
            if (_t _q_method = &Model::openSaveWarning; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Model::*)(int );
            if (_t _q_method = &Model::sendScaleSize; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Model::*)();
            if (_t _q_method = &Model::toSizeGetter; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject *Model::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Model::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Model::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 33;
    }
    return _id;
}

// SIGNAL 0
void Model::updateImageOnPanel(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Model::sendNumberOfFrames(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Model::sendCurrentFrame(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Model::showPreviewDialog(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Model::paintPreviewFrame(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Model::updateImageOnPreview(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Model::sendBack()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Model::openSaveWarning()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Model::sendScaleSize(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Model::toSizeGetter()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
