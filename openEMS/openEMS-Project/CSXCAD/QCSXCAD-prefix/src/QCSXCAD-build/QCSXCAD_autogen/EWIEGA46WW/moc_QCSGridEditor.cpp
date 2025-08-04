/****************************************************************************
** Meta object code from reading C++ file 'QCSGridEditor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../QCSXCAD/QCSGridEditor.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QCSGridEditor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13QCSGridEditorE_t {};
} // unnamed namespace

template <> constexpr inline auto QCSGridEditor::qt_create_metaobjectdata<qt_meta_tag_ZN13QCSGridEditorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QCSGridEditor",
        "OpacityChange",
        "",
        "signalDetectEdges",
        "GridChanged",
        "GridPlaneXChanged",
        "GridPlaneYChanged",
        "GridPlaneZChanged",
        "Update",
        "SetOpacity",
        "val",
        "EditX",
        "EditY",
        "EditZ",
        "Edit",
        "direct",
        "SetGridPlaneX",
        "pos",
        "SetGridPlaneY",
        "SetGridPlaneZ",
        "BuildHomogenDisc",
        "BuildInHomogenDisc",
        "IncreaseResolution",
        "DetectEdges",
        "SetDeltaUnit"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'OpacityChange'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'signalDetectEdges'
        QtMocHelpers::SignalData<void(int)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'GridChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'GridPlaneXChanged'
        QtMocHelpers::SignalData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'GridPlaneYChanged'
        QtMocHelpers::SignalData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'GridPlaneZChanged'
        QtMocHelpers::SignalData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'Update'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SetOpacity'
        QtMocHelpers::SlotData<void(int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Slot 'EditX'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'EditY'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'EditZ'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'Edit'
        QtMocHelpers::SlotData<void(int)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Slot 'SetGridPlaneX'
        QtMocHelpers::SlotData<void(int)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 17 },
        }}),
        // Slot 'SetGridPlaneY'
        QtMocHelpers::SlotData<void(int)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 17 },
        }}),
        // Slot 'SetGridPlaneZ'
        QtMocHelpers::SlotData<void(int)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 17 },
        }}),
        // Slot 'BuildHomogenDisc'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'BuildInHomogenDisc'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'IncreaseResolution'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'DetectEdges'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'SetDeltaUnit'
        QtMocHelpers::SlotData<void(QString)>(24, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QCSGridEditor, qt_meta_tag_ZN13QCSGridEditorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QCSGridEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QCSGridEditorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QCSGridEditorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13QCSGridEditorE_t>.metaTypes,
    nullptr
} };

void QCSGridEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QCSGridEditor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->OpacityChange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->signalDetectEdges((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->GridChanged(); break;
        case 3: _t->GridPlaneXChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->GridPlaneYChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->GridPlaneZChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->Update(); break;
        case 7: _t->SetOpacity((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->EditX(); break;
        case 9: _t->EditY(); break;
        case 10: _t->EditZ(); break;
        case 11: _t->Edit((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->SetGridPlaneX((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->SetGridPlaneY((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->SetGridPlaneZ((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->BuildHomogenDisc(); break;
        case 16: _t->BuildInHomogenDisc(); break;
        case 17: _t->IncreaseResolution(); break;
        case 18: _t->DetectEdges(); break;
        case 19: _t->SetDeltaUnit((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QCSGridEditor::*)(int )>(_a, &QCSGridEditor::OpacityChange, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QCSGridEditor::*)(int )>(_a, &QCSGridEditor::signalDetectEdges, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (QCSGridEditor::*)()>(_a, &QCSGridEditor::GridChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (QCSGridEditor::*)(int )>(_a, &QCSGridEditor::GridPlaneXChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (QCSGridEditor::*)(int )>(_a, &QCSGridEditor::GridPlaneYChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (QCSGridEditor::*)(int )>(_a, &QCSGridEditor::GridPlaneZChanged, 5))
            return;
    }
}

const QMetaObject *QCSGridEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCSGridEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QCSGridEditorE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QCSGridEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void QCSGridEditor::OpacityChange(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QCSGridEditor::signalDetectEdges(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void QCSGridEditor::GridChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QCSGridEditor::GridPlaneXChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void QCSGridEditor::GridPlaneYChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void QCSGridEditor::GridPlaneZChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}
QT_WARNING_POP
