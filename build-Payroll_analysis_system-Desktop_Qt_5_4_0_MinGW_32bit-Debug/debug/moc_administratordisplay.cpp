/****************************************************************************
** Meta object code from reading C++ file 'administratordisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Payroll_analysis_system/administratordisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'administratordisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AdministratorDisplay_t {
    QByteArrayData data[13];
    char stringdata[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdministratorDisplay_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdministratorDisplay_t qt_meta_stringdata_AdministratorDisplay = {
    {
QT_MOC_LITERAL(0, 0, 20), // "AdministratorDisplay"
QT_MOC_LITERAL(1, 21, 26), // "admin_change_employee_info"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 4), // "name"
QT_MOC_LITERAL(4, 54, 35), // "ModifyEmployeeInformationSubm..."
QT_MOC_LITERAL(5, 90, 4), // "info"
QT_MOC_LITERAL(6, 95, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(7, 117, 30), // "on_pb_choose_is_change_clicked"
QT_MOC_LITERAL(8, 148, 28), // "dealtellTheAdminEmployeeInfo"
QT_MOC_LITERAL(9, 177, 13), // "employee_info"
QT_MOC_LITERAL(10, 191, 20), // "on_pb_commit_clicked"
QT_MOC_LITERAL(11, 212, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(12, 236, 29) // "dealtellTheAdminCommitSucceed"

    },
    "AdministratorDisplay\0admin_change_employee_info\0"
    "\0name\0ModifyEmployeeInformationSubmission\0"
    "info\0on_pushButton_clicked\0"
    "on_pb_choose_is_change_clicked\0"
    "dealtellTheAdminEmployeeInfo\0employee_info\0"
    "on_pb_commit_clicked\0on_pushButton_2_clicked\0"
    "dealtellTheAdminCommitSucceed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdministratorDisplay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   60,    2, 0x08 /* Private */,
       7,    0,   61,    2, 0x08 /* Private */,
       8,    1,   62,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,
      11,    0,   66,    2, 0x08 /* Private */,
      12,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void AdministratorDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdministratorDisplay *_t = static_cast<AdministratorDisplay *>(_o);
        switch (_id) {
        case 0: _t->admin_change_employee_info((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->ModifyEmployeeInformationSubmission((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_pb_choose_is_change_clicked(); break;
        case 4: _t->dealtellTheAdminEmployeeInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_pb_commit_clicked(); break;
        case 6: _t->on_pushButton_2_clicked(); break;
        case 7: _t->dealtellTheAdminCommitSucceed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AdministratorDisplay::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AdministratorDisplay::admin_change_employee_info)) {
                *result = 0;
            }
        }
        {
            typedef void (AdministratorDisplay::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AdministratorDisplay::ModifyEmployeeInformationSubmission)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject AdministratorDisplay::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AdministratorDisplay.data,
      qt_meta_data_AdministratorDisplay,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AdministratorDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdministratorDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AdministratorDisplay.stringdata))
        return static_cast<void*>(const_cast< AdministratorDisplay*>(this));
    return QWidget::qt_metacast(_clname);
}

int AdministratorDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void AdministratorDisplay::admin_change_employee_info(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AdministratorDisplay::ModifyEmployeeInformationSubmission(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
