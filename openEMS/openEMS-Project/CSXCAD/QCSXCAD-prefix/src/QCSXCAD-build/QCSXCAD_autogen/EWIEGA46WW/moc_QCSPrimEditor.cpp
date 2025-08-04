/****************************************************************************
** Meta object code from reading C++ file 'QCSPrimEditor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../QCSXCAD/QCSPrimEditor.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QCSPrimEditor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13QCSPrimEditorE_t {};
} // unnamed namespace

template <> constexpr inline auto QCSPrimEditor::qt_create_metaobjectdata<qt_meta_tag_ZN13QCSPrimEditorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QCSPrimEditor",
        "Reset",
        "",
        "Save",
        "Cancel",
        "UpdatePropertyCB"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'Reset'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'Save'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'Cancel'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'UpdatePropertyCB'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QCSPrimEditor, qt_meta_tag_ZN13QCSPrimEditorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QCSPrimEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QCSPrimEditorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QCSPrimEditorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13QCSPrimEditorE_t>.metaTypes,
    nullptr
} };

void QCSPrimEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QCSPrimEditor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->Reset(); break;
        case 1: _t->Save(); break;
        case 2: _t->Cancel(); break;
        case 3: _t->UpdatePropertyCB(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *QCSPrimEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCSPrimEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QCSPrimEditorE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QCSPrimEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN18QCSPrimitiveLayoutE_t {};
} // unnamed namespace

template <> constexpr inline auto QCSPrimitiveLayout::qt_create_metaobjectdata<qt_meta_tag_ZN18QCSPrimitiveLayoutE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QCSPrimitiveLayout",
        "modified",
        "",
        "SetValues",
        "GetValues"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'modified'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SetValues'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'GetValues'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QCSPrimitiveLayout, qt_meta_tag_ZN18QCSPrimitiveLayoutE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QCSPrimitiveLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QGridLayout::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18QCSPrimitiveLayoutE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18QCSPrimitiveLayoutE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18QCSPrimitiveLayoutE_t>.metaTypes,
    nullptr
} };

void QCSPrimitiveLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QCSPrimitiveLayout *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->SetValues(); break;
        case 2: _t->GetValues(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QCSPrimitiveLayout::*)()>(_a, &QCSPrimitiveLayout::modified, 0))
            return;
    }
}

const QMetaObject *QCSPrimitiveLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCSPrimitiveLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18QCSPrimitiveLayoutE_t>.strings))
        return static_cast<void*>(this);
    return QGridLayout::qt_metacast(_clname);
}

int QCSPrimitiveLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGridLayout::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QCSPrimitiveLayout::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN16QCSPrimBoxLayoutE_t {};
} // unnamed namespace

template <> constexpr inline auto QCSPrimBoxLayout::qt_create_metaobjectdata<qt_meta_tag_ZN16QCSPrimBoxLayoutE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QCSPrimBoxLayout",
        "modified",
        "",
        "SetValues",
        "GetValues"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'modified'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SetValues'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'GetValues'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QCSPrimBoxLayout, qt_meta_tag_ZN16QCSPrimBoxLayoutE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QCSPrimBoxLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QCSPrimitiveLayout::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QCSPrimBoxLayoutE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QCSPrimBoxLayoutE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16QCSPrimBoxLayoutE_t>.metaTypes,
    nullptr
} };

void QCSPrimBoxLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QCSPrimBoxLayout *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->SetValues(); break;
        case 2: _t->GetValues(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QCSPrimBoxLayout::*)()>(_a, &QCSPrimBoxLayout::modified, 0))
            return;
    }
}

const QMetaObject *QCSPrimBoxLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCSPrimBoxLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QCSPrimBoxLayoutE_t>.strings))
        return static_cast<void*>(this);
    return QCSPrimitiveLayout::qt_metacast(_clname);
}

int QCSPrimBoxLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCSPrimitiveLayout::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QCSPrimBoxLayout::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN19QCSPrimSphereLayoutE_t {};
} // unnamed namespace

template <> constexpr inline auto QCSPrimSphereLayout::qt_create_metaobjectdata<qt_meta_tag_ZN19QCSPrimSphereLayoutE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QCSPrimSphereLayout",
        "modified",
        "",
        "SetValues",
        "GetValues"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'modified'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SetValues'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'GetValues'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QCSPrimSphereLayout, qt_meta_tag_ZN19QCSPrimSphereLayoutE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QCSPrimSphereLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QCSPrimitiveLayout::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19QCSPrimSphereLayoutE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19QCSPrimSphereLayoutE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19QCSPrimSphereLayoutE_t>.metaTypes,
    nullptr
} };

void QCSPrimSphereLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QCSPrimSphereLayout *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->SetValues(); break;
        case 2: _t->GetValues(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QCSPrimSphereLayout::*)()>(_a, &QCSPrimSphereLayout::modified, 0))
            return;
    }
}

const QMetaObject *QCSPrimSphereLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCSPrimSphereLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19QCSPrimSphereLayoutE_t>.strings))
        return static_cast<void*>(this);
    return QCSPrimitiveLayout::qt_metacast(_clname);
}

int QCSPrimSphereLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCSPrimitiveLayout::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QCSPrimSphereLayout::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN21QCSPrimCylinderLayoutE_t {};
} // unnamed namespace

template <> constexpr inline auto QCSPrimCylinderLayout::qt_create_metaobjectdata<qt_meta_tag_ZN21QCSPrimCylinderLayoutE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QCSPrimCylinderLayout",
        "modified",
        "",
        "SetValues",
        "GetValues"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'modified'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SetValues'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'GetValues'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QCSPrimCylinderLayout, qt_meta_tag_ZN21QCSPrimCylinderLayoutE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QCSPrimCylinderLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QCSPrimitiveLayout::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QCSPrimCylinderLayoutE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QCSPrimCylinderLayoutE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21QCSPrimCylinderLayoutE_t>.metaTypes,
    nullptr
} };

void QCSPrimCylinderLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QCSPrimCylinderLayout *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->SetValues(); break;
        case 2: _t->GetValues(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QCSPrimCylinderLayout::*)()>(_a, &QCSPrimCylinderLayout::modified, 0))
            return;
    }
}

const QMetaObject *QCSPrimCylinderLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCSPrimCylinderLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QCSPrimCylinderLayoutE_t>.strings))
        return static_cast<void*>(this);
    return QCSPrimitiveLayout::qt_metacast(_clname);
}

int QCSPrimCylinderLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCSPrimitiveLayout::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QCSPrimCylinderLayout::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN29QCSPrimCylindricalShellLayoutE_t {};
} // unnamed namespace

template <> constexpr inline auto QCSPrimCylindricalShellLayout::qt_create_metaobjectdata<qt_meta_tag_ZN29QCSPrimCylindricalShellLayoutE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QCSPrimCylindricalShellLayout",
        "modified",
        "",
        "SetValues",
        "GetValues"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'modified'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SetValues'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'GetValues'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QCSPrimCylindricalShellLayout, qt_meta_tag_ZN29QCSPrimCylindricalShellLayoutE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QCSPrimCylindricalShellLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QCSPrimCylinderLayout::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN29QCSPrimCylindricalShellLayoutE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN29QCSPrimCylindricalShellLayoutE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN29QCSPrimCylindricalShellLayoutE_t>.metaTypes,
    nullptr
} };

void QCSPrimCylindricalShellLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QCSPrimCylindricalShellLayout *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->SetValues(); break;
        case 2: _t->GetValues(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QCSPrimCylindricalShellLayout::*)()>(_a, &QCSPrimCylindricalShellLayout::modified, 0))
            return;
    }
}

const QMetaObject *QCSPrimCylindricalShellLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCSPrimCylindricalShellLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN29QCSPrimCylindricalShellLayoutE_t>.strings))
        return static_cast<void*>(this);
    return QCSPrimCylinderLayout::qt_metacast(_clname);
}

int QCSPrimCylindricalShellLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCSPrimCylinderLayout::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QCSPrimCylindricalShellLayout::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN21QCSPrimMultiBoxLayoutE_t {};
} // unnamed namespace

template <> constexpr inline auto QCSPrimMultiBoxLayout::qt_create_metaobjectdata<qt_meta_tag_ZN21QCSPrimMultiBoxLayoutE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QCSPrimMultiBoxLayout",
        "modified",
        "",
        "SetValues",
        "GetValues",
        "NewBox",
        "QListWidgetItem*",
        "item",
        "DeleteBox",
        "EditBox"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'modified'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SetValues'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'GetValues'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'NewBox'
        QtMocHelpers::SlotData<void(QListWidgetItem *)>(5, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'NewBox'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessProtected | QMC::MethodCloned, QMetaType::Void),
        // Slot 'DeleteBox'
        QtMocHelpers::SlotData<void(QListWidgetItem *)>(8, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'DeleteBox'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessProtected | QMC::MethodCloned, QMetaType::Void),
        // Slot 'EditBox'
        QtMocHelpers::SlotData<void(QListWidgetItem *)>(9, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'EditBox'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessProtected | QMC::MethodCloned, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QCSPrimMultiBoxLayout, qt_meta_tag_ZN21QCSPrimMultiBoxLayoutE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QCSPrimMultiBoxLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QCSPrimitiveLayout::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QCSPrimMultiBoxLayoutE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QCSPrimMultiBoxLayoutE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21QCSPrimMultiBoxLayoutE_t>.metaTypes,
    nullptr
} };

void QCSPrimMultiBoxLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QCSPrimMultiBoxLayout *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->SetValues(); break;
        case 2: _t->GetValues(); break;
        case 3: _t->NewBox((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 4: _t->NewBox(); break;
        case 5: _t->DeleteBox((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 6: _t->DeleteBox(); break;
        case 7: _t->EditBox((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 8: _t->EditBox(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QCSPrimMultiBoxLayout::*)()>(_a, &QCSPrimMultiBoxLayout::modified, 0))
            return;
    }
}

const QMetaObject *QCSPrimMultiBoxLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCSPrimMultiBoxLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21QCSPrimMultiBoxLayoutE_t>.strings))
        return static_cast<void*>(this);
    return QCSPrimitiveLayout::qt_metacast(_clname);
}

int QCSPrimMultiBoxLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCSPrimitiveLayout::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QCSPrimMultiBoxLayout::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN20QCSPrimPolygonLayoutE_t {};
} // unnamed namespace

template <> constexpr inline auto QCSPrimPolygonLayout::qt_create_metaobjectdata<qt_meta_tag_ZN20QCSPrimPolygonLayoutE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QCSPrimPolygonLayout",
        "modified",
        "",
        "SetValues",
        "GetValues",
        "NormVecChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'modified'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SetValues'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'GetValues'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'NormVecChanged'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QCSPrimPolygonLayout, qt_meta_tag_ZN20QCSPrimPolygonLayoutE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QCSPrimPolygonLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QCSPrimitiveLayout::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20QCSPrimPolygonLayoutE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20QCSPrimPolygonLayoutE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20QCSPrimPolygonLayoutE_t>.metaTypes,
    nullptr
} };

void QCSPrimPolygonLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QCSPrimPolygonLayout *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->SetValues(); break;
        case 2: _t->GetValues(); break;
        case 3: _t->NormVecChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QCSPrimPolygonLayout::*)()>(_a, &QCSPrimPolygonLayout::modified, 0))
            return;
    }
}

const QMetaObject *QCSPrimPolygonLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCSPrimPolygonLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20QCSPrimPolygonLayoutE_t>.strings))
        return static_cast<void*>(this);
    return QCSPrimitiveLayout::qt_metacast(_clname);
}

int QCSPrimPolygonLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCSPrimitiveLayout::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QCSPrimPolygonLayout::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN24QCSPrimUserDefinedLayoutE_t {};
} // unnamed namespace

template <> constexpr inline auto QCSPrimUserDefinedLayout::qt_create_metaobjectdata<qt_meta_tag_ZN24QCSPrimUserDefinedLayoutE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QCSPrimUserDefinedLayout",
        "modified",
        "",
        "SetValues",
        "GetValues"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'modified'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SetValues'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'GetValues'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QCSPrimUserDefinedLayout, qt_meta_tag_ZN24QCSPrimUserDefinedLayoutE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QCSPrimUserDefinedLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QCSPrimitiveLayout::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24QCSPrimUserDefinedLayoutE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24QCSPrimUserDefinedLayoutE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN24QCSPrimUserDefinedLayoutE_t>.metaTypes,
    nullptr
} };

void QCSPrimUserDefinedLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QCSPrimUserDefinedLayout *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->SetValues(); break;
        case 2: _t->GetValues(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QCSPrimUserDefinedLayout::*)()>(_a, &QCSPrimUserDefinedLayout::modified, 0))
            return;
    }
}

const QMetaObject *QCSPrimUserDefinedLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCSPrimUserDefinedLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24QCSPrimUserDefinedLayoutE_t>.strings))
        return static_cast<void*>(this);
    return QCSPrimitiveLayout::qt_metacast(_clname);
}

int QCSPrimUserDefinedLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCSPrimitiveLayout::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QCSPrimUserDefinedLayout::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
