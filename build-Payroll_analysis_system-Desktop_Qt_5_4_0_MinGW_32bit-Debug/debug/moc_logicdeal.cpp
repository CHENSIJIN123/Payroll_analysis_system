/****************************************************************************
** Meta object code from reading C++ file 'logicdeal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Payroll_analysis_system/dealMsg/logicdeal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logicdeal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LogicDeal_t {
    QByteArrayData data[14];
    char stringdata[329];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogicDeal_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogicDeal_t qt_meta_stringdata_LogicDeal = {
    {
QT_MOC_LITERAL(0, 0, 9), // "LogicDeal"
QT_MOC_LITERAL(1, 10, 32), // "tellTheWidgetIfItCanLoginSuccess"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 32), // "tellTheWidgetIfItCanPunchSuccess"
QT_MOC_LITERAL(4, 77, 29), // "tellTheEmployeeShowSalaryInfo"
QT_MOC_LITERAL(5, 107, 4), // "info"
QT_MOC_LITERAL(6, 112, 34), // "tellTheEmployeeShowMultiSalar..."
QT_MOC_LITERAL(7, 147, 29), // "dealreturnToLoginButtonResult"
QT_MOC_LITERAL(8, 177, 6), // "result"
QT_MOC_LITERAL(9, 184, 34), // "dealreturnToLoginButtonResult..."
QT_MOC_LITERAL(10, 219, 26), // "dealtable_show_salary_info"
QT_MOC_LITERAL(11, 246, 24), // "slot_watch_table_display"
QT_MOC_LITERAL(12, 271, 26), // "dealshow_multi_salary_info"
QT_MOC_LITERAL(13, 298, 30) // "slot_watch_multi_month_display"

    },
    "LogicDeal\0tellTheWidgetIfItCanLoginSuccess\0"
    "\0tellTheWidgetIfItCanPunchSuccess\0"
    "tellTheEmployeeShowSalaryInfo\0info\0"
    "tellTheEmployeeShowMultiSalaryInfo\0"
    "dealreturnToLoginButtonResult\0result\0"
    "dealreturnToLoginButtonResultPunch\0"
    "dealtable_show_salary_info\0"
    "slot_watch_table_display\0"
    "dealshow_multi_salary_info\0"
    "slot_watch_multi_month_display"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogicDeal[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       3,    1,   67,    2, 0x06 /* Public */,
       4,    1,   70,    2, 0x06 /* Public */,
       6,    1,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   76,    2, 0x0a /* Public */,
       9,    1,   79,    2, 0x0a /* Public */,
      10,    1,   82,    2, 0x0a /* Public */,
      11,    1,   85,    2, 0x0a /* Public */,
      12,    1,   88,    2, 0x0a /* Public */,
      13,    1,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void LogicDeal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LogicDeal *_t = static_cast<LogicDeal *>(_o);
        switch (_id) {
        case 0: _t->tellTheWidgetIfItCanLoginSuccess((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->tellTheWidgetIfItCanPunchSuccess((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->tellTheEmployeeShowSalaryInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->tellTheEmployeeShowMultiSalaryInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->dealreturnToLoginButtonResult((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->dealreturnToLoginButtonResultPunch((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->dealtable_show_salary_info((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->slot_watch_table_display((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->dealshow_multi_salary_info((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->slot_watch_multi_month_display((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LogicDeal::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LogicDeal::tellTheWidgetIfItCanLoginSuccess)) {
                *result = 0;
            }
        }
        {
            typedef void (LogicDeal::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LogicDeal::tellTheWidgetIfItCanPunchSuccess)) {
                *result = 1;
            }
        }
        {
            typedef void (LogicDeal::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LogicDeal::tellTheEmployeeShowSalaryInfo)) {
                *result = 2;
            }
        }
        {
            typedef void (LogicDeal::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LogicDeal::tellTheEmployeeShowMultiSalaryInfo)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject LogicDeal::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LogicDeal.data,
      qt_meta_data_LogicDeal,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LogicDeal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogicDeal::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LogicDeal.stringdata))
        return static_cast<void*>(const_cast< LogicDeal*>(this));
    return QWidget::qt_metacast(_clname);
}

int LogicDeal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void LogicDeal::tellTheWidgetIfItCanLoginSuccess(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LogicDeal::tellTheWidgetIfItCanPunchSuccess(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LogicDeal::tellTheEmployeeShowSalaryInfo(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LogicDeal::tellTheEmployeeShowMultiSalaryInfo(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
