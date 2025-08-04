/****************************************************************************
** Meta object code from reading C++ file 'QCSPropEditor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../QCSXCAD/QCSPropEditor.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QCSPropEditor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16QColorPushButtonE_t {};
} // unnamed namespace

template <> constexpr inline auto QColorPushButton::qt_create_metaobjectdata<qt_meta_tag_ZN16QColorPushButtonE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QColorPushButton",
        "ChangeColor",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'ChangeColor'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QColorPushButton, qt_meta_tag_ZN16QColorPushButtonE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QColorPushButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QColorPushButtonE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QColorPushButtonE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16QColorPushButtonE_t>.metaTypes,
    nullptr
} };

void QColorPushButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QColorPushButton *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->ChangeColor(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *QColorPushButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QColorPushButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QColorPushButtonE_t>.strings))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int QColorPushButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN13QCSPropEditorE_t {};
} // unnamed namespace

template <> constexpr inline auto QCSPropEditor::qt_create_metaobjectdata<qt_meta_tag_ZN13QCSPropEditorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QCSPropEditor",
        "Reset",
        "",
        "Save",
        "Cancel",
        "Fill2EdgeColor",
        "Edge2FillColor",
        "GetValues",
        "SetValues"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'Reset'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'Save'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'Cancel'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'Fill2EdgeColor'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'Edge2FillColor'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'GetValues'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'SetValues'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QCSPropEditor, qt_meta_tag_ZN13QCSPropEditorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QCSPropEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QCSPropEditorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QCSPropEditorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13QCSPropEditorE_t>.metaTypes,
    nullptr
} };

void QCSPropEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QCSPropEditor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->Reset(); break;
        case 1: _t->Save(); break;
        case 2: _t->Cancel(); break;
        case 3: _t->Fill2EdgeColor(); break;
        case 4: _t->Edge2FillColor(); break;
        case 5: _t->GetValues(); break;
        case 6: _t->SetValues(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *QCSPropEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCSPropEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QCSPropEditorE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QCSPropEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN19QCSPropertyGroupBoxE_t {};
} // unnamed namespace

template <> constexpr inline auto QCSPropertyGroupBox::qt_create_metaobjectdata<qt_meta_tag_ZN19QCSPropertyGroupBoxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QCSPropertyGroupBox",
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
    return QtMocHelpers::metaObjectData<QCSPropertyGroupBox, qt_meta_tag_ZN19QCSPropertyGroupBoxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QCSPropertyGroupBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QGroupBox::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19QCSPropertyGroupBoxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19QCSPropertyGroupBoxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19QCSPropertyGroupBoxE_t>.metaTypes,
    nullptr
} };

void QCSPropertyGroupBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QCSPropertyGroupBox *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->SetValues(); break;
        case 2: _t->GetValues(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QCSPropertyGroupBox::*)()>(_a, &QCSPropertyGroupBox::modified, 0))
            return;
    }
}

const QMetaObject *QCSPropertyGroupBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCSPropertyGroupBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19QCSPropertyGroupBoxE_t>.strings))
        return static_cast<void*>(this);
    return QGroupBox::qt_metacast(_clname);
}

int QCSPropertyGroupBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
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
void QCSPropertyGroupBox::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN16QCSPropUnknownGBE_t {};
} // unnamed namespace

template <> constexpr inline auto QCSPropUnknownGB::qt_create_metaobjectdata<qt_meta_tag_ZN16QCSPropUnknownGBE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QCSPropUnknownGB",
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
    return QtMocHelpers::metaObjectData<QCSPropUnknownGB, qt_meta_tag_ZN16QCSPropUnknownGBE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QCSPropUnknownGB::staticMetaObject = { {
    QMetaObject::SuperData::link<QCSPropertyGroupBox::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QCSPropUnknownGBE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QCSPropUnknownGBE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16QCSPropUnknownGBE_t>.metaTypes,
    nullptr
} };

void QCSPropUnknownGB::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QCSPropUnknownGB *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->SetValues(); break;
        case 2: _t->GetValues(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QCSPropUnknownGB::*)()>(_a, &QCSPropUnknownGB::modified, 0))
            return;
    }
}

const QMetaObject *QCSPropUnknownGB::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCSPropUnknownGB::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QCSPropUnknownGBE_t>.strings))
        return static_cast<void*>(this);
    return QCSPropertyGroupBox::qt_metacast(_clname);
}

int QCSPropUnknownGB::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCSPropertyGroupBox::qt_metacall(_c, _id, _a);
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
void QCSPropUnknownGB::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN17QCSPropMaterialGBE_t {};
} // unnamed namespace

template <> constexpr inline auto QCSPropMaterialGB::qt_create_metaobjectdata<qt_meta_tag_ZN17QCSPropMaterialGBE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QCSPropMaterialGB",
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
    return QtMocHelpers::metaObjectData<QCSPropMaterialGB, qt_meta_tag_ZN17QCSPropMaterialGBE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QCSPropMaterialGB::staticMetaObject = { {
    QMetaObject::SuperData::link<QCSPropertyGroupBox::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QCSPropMaterialGBE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QCSPropMaterialGBE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17QCSPropMaterialGBE_t>.metaTypes,
    nullptr
} };

void QCSPropMaterialGB::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QCSPropMaterialGB *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->SetValues(); break;
        case 2: _t->GetValues(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QCSPropMaterialGB::*)()>(_a, &QCSPropMaterialGB::modified, 0))
            return;
    }
}

const QMetaObject *QCSPropMaterialGB::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCSPropMaterialGB::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QCSPropMaterialGBE_t>.strings))
        return static_cast<void*>(this);
    return QCSPropertyGroupBox::qt_metacast(_clname);
}

int QCSPropMaterialGB::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCSPropertyGroupBox::qt_metacall(_c, _id, _a);
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
void QCSPropMaterialGB::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN19QCSPropExcitationGBE_t {};
} // unnamed namespace

template <> constexpr inline auto QCSPropExcitationGB::qt_create_metaobjectdata<qt_meta_tag_ZN19QCSPropExcitationGBE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QCSPropExcitationGB",
        "modified",
        "",
        "SetValues",
        "GetValues",
        "TypeChanged",
        "index"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'modified'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SetValues'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'GetValues'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'TypeChanged'
        QtMocHelpers::SlotData<void(int)>(5, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QCSPropExcitationGB, qt_meta_tag_ZN19QCSPropExcitationGBE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QCSPropExcitationGB::staticMetaObject = { {
    QMetaObject::SuperData::link<QCSPropertyGroupBox::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19QCSPropExcitationGBE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19QCSPropExcitationGBE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19QCSPropExcitationGBE_t>.metaTypes,
    nullptr
} };

void QCSPropExcitationGB::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QCSPropExcitationGB *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->SetValues(); break;
        case 2: _t->GetValues(); break;
        case 3: _t->TypeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QCSPropExcitationGB::*)()>(_a, &QCSPropExcitationGB::modified, 0))
            return;
    }
}

const QMetaObject *QCSPropExcitationGB::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCSPropExcitationGB::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19QCSPropExcitationGBE_t>.strings))
        return static_cast<void*>(this);
    return QCSPropertyGroupBox::qt_metacast(_clname);
}

int QCSPropExcitationGB::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCSPropertyGroupBox::qt_metacall(_c, _id, _a);
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
void QCSPropExcitationGB::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN17QCSPropProbeBoxGBE_t {};
} // unnamed namespace

template <> constexpr inline auto QCSPropProbeBoxGB::qt_create_metaobjectdata<qt_meta_tag_ZN17QCSPropProbeBoxGBE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QCSPropProbeBoxGB",
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
    return QtMocHelpers::metaObjectData<QCSPropProbeBoxGB, qt_meta_tag_ZN17QCSPropProbeBoxGBE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QCSPropProbeBoxGB::staticMetaObject = { {
    QMetaObject::SuperData::link<QCSPropertyGroupBox::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QCSPropProbeBoxGBE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QCSPropProbeBoxGBE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17QCSPropProbeBoxGBE_t>.metaTypes,
    nullptr
} };

void QCSPropProbeBoxGB::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QCSPropProbeBoxGB *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->SetValues(); break;
        case 2: _t->GetValues(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QCSPropProbeBoxGB::*)()>(_a, &QCSPropProbeBoxGB::modified, 0))
            return;
    }
}

const QMetaObject *QCSPropProbeBoxGB::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCSPropProbeBoxGB::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QCSPropProbeBoxGBE_t>.strings))
        return static_cast<void*>(this);
    return QCSPropertyGroupBox::qt_metacast(_clname);
}

int QCSPropProbeBoxGB::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCSPropertyGroupBox::qt_metacall(_c, _id, _a);
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
void QCSPropProbeBoxGB::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN15QCSPropResBoxGBE_t {};
} // unnamed namespace

template <> constexpr inline auto QCSPropResBoxGB::qt_create_metaobjectdata<qt_meta_tag_ZN15QCSPropResBoxGBE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QCSPropResBoxGB",
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
    return QtMocHelpers::metaObjectData<QCSPropResBoxGB, qt_meta_tag_ZN15QCSPropResBoxGBE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QCSPropResBoxGB::staticMetaObject = { {
    QMetaObject::SuperData::link<QCSPropertyGroupBox::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15QCSPropResBoxGBE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15QCSPropResBoxGBE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15QCSPropResBoxGBE_t>.metaTypes,
    nullptr
} };

void QCSPropResBoxGB::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QCSPropResBoxGB *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->SetValues(); break;
        case 2: _t->GetValues(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QCSPropResBoxGB::*)()>(_a, &QCSPropResBoxGB::modified, 0))
            return;
    }
}

const QMetaObject *QCSPropResBoxGB::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCSPropResBoxGB::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15QCSPropResBoxGBE_t>.strings))
        return static_cast<void*>(this);
    return QCSPropertyGroupBox::qt_metacast(_clname);
}

int QCSPropResBoxGB::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCSPropertyGroupBox::qt_metacall(_c, _id, _a);
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
void QCSPropResBoxGB::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN16QCSPropDumpBoxGBE_t {};
} // unnamed namespace

template <> constexpr inline auto QCSPropDumpBoxGB::qt_create_metaobjectdata<qt_meta_tag_ZN16QCSPropDumpBoxGBE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QCSPropDumpBoxGB",
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
    return QtMocHelpers::metaObjectData<QCSPropDumpBoxGB, qt_meta_tag_ZN16QCSPropDumpBoxGBE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QCSPropDumpBoxGB::staticMetaObject = { {
    QMetaObject::SuperData::link<QCSPropertyGroupBox::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QCSPropDumpBoxGBE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QCSPropDumpBoxGBE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16QCSPropDumpBoxGBE_t>.metaTypes,
    nullptr
} };

void QCSPropDumpBoxGB::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QCSPropDumpBoxGB *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->SetValues(); break;
        case 2: _t->GetValues(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QCSPropDumpBoxGB::*)()>(_a, &QCSPropDumpBoxGB::modified, 0))
            return;
    }
}

const QMetaObject *QCSPropDumpBoxGB::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCSPropDumpBoxGB::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16QCSPropDumpBoxGBE_t>.strings))
        return static_cast<void*>(this);
    return QCSPropertyGroupBox::qt_metacast(_clname);
}

int QCSPropDumpBoxGB::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCSPropertyGroupBox::qt_metacall(_c, _id, _a);
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
void QCSPropDumpBoxGB::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
