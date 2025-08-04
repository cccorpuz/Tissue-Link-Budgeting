/****************************************************************************
** Meta object code from reading C++ file 'QCSTreeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../QCSXCAD/QCSTreeWidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QCSTreeWidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13QCSTreeWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto QCSTreeWidget::qt_create_metaobjectdata<qt_meta_tag_ZN13QCSTreeWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QCSTreeWidget",
        "Edit",
        "",
        "Copy",
        "ShowHide",
        "NewBox",
        "NewMultiBox",
        "NewSphere",
        "NewCylinder",
        "NewUserDefined",
        "NewMaterial",
        "NewMetal",
        "NewExcitation",
        "NewChargeBox",
        "NewResBox",
        "NewDumpBox",
        "Delete",
        "SwitchProperty",
        "CSPrimitives*",
        "prim",
        "CSProperties*",
        "newProp",
        "collapseAll",
        "expandAll",
        "QTreeWidgetItem*",
        "item",
        "column",
        "Clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'Edit'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'Copy'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ShowHide'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'NewBox'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'NewMultiBox'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'NewSphere'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'NewCylinder'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'NewUserDefined'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'NewMaterial'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'NewMetal'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'NewExcitation'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'NewChargeBox'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'NewResBox'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'NewDumpBox'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'Delete'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SwitchProperty'
        QtMocHelpers::SlotData<void(CSPrimitives *, CSProperties *)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 }, { 0x80000000 | 20, 21 },
        }}),
        // Slot 'collapseAll'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'expandAll'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'Edit'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(1, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 24, 25 }, { QMetaType::Int, 26 },
        }}),
        // Slot 'Clicked'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(27, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 24, 25 }, { QMetaType::Int, 26 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QCSTreeWidget, qt_meta_tag_ZN13QCSTreeWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QCSTreeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QCSTreeWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QCSTreeWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13QCSTreeWidgetE_t>.metaTypes,
    nullptr
} };

void QCSTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QCSTreeWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->Edit(); break;
        case 1: _t->Copy(); break;
        case 2: _t->ShowHide(); break;
        case 3: _t->NewBox(); break;
        case 4: _t->NewMultiBox(); break;
        case 5: _t->NewSphere(); break;
        case 6: _t->NewCylinder(); break;
        case 7: _t->NewUserDefined(); break;
        case 8: _t->NewMaterial(); break;
        case 9: _t->NewMetal(); break;
        case 10: _t->NewExcitation(); break;
        case 11: _t->NewChargeBox(); break;
        case 12: _t->NewResBox(); break;
        case 13: _t->NewDumpBox(); break;
        case 14: _t->Delete(); break;
        case 15: _t->SwitchProperty((*reinterpret_cast< std::add_pointer_t<CSPrimitives*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<CSProperties*>>(_a[2]))); break;
        case 16: _t->collapseAll(); break;
        case 17: _t->expandAll(); break;
        case 18: _t->Edit((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 19: _t->Clicked((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QCSTreeWidget::*)()>(_a, &QCSTreeWidget::Edit, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QCSTreeWidget::*)()>(_a, &QCSTreeWidget::Copy, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (QCSTreeWidget::*)()>(_a, &QCSTreeWidget::ShowHide, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (QCSTreeWidget::*)()>(_a, &QCSTreeWidget::NewBox, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (QCSTreeWidget::*)()>(_a, &QCSTreeWidget::NewMultiBox, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (QCSTreeWidget::*)()>(_a, &QCSTreeWidget::NewSphere, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (QCSTreeWidget::*)()>(_a, &QCSTreeWidget::NewCylinder, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (QCSTreeWidget::*)()>(_a, &QCSTreeWidget::NewUserDefined, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (QCSTreeWidget::*)()>(_a, &QCSTreeWidget::NewMaterial, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (QCSTreeWidget::*)()>(_a, &QCSTreeWidget::NewMetal, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (QCSTreeWidget::*)()>(_a, &QCSTreeWidget::NewExcitation, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (QCSTreeWidget::*)()>(_a, &QCSTreeWidget::NewChargeBox, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (QCSTreeWidget::*)()>(_a, &QCSTreeWidget::NewResBox, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (QCSTreeWidget::*)()>(_a, &QCSTreeWidget::NewDumpBox, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (QCSTreeWidget::*)()>(_a, &QCSTreeWidget::Delete, 14))
            return;
    }
}

const QMetaObject *QCSTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCSTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QCSTreeWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int QCSTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void QCSTreeWidget::Edit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QCSTreeWidget::Copy()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QCSTreeWidget::ShowHide()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QCSTreeWidget::NewBox()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QCSTreeWidget::NewMultiBox()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QCSTreeWidget::NewSphere()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QCSTreeWidget::NewCylinder()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QCSTreeWidget::NewUserDefined()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QCSTreeWidget::NewMaterial()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QCSTreeWidget::NewMetal()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QCSTreeWidget::NewExcitation()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void QCSTreeWidget::NewChargeBox()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void QCSTreeWidget::NewResBox()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void QCSTreeWidget::NewDumpBox()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void QCSTreeWidget::Delete()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}
QT_WARNING_POP
