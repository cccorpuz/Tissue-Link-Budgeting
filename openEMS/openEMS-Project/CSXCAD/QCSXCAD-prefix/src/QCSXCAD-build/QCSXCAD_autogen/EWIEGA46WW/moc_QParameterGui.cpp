/****************************************************************************
** Meta object code from reading C++ file 'QParameterGui.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../QCSXCAD/QParameterGui.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QParameterGui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.1. It"
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
struct qt_meta_tag_ZN10QParameterE_t {};
} // unnamed namespace

template <> constexpr inline auto QParameter::qt_create_metaobjectdata<qt_meta_tag_ZN10QParameterE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QParameter",
        "ParameterChanged",
        "",
        "Delete",
        "Parameter*",
        "para",
        "Edit",
        "Update",
        "DeleteParameter",
        "SweepState",
        "state",
        "Changed"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'ParameterChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'Delete'
        QtMocHelpers::SignalData<void(Parameter *)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Slot 'Edit'
        QtMocHelpers::SlotData<bool()>(6, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'Update'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'DeleteParameter'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SweepState'
        QtMocHelpers::SlotData<void(int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Slot 'Changed'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QParameter, qt_meta_tag_ZN10QParameterE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QParameter::staticMetaObject = { {
    QMetaObject::SuperData::link<QGroupBox::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10QParameterE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10QParameterE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10QParameterE_t>.metaTypes,
    nullptr
} };

void QParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QParameter *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->ParameterChanged(); break;
        case 1: _t->Delete((*reinterpret_cast< std::add_pointer_t<Parameter*>>(_a[1]))); break;
        case 2: { bool _r = _t->Edit();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->Update(); break;
        case 4: _t->DeleteParameter(); break;
        case 5: _t->SweepState((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->Changed(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QParameter::*)()>(_a, &QParameter::ParameterChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QParameter::*)(Parameter * )>(_a, &QParameter::Delete, 1))
            return;
    }
}

const QMetaObject *QParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10QParameterE_t>.strings))
        return static_cast<void*>(this);
    return QGroupBox::qt_metacast(_clname);
}

int QParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QParameter::ParameterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QParameter::Delete(Parameter * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN16QLinearParameterE_t {};
} // unnamed namespace

template <> constexpr inline auto QLinearParameter::qt_create_metaobjectdata<qt_meta_tag_ZN16QLinearParameterE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QLinearParameter",
        "Edit",
        "",
        "Update",
        "Changed"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'Edit'
        QtMocHelpers::SlotData<bool()>(1, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'Update'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'Changed'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QLinearParameter, qt_meta_tag_ZN16QLinearParameterE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QLinearParameter::staticMetaObject = { {
    QMetaObject::SuperData::link<QParameter::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QLinearParameterE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QLinearParameterE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16QLinearParameterE_t>.metaTypes,
    nullptr
} };

void QLinearParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QLinearParameter *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = _t->Edit();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->Update(); break;
        case 2: _t->Changed(); break;
        default: ;
        }
    }
}

const QMetaObject *QLinearParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QLinearParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QLinearParameterE_t>.strings))
        return static_cast<void*>(this);
    return QParameter::qt_metacast(_clname);
}

int QLinearParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QParameter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN13QParameterSetE_t {};
} // unnamed namespace

template <> constexpr inline auto QParameterSet::qt_create_metaobjectdata<qt_meta_tag_ZN13QParameterSetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QParameterSet",
        "ParameterChanged",
        "",
        "NewParameter",
        "SetModified",
        "mod",
        "clear",
        "DeleteParameter",
        "size_t",
        "Parameter*",
        "para"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'ParameterChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'NewParameter'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SetModified'
        QtMocHelpers::SlotData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
        // Slot 'SetModified'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'clear'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'DeleteParameter'
        QtMocHelpers::SlotData<size_t(Parameter *)>(7, 2, QMC::AccessProtected, 0x80000000 | 8, {{
            { 0x80000000 | 9, 10 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QParameterSet, qt_meta_tag_ZN13QParameterSetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QParameterSet::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QParameterSetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QParameterSetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13QParameterSetE_t>.metaTypes,
    nullptr
} };

void QParameterSet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QParameterSet *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->ParameterChanged(); break;
        case 1: _t->NewParameter(); break;
        case 2: _t->SetModified((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->SetModified(); break;
        case 4: _t->clear(); break;
        case 5: { size_t _r = _t->DeleteParameter((*reinterpret_cast< std::add_pointer_t<Parameter*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< size_t*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QParameterSet::*)()>(_a, &QParameterSet::ParameterChanged, 0))
            return;
    }
}

const QMetaObject *QParameterSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QParameterSet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QParameterSetE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ParameterSet"))
        return static_cast< ParameterSet*>(this);
    return QWidget::qt_metacast(_clname);
}

int QParameterSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QParameterSet::ParameterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
