/****************************************************************************
** Meta object code from reading C++ file 'employeedisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Payroll_analysis_system/employeedisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'employeedisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EmployeeDisplay_t {
    QByteArrayData data[13];
    char stringdata[285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EmployeeDisplay_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EmployeeDisplay_t qt_meta_stringdata_EmployeeDisplay = {
    {
QT_MOC_LITERAL(0, 0, 15), // "EmployeeDisplay"
QT_MOC_LITERAL(1, 16, 22), // "table_show_salary_info"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 4), // "info"
QT_MOC_LITERAL(4, 45, 22), // "show_multi_salary_info"
QT_MOC_LITERAL(5, 68, 33), // "on_pb_view_one_month_info_cli..."
QT_MOC_LITERAL(6, 102, 35), // "on_pb_view_multi_month_info_c..."
QT_MOC_LITERAL(7, 138, 26), // "on_tabWidget_tabBarClicked"
QT_MOC_LITERAL(8, 165, 5), // "index"
QT_MOC_LITERAL(9, 171, 19), // "on_pb_watch_clicked"
QT_MOC_LITERAL(10, 191, 33), // "dealtellTheEmployeeShowSalary..."
QT_MOC_LITERAL(11, 225, 38), // "dealtellTheEmployeeShowMultiS..."
QT_MOC_LITERAL(12, 264, 20) // "on_pb_search_clicked"

    },
    "EmployeeDisplay\0table_show_salary_info\0"
    "\0info\0show_multi_salary_info\0"
    "on_pb_view_one_month_info_clicked\0"
    "on_pb_view_multi_month_info_clicked\0"
    "on_tabWidget_tabBarClicked\0index\0"
    "on_pb_watch_clicked\0"
    "dealtellTheEmployeeShowSalaryInfo\0"
    "dealtellTheEmployeeShowMultiSalaryInfo\0"
    "on_pb_search_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EmployeeDisplay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   65,    2, 0x08 /* Private */,
       6,    0,   66,    2, 0x08 /* Private */,
       7,    1,   67,    2, 0x08 /* Private */,
       9,    0,   70,    2, 0x08 /* Private */,
      10,    1,   71,    2, 0x08 /* Private */,
      11,    1,   74,    2, 0x08 /* Private */,
      12,    0,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void EmployeeDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EmployeeDisplay *_t = static_cast<EmployeeDisplay *>(_o);
        switch (_id) {
        case 0: _t->table_show_salary_info((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->show_multi_salary_info((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_pb_view_one_month_info_clicked(); break;
        case 3: _t->on_pb_view_multi_month_info_clicked(); break;
        case 4: _t->on_tabWidget_tabBarClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_pb_watch_clicked(); break;
        case 6: _t->dealtellTheEmployeeShowSalaryInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->dealtellTheEmployeeShowMultiSalaryInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->on_pb_search_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (EmployeeDisplay::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EmployeeDisplay::table_show_salary_info)) {
                *result = 0;
            }
        }
        {
            typedef void (EmployeeDisplay::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EmployeeDisplay::show_multi_salary_info)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject EmployeeDisplay::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EmployeeDisplay.data,
      qt_meta_data_EmployeeDisplay,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EmployeeDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EmployeeDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EmployeeDisplay.stringdata))
        return static_cast<void*>(const_cast< EmployeeDisplay*>(this));
    return QWidget::qt_metacast(_clname);
}

int EmployeeDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void EmployeeDisplay::table_show_salary_info(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EmployeeDisplay::show_multi_salary_info(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
