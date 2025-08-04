/****************************************************************************
** Meta object code from reading C++ file 'QCSXCAD.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../QCSXCAD/QCSXCAD.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QCSXCAD.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7QCSXCADE_t {};
} // unnamed namespace

template <> constexpr inline auto QCSXCAD::qt_create_metaobjectdata<qt_meta_tag_ZN7QCSXCADE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QCSXCAD",
        "modified",
        "",
        "val",
        "CheckGeometry",
        "ImportGeometry",
        "ExportGeometry",
        "ExportGeometry_Povray",
        "ExportGeometry_X3D",
        "filename",
        "dirname",
        "type",
        "ExportGeometry_PolyDataVTK",
        "ExportGeometry_STL",
        "ExportGeometry_PLY",
        "ExportView2Image",
        "EnableDiscModelRendering",
        "Render",
        "clear",
        "New",
        "HideAll",
        "ShowAll",
        "SetParallelProjection",
        "BestView",
        "setViewDir",
        "dir",
        "setXY",
        "setYZ",
        "setZX",
        "SetSimMode",
        "mode",
        "GUIUpdate",
        "aboutQCSXCAD",
        "QWidget*",
        "parent",
        "Edit",
        "Copy",
        "ShowHide",
        "Delete",
        "NewBox",
        "NewMultiBox",
        "NewSphere",
        "NewCylinder",
        "NewPolygon",
        "NewUserDefined",
        "NewMaterial",
        "NewMetal",
        "NewExcitation",
        "NewChargeBox",
        "NewResBox",
        "NewDumpBox",
        "setModified",
        "DetectEdges",
        "nu",
        "View2D",
        "View3D"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'modified'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Slot 'CheckGeometry'
        QtMocHelpers::SlotData<bool()>(4, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'ImportGeometry'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ExportGeometry'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ExportGeometry_Povray'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ExportGeometry_X3D'
        QtMocHelpers::SlotData<void(QString)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'ExportGeometry_X3D'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'ExportGeometry'
        QtMocHelpers::SlotData<void(QString, int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 }, { QMetaType::Int, 11 },
        }}),
        // Slot 'ExportGeometry_PolyDataVTK'
        QtMocHelpers::SlotData<void(QString)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'ExportGeometry_PolyDataVTK'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'ExportGeometry_STL'
        QtMocHelpers::SlotData<void(QString)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'ExportGeometry_STL'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'ExportGeometry_PLY'
        QtMocHelpers::SlotData<void(QString)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'ExportGeometry_PLY'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'ExportView2Image'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'EnableDiscModelRendering'
        QtMocHelpers::SlotData<void(bool)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Slot 'EnableDiscModelRendering'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'Render'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'clear'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'New'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'HideAll'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ShowAll'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SetParallelProjection'
        QtMocHelpers::SlotData<void(bool)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Slot 'BestView'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setViewDir'
        QtMocHelpers::SlotData<void(int)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 25 },
        }}),
        // Slot 'setXY'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setYZ'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setZX'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SetSimMode'
        QtMocHelpers::SlotData<void(int)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 30 },
        }}),
        // Slot 'GUIUpdate'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'aboutQCSXCAD'
        QtMocHelpers::SlotData<void(QWidget *)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 33, 34 },
        }}),
        // Slot 'aboutQCSXCAD'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'Edit'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'Copy'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'ShowHide'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'Delete'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'NewBox'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'NewMultiBox'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'NewSphere'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'NewCylinder'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'NewPolygon'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'NewUserDefined'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'NewMaterial'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'NewMetal'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'NewExcitation'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'NewChargeBox'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'NewResBox'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'NewDumpBox'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'setModified'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'DetectEdges'
        QtMocHelpers::SlotData<void(int)>(52, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 53 },
        }}),
        // Slot 'View2D'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'View3D'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QCSXCAD, qt_meta_tag_ZN7QCSXCADE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QCSXCAD::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7QCSXCADE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7QCSXCADE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7QCSXCADE_t>.metaTypes,
    nullptr
} };

void QCSXCAD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QCSXCAD *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->modified((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: { bool _r = _t->CheckGeometry();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->ImportGeometry(); break;
        case 3: _t->ExportGeometry(); break;
        case 4: _t->ExportGeometry_Povray(); break;
        case 5: _t->ExportGeometry_X3D((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->ExportGeometry_X3D(); break;
        case 7: _t->ExportGeometry((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 8: _t->ExportGeometry_PolyDataVTK((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->ExportGeometry_PolyDataVTK(); break;
        case 10: _t->ExportGeometry_STL((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->ExportGeometry_STL(); break;
        case 12: _t->ExportGeometry_PLY((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->ExportGeometry_PLY(); break;
        case 14: _t->ExportView2Image(); break;
        case 15: _t->EnableDiscModelRendering((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->EnableDiscModelRendering(); break;
        case 17: _t->Render(); break;
        case 18: _t->clear(); break;
        case 19: _t->New(); break;
        case 20: _t->HideAll(); break;
        case 21: _t->ShowAll(); break;
        case 22: _t->SetParallelProjection((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->BestView(); break;
        case 24: _t->setViewDir((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 25: _t->setXY(); break;
        case 26: _t->setYZ(); break;
        case 27: _t->setZX(); break;
        case 28: _t->SetSimMode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 29: _t->GUIUpdate(); break;
        case 30: _t->aboutQCSXCAD((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 31: _t->aboutQCSXCAD(); break;
        case 32: _t->Edit(); break;
        case 33: _t->Copy(); break;
        case 34: _t->ShowHide(); break;
        case 35: _t->Delete(); break;
        case 36: _t->NewBox(); break;
        case 37: _t->NewMultiBox(); break;
        case 38: _t->NewSphere(); break;
        case 39: _t->NewCylinder(); break;
        case 40: _t->NewPolygon(); break;
        case 41: _t->NewUserDefined(); break;
        case 42: _t->NewMaterial(); break;
        case 43: _t->NewMetal(); break;
        case 44: _t->NewExcitation(); break;
        case 45: _t->NewChargeBox(); break;
        case 46: _t->NewResBox(); break;
        case 47: _t->NewDumpBox(); break;
        case 48: _t->setModified(); break;
        case 49: _t->DetectEdges((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 50: _t->View2D(); break;
        case 51: _t->View3D(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QCSXCAD::*)(bool )>(_a, &QCSXCAD::modified, 0))
            return;
    }
}

const QMetaObject *QCSXCAD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCSXCAD::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7QCSXCADE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ContinuousStructure"))
        return static_cast< ContinuousStructure*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QCSXCAD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    }
    return _id;
}

// SIGNAL 0
void QCSXCAD::modified(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
