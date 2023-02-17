#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[7] = 
{
	{ 12575, 0,  0 } /*tableIndex: 0 */,
	{ 5907, 0,  1 } /*tableIndex: 1 */,
	{ 1329, 0,  2 } /*tableIndex: 2 */,
	{ 1205, 0,  3 } /*tableIndex: 3 */,
	{ 10023, 1,  4 } /*tableIndex: 4 */,
	{ 11475, 0,  7 } /*tableIndex: 5 */,
	{ 11473, 0,  8 } /*tableIndex: 6 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[2] = 
{
	"handler",
	"n",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[18] = 
{
	{ 0, 1 } /* 0x06000001 System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdated(System.Boolean) */,
	{ 1, 1 } /* 0x06000002 System.Void UnityEngine.RemoteSettings::RemoteSettingsBeforeFetchFromServer() */,
	{ 2, 1 } /* 0x06000003 System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdateCompleted(System.Boolean,System.Boolean,System.Int32) */,
	{ 0, 0 } /* 0x06000004 System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000005 System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::Invoke() */,
	{ 3, 1 } /* 0x06000006 System.Void UnityEngine.RemoteConfigSettings::RemoteConfigSettingsUpdated(UnityEngine.RemoteConfigSettings,System.Boolean) */,
	{ 0, 0 } /* 0x06000007 System.Boolean UnityEngine.Analytics.Analytics::IsInitialized() */,
	{ 0, 0 } /* 0x06000008 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEventWithLimit(System.String,System.Int32,System.Int32,System.String,System.Int32,System.String,System.String,System.Boolean) */,
	{ 0, 0 } /* 0x06000009 UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SendEventWithLimit(System.String,System.Object,System.Int32,System.String) */,
	{ 4, 1 } /* 0x0600000A UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEvent(System.String,System.Int32,System.Int32,System.String,System.String) */,
	{ 0, 0 } /* 0x0600000B UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEvent(System.String,System.Int32,System.Int32,System.String,System.Int32,System.String,System.String) */,
	{ 0, 0 } /* 0x0600000C UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SendEvent(System.String,System.Object,System.Int32,System.String) */,
	{ 5, 1 } /* 0x0600000D System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallSessionStateChanged(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean) */,
	{ 6, 1 } /* 0x0600000E System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallIdentityTokenChanged(System.String) */,
	{ 0, 0 } /* 0x0600000F System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000010 System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::Invoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean) */,
	{ 0, 0 } /* 0x06000011 System.Void UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000012 System.Void UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged::Invoke(System.String) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UnityAnalyticsModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_UnityAnalyticsModule[98] = 
{
	{ 31668, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 31668, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 31668, 1, 25, 25, 9, 10, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 31668, 1, 26, 26, 13, 35, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 31668, 1, 27, 27, 13, 33, 7, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 31668, 1, 27, 27, 0, 0, 12, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 31668, 1, 28, 28, 17, 27, 15, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 31668, 1, 28, 28, 17, 27, 16, kSequencePointKind_StepOut, 0, 7 } /* seqPointIndex: 7 */,
	{ 31668, 1, 29, 29, 9, 10, 22, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 31669, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 31669, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 31669, 1, 33, 33, 9, 10, 0, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 31669, 1, 34, 34, 13, 49, 1, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 31669, 1, 35, 35, 13, 33, 7, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 31669, 1, 35, 35, 0, 0, 12, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 31669, 1, 36, 36, 17, 27, 15, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 31669, 1, 36, 36, 17, 27, 16, kSequencePointKind_StepOut, 0, 16 } /* seqPointIndex: 16 */,
	{ 31669, 1, 37, 37, 9, 10, 22, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 31670, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 31670, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 31670, 1, 41, 41, 9, 10, 0, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 31670, 1, 42, 42, 13, 37, 1, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 31670, 1, 43, 43, 13, 33, 7, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 31670, 1, 43, 43, 0, 0, 12, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 31670, 1, 44, 44, 17, 78, 15, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 31670, 1, 44, 44, 17, 78, 19, kSequencePointKind_StepOut, 0, 25 } /* seqPointIndex: 25 */,
	{ 31670, 1, 45, 45, 9, 10, 25, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 31673, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 31673, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 31673, 1, 177, 177, 9, 10, 0, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 31673, 1, 178, 178, 13, 39, 1, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 31673, 1, 179, 179, 13, 33, 8, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 31673, 1, 179, 179, 0, 0, 13, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 31673, 1, 180, 180, 17, 51, 16, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 31673, 1, 180, 180, 17, 51, 18, kSequencePointKind_StepOut, 0, 34 } /* seqPointIndex: 34 */,
	{ 31673, 1, 181, 181, 9, 10, 24, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 31677, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 31677, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 31677, 2, 260, 260, 9, 10, 0, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 31677, 2, 261, 261, 13, 37, 1, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 31677, 2, 262, 262, 13, 56, 7, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 31677, 2, 262, 262, 13, 56, 7, kSequencePointKind_StepOut, 0, 41 } /* seqPointIndex: 41 */,
	{ 31677, 2, 262, 262, 13, 56, 12, kSequencePointKind_StepOut, 0, 42 } /* seqPointIndex: 42 */,
	{ 31677, 2, 263, 263, 13, 97, 18, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 31677, 2, 263, 263, 13, 97, 26, kSequencePointKind_StepOut, 0, 44 } /* seqPointIndex: 44 */,
	{ 31677, 2, 264, 264, 9, 10, 34, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 31678, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 31678, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 31678, 2, 275, 275, 9, 10, 0, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 31678, 2, 276, 276, 13, 49, 1, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 31678, 2, 276, 276, 13, 49, 2, kSequencePointKind_StepOut, 0, 50 } /* seqPointIndex: 50 */,
	{ 31678, 2, 276, 276, 0, 0, 8, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 31678, 2, 277, 277, 17, 97, 11, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 31678, 2, 277, 277, 17, 97, 16, kSequencePointKind_StepOut, 0, 53 } /* seqPointIndex: 53 */,
	{ 31678, 2, 278, 278, 13, 34, 22, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 31678, 2, 278, 278, 13, 34, 22, kSequencePointKind_StepOut, 0, 55 } /* seqPointIndex: 55 */,
	{ 31678, 2, 278, 278, 0, 0, 31, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 31678, 2, 279, 279, 17, 55, 34, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 31678, 2, 280, 280, 13, 125, 38, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 31678, 2, 280, 280, 13, 125, 49, kSequencePointKind_StepOut, 0, 59 } /* seqPointIndex: 59 */,
	{ 31678, 2, 281, 281, 9, 10, 57, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 31679, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 31679, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 31679, 2, 284, 284, 9, 10, 0, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 31679, 2, 285, 285, 13, 49, 1, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 31679, 2, 285, 285, 13, 49, 2, kSequencePointKind_StepOut, 0, 65 } /* seqPointIndex: 65 */,
	{ 31679, 2, 285, 285, 0, 0, 8, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 31679, 2, 286, 286, 17, 97, 11, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 31679, 2, 286, 286, 17, 97, 16, kSequencePointKind_StepOut, 0, 68 } /* seqPointIndex: 68 */,
	{ 31679, 2, 287, 287, 13, 36, 22, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 31679, 2, 287, 287, 0, 0, 27, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 31679, 2, 288, 288, 17, 78, 30, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 31679, 2, 288, 288, 17, 78, 35, kSequencePointKind_StepOut, 0, 72 } /* seqPointIndex: 72 */,
	{ 31679, 2, 289, 289, 13, 34, 41, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 31679, 2, 289, 289, 13, 34, 41, kSequencePointKind_StepOut, 0, 74 } /* seqPointIndex: 74 */,
	{ 31679, 2, 289, 289, 0, 0, 50, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 31679, 2, 290, 290, 17, 55, 53, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 31679, 2, 291, 291, 13, 75, 57, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 31679, 2, 291, 291, 13, 75, 61, kSequencePointKind_StepOut, 0, 78 } /* seqPointIndex: 78 */,
	{ 31679, 2, 292, 292, 9, 10, 69, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 31680, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 31680, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 31680, 3, 26, 26, 9, 10, 0, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 31680, 3, 27, 27, 13, 47, 1, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 31680, 3, 28, 28, 13, 33, 7, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 31680, 3, 28, 28, 0, 0, 12, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 31680, 3, 29, 29, 17, 86, 15, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 31680, 3, 29, 29, 17, 86, 20, kSequencePointKind_StepOut, 0, 87 } /* seqPointIndex: 87 */,
	{ 31680, 3, 30, 30, 9, 10, 26, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 31681, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 31681, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 31681, 3, 104, 104, 9, 10, 0, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 31681, 3, 105, 105, 13, 48, 1, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 31681, 3, 106, 106, 13, 33, 7, kSequencePointKind_Normal, 0, 93 } /* seqPointIndex: 93 */,
	{ 31681, 3, 106, 106, 0, 0, 12, kSequencePointKind_Normal, 0, 94 } /* seqPointIndex: 94 */,
	{ 31681, 3, 107, 107, 17, 32, 15, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 31681, 3, 107, 107, 17, 32, 17, kSequencePointKind_StepOut, 0, 96 } /* seqPointIndex: 96 */,
	{ 31681, 3, 108, 108, 9, 10, 23, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_UnityAnalyticsModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_UnityAnalyticsModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "/home/bokken/build/output/unity/unity/Modules/UnityAnalytics/RemoteSettings/RemoteSettings.bindings.cs", { 106, 60, 162, 247, 36, 252, 183, 5, 143, 102, 111, 96, 116, 222, 62, 8} }, //1 
{ "/home/bokken/build/output/unity/unity/Modules/UnityAnalytics/Public/UnityAnalytics.cs", { 90, 211, 180, 100, 167, 70, 184, 183, 94, 65, 104, 95, 138, 175, 116, 206} }, //2 
{ "/home/bokken/build/output/unity/unity/Modules/UnityAnalytics/Public/AnalyticsSessionInfo.bindings.cs", { 159, 171, 218, 211, 43, 69, 52, 219, 243, 244, 170, 90, 38, 135, 126, 190} }, //3 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[4] = 
{
	{ 4515, 1 },
	{ 4516, 1 },
	{ 4519, 2 },
	{ 4524, 3 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[9] = 
{
	{ 0, 23 },
	{ 0, 23 },
	{ 0, 26 },
	{ 0, 25 },
	{ 0, 36 },
	{ 0, 59 },
	{ 0, 71 },
	{ 0, 27 },
	{ 0, 24 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[18] = 
{
	{ 23, 0, 1 } /* System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdated(System.Boolean) */,
	{ 23, 1, 1 } /* System.Void UnityEngine.RemoteSettings::RemoteSettingsBeforeFetchFromServer() */,
	{ 26, 2, 1 } /* System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdateCompleted(System.Boolean,System.Boolean,System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::Invoke() */,
	{ 25, 3, 1 } /* System.Void UnityEngine.RemoteConfigSettings::RemoteConfigSettingsUpdated(UnityEngine.RemoteConfigSettings,System.Boolean) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.Analytics.Analytics::IsInitialized() */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEventWithLimit(System.String,System.Int32,System.Int32,System.String,System.Int32,System.String,System.String,System.Boolean) */,
	{ 0, 0, 0 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SendEventWithLimit(System.String,System.Object,System.Int32,System.String) */,
	{ 36, 4, 1 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEvent(System.String,System.Int32,System.Int32,System.String,System.String) */,
	{ 59, 5, 1 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::RegisterEvent(System.String,System.Int32,System.Int32,System.String,System.Int32,System.String,System.String) */,
	{ 71, 6, 1 } /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SendEvent(System.String,System.Object,System.Int32,System.String) */,
	{ 27, 7, 1 } /* System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallSessionStateChanged(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean) */,
	{ 24, 8, 1 } /* System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallIdentityTokenChanged(System.String) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::Invoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged::Invoke(System.String) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_UnityAnalyticsModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_UnityAnalyticsModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	98,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_UnityAnalyticsModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	4,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
