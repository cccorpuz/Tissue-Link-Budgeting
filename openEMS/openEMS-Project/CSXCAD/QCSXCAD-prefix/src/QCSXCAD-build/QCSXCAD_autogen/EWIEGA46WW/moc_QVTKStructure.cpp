/****************************************************************************
** Meta object code from reading C++ file 'QVTKStructure.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../QCSXCAD/QVTKStructure.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QVTKStructure.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13QVTKStructureE_t {};
} // unnamed namespace

template <> constexpr inline auto QVTKStructure::qt_create_metaobjectdata<qt_meta_tag_ZN13QVTKStructureE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QVTKStructure",
        "SetGridOpacity",
        "",
        "val",
        "ResetView",
        "setXY",
        "setYZ",
        "setZX",
        "SetPropOpacity",
        "uiID",
        "RenderGrid",
        "RenderGridX",
        "plane_pos",
        "RenderGridY",
        "RenderGridZ",
        "RenderGeometry",
        "SetParallelProjection",
        "render",
        "Set2DInteractionStyle",
        "SaveCamData",
        "RestoreCamData",
        "RenderDiscMaterialModel",
        "ExportView2Image",
        "ExportProperty2PolyDataVTK",
        "filename",
        "scale",
        "ExportProperty2STL",
        "ExportProperty2PLY",
        "RenderGridDir",
        "dir"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'SetGridOpacity'
        QtMocHelpers::SlotData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'ResetView'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setXY'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setYZ'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setZX'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SetPropOpacity'
        QtMocHelpers::SlotData<void(unsigned int, int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 9 }, { QMetaType::Int, 3 },
        }}),
        // Slot 'RenderGrid'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'RenderGridX'
        QtMocHelpers::SlotData<void(int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Slot 'RenderGridY'
        QtMocHelpers::SlotData<void(int)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Slot 'RenderGridZ'
        QtMocHelpers::SlotData<void(int)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Slot 'RenderGeometry'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'SetParallelProjection'
        QtMocHelpers::SlotData<void(bool, bool)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 }, { QMetaType::Bool, 17 },
        }}),
        // Slot 'SetParallelProjection'
        QtMocHelpers::SlotData<void(bool)>(16, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Slot 'Set2DInteractionStyle'
        QtMocHelpers::SlotData<void(bool, bool)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 }, { QMetaType::Bool, 17 },
        }}),
        // Slot 'Set2DInteractionStyle'
        QtMocHelpers::SlotData<void(bool)>(18, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Slot 'SaveCamData'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'RestoreCamData'
        QtMocHelpers::SlotData<void(bool)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 17 },
        }}),
        // Slot 'RenderDiscMaterialModel'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ExportView2Image'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ExportProperty2PolyDataVTK'
        QtMocHelpers::SlotData<void(unsigned int, QString, double)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 9 }, { QMetaType::QString, 24 }, { QMetaType::Double, 25 },
        }}),
        // Slot 'ExportProperty2PolyDataVTK'
        QtMocHelpers::SlotData<void(unsigned int, QString)>(23, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::UInt, 9 }, { QMetaType::QString, 24 },
        }}),
        // Slot 'ExportProperty2STL'
        QtMocHelpers::SlotData<void(unsigned int, QString, double)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 9 }, { QMetaType::QString, 24 }, { QMetaType::Double, 25 },
        }}),
        // Slot 'ExportProperty2STL'
        QtMocHelpers::SlotData<void(unsigned int, QString)>(26, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::UInt, 9 }, { QMetaType::QString, 24 },
        }}),
        // Slot 'ExportProperty2PLY'
        QtMocHelpers::SlotData<void(unsigned int, QString, double)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 9 }, { QMetaType::QString, 24 }, { QMetaType::Double, 25 },
        }}),
        // Slot 'ExportProperty2PLY'
        QtMocHelpers::SlotData<void(unsigned int, QString)>(27, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::UInt, 9 }, { QMetaType::QString, 24 },
        }}),
        // Slot 'RenderGridDir'
        QtMocHelpers::SlotData<void(int, unsigned int)>(28, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 29 }, { QMetaType::UInt, 12 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QVTKStructure, qt_meta_tag_ZN13QVTKStructureE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QVTKStructure::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QVTKStructureE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QVTKStructureE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13QVTKStructureE_t>.metaTypes,
    nullptr
} };

void QVTKStructure::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QVTKStructure *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->SetGridOpacity((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->ResetView(); break;
        case 2: _t->setXY(); break;
        case 3: _t->setYZ(); break;
        case 4: _t->setZX(); break;
        case 5: _t->SetPropOpacity((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 6: _t->RenderGrid(); break;
        case 7: _t->RenderGridX((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->RenderGridY((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->RenderGridZ((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->RenderGeometry(); break;
        case 11: _t->SetParallelProjection((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 12: _t->SetParallelProjection((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->Set2DInteractionStyle((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 14: _t->Set2DInteractionStyle((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->SaveCamData(); break;
        case 16: _t->RestoreCamData((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->RenderDiscMaterialModel(); break;
        case 18: _t->ExportView2Image(); break;
        case 19: _t->ExportProperty2PolyDataVTK((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3]))); break;
        case 20: _t->ExportProperty2PolyDataVTK((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 21: _t->ExportProperty2STL((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3]))); break;
        case 22: _t->ExportProperty2STL((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 23: _t->ExportProperty2PLY((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3]))); break;
        case 24: _t->ExportProperty2PLY((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 25: _t->RenderGridDir((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *QVTKStructure::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QVTKStructure::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13QVTKStructureE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QVTKStructure::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 26;
    }
    return _id;
}
QT_WARNING_POP
