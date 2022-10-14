// clang-format off

/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.1.0
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

/****************************************************************************
 Copyright (c) 2022 Xiamen Yaji Software Co., Ltd.

 http://www.cocos.com

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated engine source code (the "Software"), a limited,
 worldwide, royalty-free, non-assignable, revocable and non-exclusive license
 to use Cocos Creator solely to develop games on your target platforms. You shall
 not use Cocos Creator software for developing other software or tools that's
 used for developing games. You are not granted to publish, distribute,
 sublicense, and/or sell copies of Cocos Creator.

 The software or tools in this License Agreement are licensed, not sold.
 Xiamen Yaji Software Co., Ltd. reserves all rights not expressly granted to you.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
****************************************************************************/

#pragma once
#include "bindings/jswrapper/SeApi.h"
#include "bindings/manual/jsb_conversions.h"
#include "core/Root.h"
#include "core/scene-graph/Node.h"
#include "core/scene-graph/Scene.h"
#include "core/scene-graph/SceneGlobals.h"
#include "scene/Light.h"
#include "scene/Fog.h"
#include "scene/Shadow.h"
#include "scene/Skybox.h"
#include "scene/DirectionalLight.h"
#include "scene/SpotLight.h"
#include "scene/SphereLight.h"
#include "scene/Model.h"
#include "scene/SubModel.h"
#include "scene/Pass.h"
#include "scene/RenderScene.h"
#include "scene/DrawBatch2D.h"
#include "scene/RenderWindow.h"
#include "scene/Camera.h"
#include "scene/Define.h"
#include "scene/Ambient.h"
#include "renderer/core/PassInstance.h"
#include "renderer/core/MaterialInstance.h"
#include "3d/models/MorphModel.h"
#include "3d/models/SkinningModel.h"
#include "3d/models/BakedSkinningModel.h"
#include "renderer/core/ProgramLib.h"
#include "scene/Octree.h"



bool register_all_scene(se::Object* obj);


JSB_REGISTER_OBJECT_TYPE(cc::Layers);
extern se::Object *__jsb_cc_Layers_proto; // NOLINT
extern se::Class * __jsb_cc_Layers_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::Node::UserData);
extern se::Object *__jsb_cc_Node_UserData_proto; // NOLINT
extern se::Class * __jsb_cc_Node_UserData_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::Node);
extern se::Object *__jsb_cc_Node_proto; // NOLINT
extern se::Class * __jsb_cc_Node_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::Scene);
extern se::Object *__jsb_cc_Scene_proto; // NOLINT
extern se::Class * __jsb_cc_Scene_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::SceneGlobals);
extern se::Object *__jsb_cc_SceneGlobals_proto; // NOLINT
extern se::Class * __jsb_cc_SceneGlobals_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::DebugViewConfig);
extern se::Object *__jsb_cc_DebugViewConfig_proto; // NOLINT
extern se::Class * __jsb_cc_DebugViewConfig_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::DebugViewConfig * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::Root);
extern se::Object *__jsb_cc_Root_proto; // NOLINT
extern se::Class * __jsb_cc_Root_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::scene::IMacroPatch);
extern se::Object *__jsb_cc_scene_IMacroPatch_proto; // NOLINT
extern se::Class * __jsb_cc_scene_IMacroPatch_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::scene::IMacroPatch * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::scene::Light);
extern se::Object *__jsb_cc_scene_Light_proto; // NOLINT
extern se::Class * __jsb_cc_scene_Light_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::scene::Fog);
extern se::Object *__jsb_cc_scene_Fog_proto; // NOLINT
extern se::Class * __jsb_cc_scene_Fog_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::scene::FogInfo);
extern se::Object *__jsb_cc_scene_FogInfo_proto; // NOLINT
extern se::Class * __jsb_cc_scene_FogInfo_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::scene::ShadowsInfo);
extern se::Object *__jsb_cc_scene_ShadowsInfo_proto; // NOLINT
extern se::Class * __jsb_cc_scene_ShadowsInfo_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::scene::Shadows);
extern se::Object *__jsb_cc_scene_Shadows_proto; // NOLINT
extern se::Class * __jsb_cc_scene_Shadows_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::scene::SkyboxInfo);
extern se::Object *__jsb_cc_scene_SkyboxInfo_proto; // NOLINT
extern se::Class * __jsb_cc_scene_SkyboxInfo_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::scene::Skybox);
extern se::Object *__jsb_cc_scene_Skybox_proto; // NOLINT
extern se::Class * __jsb_cc_scene_Skybox_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::scene::DirectionalLight);
extern se::Object *__jsb_cc_scene_DirectionalLight_proto; // NOLINT
extern se::Class * __jsb_cc_scene_DirectionalLight_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::scene::SpotLight);
extern se::Object *__jsb_cc_scene_SpotLight_proto; // NOLINT
extern se::Class * __jsb_cc_scene_SpotLight_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::scene::SphereLight);
extern se::Object *__jsb_cc_scene_SphereLight_proto; // NOLINT
extern se::Class * __jsb_cc_scene_SphereLight_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::scene::Model);
extern se::Object *__jsb_cc_scene_Model_proto; // NOLINT
extern se::Class * __jsb_cc_scene_Model_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::scene::InstancedAttributeBlock);
extern se::Object *__jsb_cc_scene_InstancedAttributeBlock_proto; // NOLINT
extern se::Class * __jsb_cc_scene_InstancedAttributeBlock_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::scene::InstancedAttributeBlock * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::scene::SubModel);
extern se::Object *__jsb_cc_scene_SubModel_proto; // NOLINT
extern se::Class * __jsb_cc_scene_SubModel_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::scene::PassDynamicsValue);
extern se::Object *__jsb_cc_scene_PassDynamicsValue_proto; // NOLINT
extern se::Class * __jsb_cc_scene_PassDynamicsValue_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::scene::PassDynamicsValue * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::scene::IBlockRef);
extern se::Object *__jsb_cc_scene_IBlockRef_proto; // NOLINT
extern se::Class * __jsb_cc_scene_IBlockRef_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::scene::IBlockRef * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::scene::Pass);
extern se::Object *__jsb_cc_scene_Pass_proto; // NOLINT
extern se::Class * __jsb_cc_scene_Pass_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::scene::IRaycastResult);
extern se::Object *__jsb_cc_scene_IRaycastResult_proto; // NOLINT
extern se::Class * __jsb_cc_scene_IRaycastResult_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::scene::IRaycastResult * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::scene::IRenderSceneInfo);
extern se::Object *__jsb_cc_scene_IRenderSceneInfo_proto; // NOLINT
extern se::Class * __jsb_cc_scene_IRenderSceneInfo_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::scene::IRenderSceneInfo * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::scene::RenderScene);
extern se::Object *__jsb_cc_scene_RenderScene_proto; // NOLINT
extern se::Class * __jsb_cc_scene_RenderScene_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::scene::IRenderWindowInfo);
extern se::Object *__jsb_cc_scene_IRenderWindowInfo_proto; // NOLINT
extern se::Class * __jsb_cc_scene_IRenderWindowInfo_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::scene::IRenderWindowInfo * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::scene::RenderWindow);
extern se::Object *__jsb_cc_scene_RenderWindow_proto; // NOLINT
extern se::Class * __jsb_cc_scene_RenderWindow_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::scene::ICameraInfo);
extern se::Object *__jsb_cc_scene_ICameraInfo_proto; // NOLINT
extern se::Class * __jsb_cc_scene_ICameraInfo_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::scene::ICameraInfo * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::scene::Camera);
extern se::Object *__jsb_cc_scene_Camera_proto; // NOLINT
extern se::Class * __jsb_cc_scene_Camera_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::scene::Ambient);
extern se::Object *__jsb_cc_scene_Ambient_proto; // NOLINT
extern se::Class * __jsb_cc_scene_Ambient_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::scene::AmbientInfo);
extern se::Object *__jsb_cc_scene_AmbientInfo_proto; // NOLINT
extern se::Class * __jsb_cc_scene_AmbientInfo_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::PassInstance);
extern se::Object *__jsb_cc_PassInstance_proto; // NOLINT
extern se::Class * __jsb_cc_PassInstance_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::IMaterialInstanceInfo);
extern se::Object *__jsb_cc_IMaterialInstanceInfo_proto; // NOLINT
extern se::Class * __jsb_cc_IMaterialInstanceInfo_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::IMaterialInstanceInfo * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::MaterialInstance);
extern se::Object *__jsb_cc_MaterialInstance_proto; // NOLINT
extern se::Class * __jsb_cc_MaterialInstance_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::MorphModel);
extern se::Object *__jsb_cc_MorphModel_proto; // NOLINT
extern se::Class * __jsb_cc_MorphModel_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::SkinningModel);
extern se::Object *__jsb_cc_SkinningModel_proto; // NOLINT
extern se::Class * __jsb_cc_SkinningModel_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::BakedSkinningModel);
extern se::Object *__jsb_cc_BakedSkinningModel_proto; // NOLINT
extern se::Class * __jsb_cc_BakedSkinningModel_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::IDefineRecord);
extern se::Object *__jsb_cc_IDefineRecord_proto; // NOLINT
extern se::Class * __jsb_cc_IDefineRecord_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::IDefineRecord * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::IMacroInfo);
extern se::Object *__jsb_cc_IMacroInfo_proto; // NOLINT
extern se::Class * __jsb_cc_IMacroInfo_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::IMacroInfo * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::IProgramInfo);
extern se::Object *__jsb_cc_IProgramInfo_proto; // NOLINT
extern se::Class * __jsb_cc_IProgramInfo_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::IProgramInfo * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::ProgramLib);
extern se::Object *__jsb_cc_ProgramLib_proto; // NOLINT
extern se::Class * __jsb_cc_ProgramLib_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::scene::OctreeInfo);
extern se::Object *__jsb_cc_scene_OctreeInfo_proto; // NOLINT
extern se::Class * __jsb_cc_scene_OctreeInfo_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::scene::BBox);
extern se::Object *__jsb_cc_scene_BBox_proto; // NOLINT
extern se::Class * __jsb_cc_scene_BBox_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::scene::BBox * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::scene::OctreeNode);
extern se::Object *__jsb_cc_scene_OctreeNode_proto; // NOLINT
extern se::Class * __jsb_cc_scene_OctreeNode_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::scene::Octree);
extern se::Object *__jsb_cc_scene_Octree_proto; // NOLINT
extern se::Class * __jsb_cc_scene_Octree_class; // NOLINT

// clang-format on
