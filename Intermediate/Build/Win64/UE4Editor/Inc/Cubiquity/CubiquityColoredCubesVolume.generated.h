// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FColor;
#ifdef CUBIQUITY_CubiquityColoredCubesVolume_generated_h
#error "CubiquityColoredCubesVolume.generated.h already included, missing '#pragma once' in CubiquityColoredCubesVolume.h"
#endif
#define CUBIQUITY_CubiquityColoredCubesVolume_generated_h

#define FPSTemplate_Plugins_Cubiquity_Source_Cubiquity_Classes_CubiquityColoredCubesVolume_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetVoxel) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_localPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=this->getVoxel(Z_Param_localPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetVoxel) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_localPosition); \
		P_GET_STRUCT(FColor,Z_Param_newColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setVoxel(Z_Param_localPosition,Z_Param_newColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execpickLastEmptyVoxel) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_localStartPosition); \
		P_GET_STRUCT(FVector,Z_Param_localDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->pickLastEmptyVoxel(Z_Param_localStartPosition,Z_Param_localDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execpickFirstSolidVoxel) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_localStartPosition); \
		P_GET_STRUCT(FVector,Z_Param_localDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->pickFirstSolidVoxel(Z_Param_localStartPosition,Z_Param_localDirection); \
		P_NATIVE_END; \
	}


#define FPSTemplate_Plugins_Cubiquity_Source_Cubiquity_Classes_CubiquityColoredCubesVolume_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetVoxel) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_localPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=this->getVoxel(Z_Param_localPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetVoxel) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_localPosition); \
		P_GET_STRUCT(FColor,Z_Param_newColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setVoxel(Z_Param_localPosition,Z_Param_newColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execpickLastEmptyVoxel) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_localStartPosition); \
		P_GET_STRUCT(FVector,Z_Param_localDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->pickLastEmptyVoxel(Z_Param_localStartPosition,Z_Param_localDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execpickFirstSolidVoxel) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_localStartPosition); \
		P_GET_STRUCT(FVector,Z_Param_localDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->pickFirstSolidVoxel(Z_Param_localStartPosition,Z_Param_localDirection); \
		P_NATIVE_END; \
	}


#define FPSTemplate_Plugins_Cubiquity_Source_Cubiquity_Classes_CubiquityColoredCubesVolume_h_17_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesACubiquityColoredCubesVolume(); \
	friend CUBIQUITY_API class UClass* Z_Construct_UClass_ACubiquityColoredCubesVolume(); \
	public: \
	DECLARE_CLASS(ACubiquityColoredCubesVolume, ACubiquityVolume, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Cubiquity"), NO_API) \
	DECLARE_SERIALIZER(ACubiquityColoredCubesVolume) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPSTemplate_Plugins_Cubiquity_Source_Cubiquity_Classes_CubiquityColoredCubesVolume_h_17_INCLASS \
	private: \
	static void StaticRegisterNativesACubiquityColoredCubesVolume(); \
	friend CUBIQUITY_API class UClass* Z_Construct_UClass_ACubiquityColoredCubesVolume(); \
	public: \
	DECLARE_CLASS(ACubiquityColoredCubesVolume, ACubiquityVolume, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Cubiquity"), NO_API) \
	DECLARE_SERIALIZER(ACubiquityColoredCubesVolume) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPSTemplate_Plugins_Cubiquity_Source_Cubiquity_Classes_CubiquityColoredCubesVolume_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACubiquityColoredCubesVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACubiquityColoredCubesVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACubiquityColoredCubesVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACubiquityColoredCubesVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACubiquityColoredCubesVolume(ACubiquityColoredCubesVolume&&); \
	NO_API ACubiquityColoredCubesVolume(const ACubiquityColoredCubesVolume&); \
public:


#define FPSTemplate_Plugins_Cubiquity_Source_Cubiquity_Classes_CubiquityColoredCubesVolume_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACubiquityColoredCubesVolume(ACubiquityColoredCubesVolume&&); \
	NO_API ACubiquityColoredCubesVolume(const ACubiquityColoredCubesVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACubiquityColoredCubesVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACubiquityColoredCubesVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACubiquityColoredCubesVolume)


#define FPSTemplate_Plugins_Cubiquity_Source_Cubiquity_Classes_CubiquityColoredCubesVolume_h_17_PRIVATE_PROPERTY_OFFSET
#define FPSTemplate_Plugins_Cubiquity_Source_Cubiquity_Classes_CubiquityColoredCubesVolume_h_14_PROLOG
#define FPSTemplate_Plugins_Cubiquity_Source_Cubiquity_Classes_CubiquityColoredCubesVolume_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSTemplate_Plugins_Cubiquity_Source_Cubiquity_Classes_CubiquityColoredCubesVolume_h_17_PRIVATE_PROPERTY_OFFSET \
	FPSTemplate_Plugins_Cubiquity_Source_Cubiquity_Classes_CubiquityColoredCubesVolume_h_17_RPC_WRAPPERS \
	FPSTemplate_Plugins_Cubiquity_Source_Cubiquity_Classes_CubiquityColoredCubesVolume_h_17_INCLASS \
	FPSTemplate_Plugins_Cubiquity_Source_Cubiquity_Classes_CubiquityColoredCubesVolume_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSTemplate_Plugins_Cubiquity_Source_Cubiquity_Classes_CubiquityColoredCubesVolume_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSTemplate_Plugins_Cubiquity_Source_Cubiquity_Classes_CubiquityColoredCubesVolume_h_17_PRIVATE_PROPERTY_OFFSET \
	FPSTemplate_Plugins_Cubiquity_Source_Cubiquity_Classes_CubiquityColoredCubesVolume_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSTemplate_Plugins_Cubiquity_Source_Cubiquity_Classes_CubiquityColoredCubesVolume_h_17_INCLASS_NO_PURE_DECLS \
	FPSTemplate_Plugins_Cubiquity_Source_Cubiquity_Classes_CubiquityColoredCubesVolume_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSTemplate_Plugins_Cubiquity_Source_Cubiquity_Classes_CubiquityColoredCubesVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
