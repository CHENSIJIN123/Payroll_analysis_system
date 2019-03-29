/****************************************************************************
** Meta object code from reading C++ file 'dealmsg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Payroll_analysis_system/dealMsg/dealmsg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dealmsg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dealMsg_t {
    QByteArrayData data[10];
    char stringdata[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dealMsg_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dealMsg_t qt_meta_stringdata_dealMsg = {
    {
QT_MOC_LITERAL(0, 0, 7), // "dealMsg"
QT_MOC_LITERAL(1, 8, 25), // "returnToLoginButtonResult"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 6), // "result"
QT_MOC_LITERAL(4, 42, 30), // "returnToLoginButtonResultPunch"
QT_MOC_LITERAL(5, 73, 26), // "signal_watch_table_display"
QT_MOC_LITERAL(6, 100, 32), // "signal_watch_multi_month_display"
QT_MOC_LITERAL(7, 133, 29), // "signal_watchSalaryRankingView"
QT_MOC_LITERAL(8, 163, 31), // "signal_change_the_employee_info"
QT_MOC_LITERAL(9, 195, 34) // "signal_commit_modify_employee..."

    },
    "dealMsg\0returnToLoginButtonResult\0\0"
    "result\0returnToLoginButtonResultPunch\0"
    "signal_watch_table_display\0"
    "signal_watch_multi_month_display\0"
    "signal_watchSalaryRankingView\0"
    "signal_change_the_employee_info\0"
    "signal_commit_modify_employee_info"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dealMsg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       5,    1,   55,    2, 0x06 /* Public */,
       6,    1,   58,    2, 0x06 /* Public */,
       7,    1,   61,    2, 0x06 /* Public */,
       8,    1,   64,    2, 0x06 /* Public */,
       9,    1,   67,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void dealMsg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        dealMsg *_t = static_cast<dealMsg *>(_o);
        switch (_id) {
        case 0: _t->returnToLoginButtonResult((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->returnToLoginButtonResultPunch((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->signal_watch_table_display((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->signal_watch_multi_month_display((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->signal_watchSalaryRankingView((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->signal_change_the_employee_info((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->signal_commit_modify_employee_info((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (dealMsg::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&dealMsg::returnToLoginButtonResult)) {
                *result = 0;
            }
        }
        {
            typedef void (dealMsg::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&dealMsg::returnToLoginButtonResultPunch)) {
                *result = 1;
            }
        }
        {
            typedef void (dealMsg::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&dealMsg::signal_watch_table_display)) {
                *result = 2;
            }
        }
        {
            typedef void (dealMsg::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&dealMsg::signal_watch_multi_month_display)) {
                *result = 3;
            }
        }
        {
            typedef void (dealMsg::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&dealMsg::signal_watchSalaryRankingView)) {
                *result = 4;
            }
        }
        {
            typedef void (dealMsg::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&dealMsg::signal_change_the_employee_info)) {
                *result = 5;
            }
        }
        {
            typedef void (dealMsg::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&dealMsg::signal_commit_modify_employee_info)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject dealMsg::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_dealMsg.data,
      qt_meta_data_dealMsg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dealMsg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dealMsg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dealMsg.stringdata))
        return static_cast<void*>(const_cast< dealMsg*>(this));
    return QWidget::qt_metacast(_clname);
}

int dealMsg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void dealMsg::returnToLoginButtonResult(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void dealMsg::returnToLoginButtonResultPunch(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void dealMsg::signal_watch_table_display(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void dealMsg::signal_watch_multi_month_display(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void dealMsg::signal_watchSalaryRankingView(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void dealMsg::signal_change_the_employee_info(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void dealMsg::signal_commit_modify_employee_info(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
