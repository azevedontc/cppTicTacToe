// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Winapi.Windows.pas' rev: 35.00 (Windows)

#ifndef Winapi_WindowsHPP
#define Winapi_WindowsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------
// WINVER check BEGIN 
#if (WINVER < 0x0400)
  #error WINVER < 0x0400
#endif
// WINVER check END. 

// WIN2K SDK fixes BEGIN 
#ifndef WINTRUST_H
  #include<wintrust.h>
#endif
// WIN2K SDK fixes END. 
//
// WINDOWS provides two definitions of BLOB: wtypes.h defines a
// BLOB as a tagBLOB struct whereas nspapi.h defines a BLOB as a _BLOB
// struct. Unfortunately, VCL does not use the portable BLOB type but
// rather relies on tagBLOB. So here we use a kludge to try to determine
// which flavour of BLOB we have (which is determined by the order of header
// inclusion by the compilation unit). If it is the _BLOB, we expose the
// tagBLOB type for VCL.
//
#if !defined(__clang__)
  #if sizeof(_BLOB) == 8      // We know that BLOB is 8 bytes 
  typedef _BLOB tagBLOB;      // If unknown, _BLOB would be 4 
  #endif                      // tagBLOB Kludge
  #if sizeof(tagBLOB) == 4    // tagBLOB has probably not been defined yet
    #ifndef _tagBLOB_DEFINED
      #define _tagBLOB_DEFINED
      #define _BLOB_DEFINED
      #define _LPBLOB_DEFINED
      typedef struct  tagBLOB
      {
      ULONG cbSize;
      /* [size_is] */ BYTE __RPC_FAR *pBlobData;
      } BLOB;

      typedef struct tagBLOB __RPC_FAR *LPBLOB;
    #endif    // _tagBLOB_DEFINED
  #endif      // sizeof(tagBLOB) == 4

#else

#endif
#if defined(WIN32_LEAN_AND_MEAN) && !defined(_DDEHEADER_INCLUDED_)
  #include <dde.h>
#endif      // WIN32_LEAN_AND_MEAN & _DDEHEADER_INCLUDED_

namespace Winapi {
namespace Windows {
  typedef _LARGE_INTEGER TLargeInteger;
} // namespace Winapi
} // namespace Windows


#if defined(_WIN32_WINNT) && (_WIN32_WINNT < 0x0502)
struct POWERBROADCAST_SETTING;
#endif
#if defined(_WIN32_WINNT) && (_WIN32_WINNT < 0x0600)
struct ICONINFOEXW;
struct ICONINFOEXA;
struct AUDIODESCRIPTION;
struct tagTITLEBARINFOEX;
enum   NORM_FORM : unsigned;
#endif
#if defined(_WIN32_WINNT) && (_WIN32_WINNT < 0x0601)
struct _UMS_SYSTEM_THREAD_INFORMATION;
struct _UMS_SCHEDULER_STARTUP_INFO;
struct _TP_CALLBACK_ENVIRON_V3;
struct TOUCHINPUT;
struct GESTUREINFO;
struct GESTURENOTIFYSTRUCT;
struct GESTURECONFIG;
#endif
#if defined(_WIN32_WINNT) && (_WIN32_WINNT < 0x0602)
struct _WIN32_MEMORY_RANGE_ENTRY;
struct _MEMORY_PRIORITY_INFORMATION;
#endif
#if defined(_WIN32_WINNT) && (_WIN32_WINNT < 0x0A00)
enum   OFFER_PRIORITY : unsigned;
#endif

#include "wtsapi32.h"
#ifndef _WIN64
#pragma link "wtsapi32.lib"
#endif //_WIN64
namespace Winapi {
namespace Windows {
  typedef ::tagMSG *PMsg;
  typedef ::tagMSG TMsg;
}
}
#define wnd_Broadcast ((HWND)0xffff)

namespace Winapi
{
namespace Windows
{
//-- forward type declarations -----------------------------------------------
struct _IMAGE_OPTIONAL_HEADER32;
struct _IMAGE_NT_HEADERS32;
struct TISHMisc;
struct TJobObjectCPURate;
struct _RECOVERY_AGENT_INFORMATIONA;
struct _RECOVERY_AGENT_INFORMATIONW;
struct TMaxLogPalette;
struct tagBROADCASTSYSMSG;
struct _HHN_NOTIFY;
struct _HH_POPUP;
struct _HH_AKLINK;
struct _HH_ENUM_IT;
struct _HH_ENUM_CAT;
struct _HH_SET_INFOTYPE;
struct _HH_FTS_QUERYA;
struct _HH_FTS_QUERYW;
struct _HH_WINTYPE;
struct _HH_NTRACK;
//-- type declarations -------------------------------------------------------
typedef System::WideChar * PWChar;

typedef System::PPWideChar PLPCTSTR;

typedef System::PPWideChar PLPTSTR;

typedef System::WideChar * *PLPWSTR;

using System::PByte;

typedef float *PSingle;

typedef NativeUInt THandle;

typedef NativeUInt *PHandle;

typedef __int64 *PLargeInteger;

typedef unsigned __int64 *PULargeInteger;

typedef _LIST_ENTRY TListEntry;

typedef PLIST_ENTRY PListEntry;

#ifndef _WIN64
typedef _SINGLE_LIST_ENTRY TSListEntry;
#else /* _WIN64 */
typedef _SLIST_ENTRY TSListEntry;
#endif /* _WIN64 */

typedef PSLIST_ENTRY PSListEntry;

typedef _CONTEXT *PContext;

typedef _CONTEXT TContext;

typedef _LDT_ENTRY *PLDTEntry;

typedef _LDT_ENTRY TLDTEntry;

typedef _EXCEPTION_RECORD *PExceptionRecord;

typedef _EXCEPTION_RECORD TExceptionRecord;

typedef _EXCEPTION_POINTERS TExceptionPointers;

typedef _MEMORY_BASIC_INFORMATION *PMemoryBasicInformation;

typedef _MEMORY_BASIC_INFORMATION TMemoryBasicInformation;

typedef _GENERIC_MAPPING *PGenericMapping;

typedef _GENERIC_MAPPING TGenericMapping;

typedef _LUID TLUID;

typedef _LUID_AND_ATTRIBUTES *PLUIDAndAttributes;

typedef _LUID_AND_ATTRIBUTES TLUIDAndAttributes;

typedef _SID_IDENTIFIER_AUTHORITY *PSIDIdentifierAuthority;

typedef _SID_IDENTIFIER_AUTHORITY TSIDIdentifierAuthority;

typedef _SID_AND_ATTRIBUTES *PSIDAndAttributes;

typedef _SID_AND_ATTRIBUTES TSIDAndAttributes;

typedef _ACL TACL;

typedef PACL *PPACL;

typedef _SECURITY_DESCRIPTOR *PSecurityDescriptor;

typedef _SECURITY_DESCRIPTOR TSecurityDescriptor;

typedef _OBJECT_TYPE_LIST *PObjectTypeList;

typedef _OBJECT_TYPE_LIST TObjectTypeList;

typedef _PRIVILEGE_SET *PPrivilegeSet;

typedef _PRIVILEGE_SET TPrivilegeSet;

typedef _TOKEN_USER *PTokenUser;

typedef _TOKEN_USER TTokenUser;

typedef _TOKEN_ELEVATION *PTokenElevation;

typedef _TOKEN_ELEVATION TTokenElevation;

typedef _TOKEN_PRIVILEGES *PTokenPrivileges;

typedef _TOKEN_PRIVILEGES TTokenPrivileges;

typedef _TOKEN_OWNER *PTokenOwner;

typedef _TOKEN_OWNER TTokenOwner;

typedef _TOKEN_PRIMARY_GROUP *PTokenPrimaryGroup;

typedef _TOKEN_PRIMARY_GROUP TTokenPrimaryGroup;

typedef _TOKEN_DEFAULT_DACL *PTokenDefaultDacl;

typedef _TOKEN_DEFAULT_DACL TTokenDefaultDacl;

typedef _TOKEN_SOURCE *PTokenSource;

typedef _TOKEN_SOURCE TTokenSource;

typedef _TOKEN_STATISTICS *PTokenStatistics;

typedef _TOKEN_STATISTICS TTokenStatistics;

typedef _TOKEN_GROUPS_AND_PRIVILEGES *PTokenGroupsAndPrivileges;

typedef _TOKEN_GROUPS_AND_PRIVILEGES TTokenGroupsAndPrivileges;

typedef _TOKEN_GROUPS *PTokenGroups;

typedef _TOKEN_GROUPS TTokenGroups;

typedef _TOKEN_AUDIT_POLICY *PTokenAuditPolicy;

typedef _TOKEN_AUDIT_POLICY TTokenAuditPolicy;

typedef _TOKEN_ORIGIN *PTokenOrigin;

typedef _TOKEN_ORIGIN TTokenOrigin;

typedef _TOKEN_LINKED_TOKEN *PTokenLinkedToken;

typedef _TOKEN_LINKED_TOKEN TTokenLinkedToken;

typedef _TOKEN_MANDATORY_POLICY *PTokenMandatoryPolicy;

typedef _TOKEN_MANDATORY_POLICY TTokenMandatoryPolicy;

typedef _TOKEN_ACCESS_INFORMATION *PTokenAccessInformation;

typedef _TOKEN_ACCESS_INFORMATION TTokenAccessInformation;

typedef _SECURITY_QUALITY_OF_SERVICE *PSecurityQualityOfService;

typedef _SECURITY_QUALITY_OF_SERVICE TSecurityQualityOfService;

typedef unsigned *PSECURITY_INFORMATION;

typedef int __stdcall (*TThreadStartRoutine)(void * lpThreadParameter);

typedef void __stdcall (*TWaitOrTimerCallback)(void * Context, bool Success);

typedef _IMAGE_DOS_HEADER *PImageDosHeader;

typedef _IMAGE_DOS_HEADER TImageDosHeader;

typedef _IMAGE_FILE_HEADER *PImageFileHeader;

typedef _IMAGE_FILE_HEADER TImageFileHeader;

typedef _IMAGE_EXPORT_DIRECTORY *PImageExportDirectory;

typedef _IMAGE_EXPORT_DIRECTORY TImageExportDirectory;

typedef _IMAGE_IMPORT_BY_NAME TImageImportByName;

typedef _IMAGE_IMPORT_BY_NAME *PImageImportByName;

typedef _IMAGE_THUNK_DATA64 TImageThunkData64;

typedef _IMAGE_THUNK_DATA64 *PImageThunkData64;

typedef _IMAGE_THUNK_DATA32 TImageThunkData32;

typedef _IMAGE_THUNK_DATA32 *PImageThunkData32;

typedef PIMAGE_TLS_CALLBACK TImageTLSCallback;

typedef _IMAGE_TLS_DIRECTORY64 TImageTLSDirectory64;

typedef _IMAGE_TLS_DIRECTORY64 *PImageTLSDirectory64;

typedef _IMAGE_TLS_DIRECTORY32 IMAGE_TLS_DIRECTORY32;

typedef _IMAGE_TLS_DIRECTORY32 TImageTLSDirectory32;

typedef _IMAGE_TLS_DIRECTORY32 *PIMAGE_TLS_DIRECTORY32;

typedef _IMAGE_TLS_DIRECTORY32 *PImageTLSDirectory32;

typedef _IMAGE_IMPORT_DESCRIPTOR TImageImportDescriptor;

typedef _IMAGE_IMPORT_DESCRIPTOR *PImageImportDescriptor;

typedef _IMAGE_BOUND_IMPORT_DESCRIPTOR TImageBoundImportDescriptor;

typedef _IMAGE_BOUND_IMPORT_DESCRIPTOR *PImageBoundImportDescriptor;

typedef _IMAGE_BOUND_FORWARDER_REF TImageBoundForwarderRef;

typedef _IMAGE_BOUND_FORWARDER_REF *PImageBoundForwarderRef;

typedef _IMAGE_DATA_DIRECTORY *PImageDataDirectory;

typedef _IMAGE_DATA_DIRECTORY TImageDataDirectory;

typedef _IMAGE_OPTIONAL_HEADER32 *PImageOptionalHeader32;

#pragma pack(push,4)
struct DECLSPEC_DRECORD _IMAGE_OPTIONAL_HEADER32
{
public:
	System::Word Magic;
	System::Byte MajorLinkerVersion;
	System::Byte MinorLinkerVersion;
	unsigned SizeOfCode;
	unsigned SizeOfInitializedData;
	unsigned SizeOfUninitializedData;
	unsigned AddressOfEntryPoint;
	unsigned BaseOfCode;
	unsigned BaseOfData;
	unsigned ImageBase;
	unsigned SectionAlignment;
	unsigned FileAlignment;
	System::Word MajorOperatingSystemVersion;
	System::Word MinorOperatingSystemVersion;
	System::Word MajorImageVersion;
	System::Word MinorImageVersion;
	System::Word MajorSubsystemVersion;
	System::Word MinorSubsystemVersion;
	unsigned Win32VersionValue;
	unsigned SizeOfImage;
	unsigned SizeOfHeaders;
	unsigned CheckSum;
	System::Word Subsystem;
	System::Word DllCharacteristics;
	unsigned SizeOfStackReserve;
	unsigned SizeOfStackCommit;
	unsigned SizeOfHeapReserve;
	unsigned SizeOfHeapCommit;
	unsigned LoaderFlags;
	unsigned NumberOfRvaAndSizes;
	System::StaticArray<_IMAGE_DATA_DIRECTORY, 16> DataDirectory;
};
#pragma pack(pop)


typedef _IMAGE_OPTIONAL_HEADER32 TImageOptionalHeader32;

typedef _IMAGE_ROM_OPTIONAL_HEADER *PImageRomOptionalHeader;

typedef _IMAGE_ROM_OPTIONAL_HEADER TImageRomOptionalHeader;

typedef _IMAGE_OPTIONAL_HEADER64 *PImageOptionalHeader64;

typedef _IMAGE_OPTIONAL_HEADER64 TImageOptionalHeader64;

typedef _IMAGE_NT_HEADERS64 *PImageNtHeaders64;

typedef _IMAGE_NT_HEADERS64 TImageNtHeaders64;

typedef _IMAGE_NT_HEADERS32 *PImageNtHeaders32;

#pragma pack(push,4)
struct DECLSPEC_DRECORD _IMAGE_NT_HEADERS32
{
public:
	unsigned Signature;
	_IMAGE_FILE_HEADER FileHeader;
	_IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};
#pragma pack(pop)


typedef _IMAGE_NT_HEADERS32 TImageNtHeaders32;

typedef _IMAGE_ROM_HEADERS *PImageRomHeaders;

typedef _IMAGE_ROM_HEADERS TImageRomHeaders;

#ifndef _WIN64
typedef _IMAGE_NT_HEADERS32 TImageNtHeaders;
#else /* _WIN64 */
typedef _IMAGE_NT_HEADERS64 TImageNtHeaders;
#endif /* _WIN64 */

#ifndef _WIN64
typedef PImageNtHeaders32 PImageNtHeaders;
#else /* _WIN64 */
typedef PImageNtHeaders64 PImageNtHeaders;
#endif /* _WIN64 */

#ifndef _WIN64
typedef _IMAGE_OPTIONAL_HEADER32 TImageOptionalHeader;
#else /* _WIN64 */
typedef _IMAGE_OPTIONAL_HEADER64 TImageOptionalHeader;
#endif /* _WIN64 */

#pragma pack(push,4)
struct DECLSPEC_DRECORD TISHMisc
{
	
public:
	union
	{
		struct 
		{
			unsigned VirtualSize;
		};
		struct 
		{
			unsigned PhysicalAddress;
		};
		
	};
};
#pragma pack(pop)


typedef _IMAGE_SECTION_HEADER *PImageSectionHeader;

typedef PImageSectionHeader *PPImageSectionHeader;

typedef _IMAGE_SECTION_HEADER TImageSectionHeader;

#ifndef _WIN64
typedef IMAGE_LOAD_CONFIG_DIRECTORY32 TImageLoadConfigDirectory;
#else /* _WIN64 */
typedef IMAGE_LOAD_CONFIG_DIRECTORY64 TImageLoadConfigDirectory;
#endif /* _WIN64 */

#ifndef _WIN64
typedef IMAGE_LOAD_CONFIG_DIRECTORY32 *PImageLoadConfigDirectory;
#else /* _WIN64 */
typedef IMAGE_LOAD_CONFIG_DIRECTORY64 *PImageLoadConfigDirectory;
#endif /* _WIN64 */

typedef IMAGE_RUNTIME_FUNCTION_ENTRY *PImageRuntimeFunctionEntry;

typedef IMAGE_RUNTIME_FUNCTION_ENTRY TImageRuntimeFunctionEntry;

typedef _IMAGE_DEBUG_DIRECTORY *PImageDebugDirectory;

typedef _IMAGE_DEBUG_DIRECTORY TImageDebugDirectory;

typedef _IMAGE_COFF_SYMBOLS_HEADER *PImageCOFFSymbolsHeader;

typedef _IMAGE_COFF_SYMBOLS_HEADER TImageCOFFSymbolsHeader;

typedef _FPO_DATA *PFpoData;

typedef _FPO_DATA TFpoData;

typedef _IMAGE_DEBUG_MISC *PImageDebugMisc;

typedef _IMAGE_DEBUG_MISC TImageDebugMisc;

typedef _IMAGE_FUNCTION_ENTRY *PImageFunctionEntry;

typedef _IMAGE_FUNCTION_ENTRY TImageFunctionEntry;

typedef _RTL_CRITICAL_SECTION *PRTLCriticalSection;

typedef _RTL_CRITICAL_SECTION_DEBUG *PRTLCriticalSectionDebug;

typedef _RTL_CRITICAL_SECTION_DEBUG TRTLCriticalSectionDebug;

typedef _RTL_CRITICAL_SECTION TRTLCriticalSection;

typedef _RTL_CONDITION_VARIABLE *PRTLConditionVariable;

typedef _RTL_CONDITION_VARIABLE TRTLConditionVariable;

typedef System::Word TAtom;

typedef void * TFarProc;

typedef void * PROC_22;

typedef NativeUInt HINST;

typedef NativeUInt *PHMODULE;

typedef unsigned TColorRef;

typedef _POINTL *PPointL;

typedef _POINTL TPointL;

typedef NativeUInt TKAffinity;

typedef _PROCESSOR_NUMBER TProcessorNumber;

typedef PPROCESSOR_NUMBER PProcessorNumber;

typedef _GROUP_AFFINITY TGroupAffinity;

typedef PGROUP_AFFINITY PGroupAffinity;

typedef _LOGICAL_PROCESSOR_RELATIONSHIP TLogicalProcessorRelationship;

typedef _PROCESSOR_CACHE_TYPE TProcessorCacheType;

typedef _CACHE_DESCRIPTOR TCacheDescriptor;

typedef PCACHE_DESCRIPTOR PCacheDescriptor;

typedef _SYSTEM_LOGICAL_PROCESSOR_INFORMATION TSystemLogicalProcessorInformation;

typedef PSYSTEM_LOGICAL_PROCESSOR_INFORMATION PSystemLogicalProcessorInformation;

typedef _PROCESSOR_RELATIONSHIP TProcessorRelationship;

typedef PPROCESSOR_RELATIONSHIP PProcessorRelationship;

typedef _NUMA_NODE_RELATIONSHIP TNumaNodeRelationship;

typedef PNUMA_NODE_RELATIONSHIP PNumaNodeRelationship;

typedef _CACHE_RELATIONSHIP TCacheRelationship;

typedef PCACHE_RELATIONSHIP PCacheRelationship;

typedef _PROCESSOR_GROUP_INFO TProcessorGroupInfo;

typedef PPROCESSOR_GROUP_INFO PProcessorGroupInfo;

typedef _GROUP_RELATIONSHIP TGroupRelationship;

typedef PGROUP_RELATIONSHIP PGroupRelationship;

typedef _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX TSystemLogicalProcessorInformationEx;

typedef PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX PSystemLogicalProcessorInformationEx;

typedef _OVERLAPPED *POverlapped;

typedef _OVERLAPPED TOverlapped;

typedef _OVERLAPPED_ENTRY TOverlappedEntry;

typedef _OVERLAPPED_ENTRY *POverlappedEntry;

typedef _SECURITY_ATTRIBUTES *PSecurityAttributes;

typedef _SECURITY_ATTRIBUTES TSecurityAttributes;

typedef _PROCESS_INFORMATION *PProcessInformation;

typedef _PROCESS_INFORMATION TProcessInformation;

typedef _FILETIME *PFileTime;

typedef _FILETIME TFileTime;

typedef _SYSTEMTIME *PSystemTime;

typedef _SYSTEMTIME TSystemTime;

typedef void * TFNThreadStartRoutine;

typedef void * TFNFiberStartRoutine;

typedef void * TFNFLSCallBackFunction;

typedef void * TFNLPOverlappedCompletionRoutine;

typedef _COMMPROP *PCommProp;

typedef _COMMPROP TCommProp;

enum DECLSPEC_DENUM TComStateFlag : unsigned int { fCtlHold, fDsrHold, fRlsHold, fXoffHold, fXOffSent, fEof, fTxim };

typedef System::Set<TComStateFlag, TComStateFlag::fCtlHold, TComStateFlag::fTxim> TComStateFlags;

typedef _COMSTAT TComStat;

typedef _COMSTAT *PComStat;

typedef _DCB TDCB;

typedef _DCB *PDCB;

typedef _COMMTIMEOUTS *PCommTimeouts;

typedef _COMMTIMEOUTS TCommTimeouts;

typedef _COMMCONFIG *PCommConfig;

typedef _COMMCONFIG TCommConfig;

typedef _SYSTEM_INFO *PSystemInfo;

typedef _SYSTEM_INFO TSystemInfo;

typedef _MEMORYSTATUS *PMemoryStatus;

typedef _MEMORYSTATUS TMemoryStatus;

typedef _MEMORYSTATUSEX *PMemoryStatusEx;

typedef _MEMORYSTATUSEX TMemoryStatusEx;

typedef _EXCEPTION_DEBUG_INFO *PExceptionDebugInfo;

typedef _EXCEPTION_DEBUG_INFO TExceptionDebugInfo;

typedef _CREATE_THREAD_DEBUG_INFO *PCreateThreadDebugInfo;

typedef _CREATE_THREAD_DEBUG_INFO TCreateThreadDebugInfo;

typedef _CREATE_PROCESS_DEBUG_INFO *PCreateProcessDebugInfo;

typedef _CREATE_PROCESS_DEBUG_INFO TCreateProcessDebugInfo;

typedef _EXIT_THREAD_DEBUG_INFO *PExitThreadDebugInfo;

typedef _EXIT_THREAD_DEBUG_INFO TExitThreadDebugInfo;

typedef _EXIT_PROCESS_DEBUG_INFO *PExitProcessDebugInfo;

typedef _EXIT_PROCESS_DEBUG_INFO TExitProcessDebugInfo;

typedef _LOAD_DLL_DEBUG_INFO *PLoadDLLDebugInfo;

typedef _LOAD_DLL_DEBUG_INFO TLoadDLLDebugInfo;

typedef _UNLOAD_DLL_DEBUG_INFO *PUnloadDLLDebugInfo;

typedef _UNLOAD_DLL_DEBUG_INFO TUnloadDLLDebugInfo;

typedef _OUTPUT_DEBUG_STRING_INFO *POutputDebugStringInfo;

typedef _OUTPUT_DEBUG_STRING_INFO TOutputDebugStringInfo;

typedef _RIP_INFO *PRIPInfo;

typedef _RIP_INFO TRIPInfo;

typedef _DEBUG_EVENT *PDebugEvent;

typedef _DEBUG_EVENT TDebugEvent;

typedef _OFSTRUCT *POFStruct;

typedef _OFSTRUCT TOFStruct;

typedef char * MakeIntAtomA;

typedef System::WideChar * MakeIntAtomW;

typedef System::WideChar * MakeIntAtom;

typedef OFFER_PRIORITY TOfferPriority;

typedef _WIN32_MEMORY_RANGE_ENTRY TWin32MemoryRangeEntry;

typedef _WIN32_MEMORY_RANGE_ENTRY *PWin32MemoryRangeEntry;

typedef _PROCESS_HEAP_ENTRY *PProcessHeapEntry;

typedef _PROCESS_HEAP_ENTRY TProcessHeapEntry;

typedef _IO_COUNTERS *PIOCounters;

typedef _IO_COUNTERS TIOCounters;

typedef _JOBOBJECTINFOCLASS TJobObjectInfoClass;

typedef _JOBOBJECT_RATE_CONTROL_TOLERANCE TJobObjectRateControlTolerance;

typedef _JOBOBJECT_RATE_CONTROL_TOLERANCE *PJobObjectRateControlTolerance;

typedef _JOBOBJECT_RATE_CONTROL_TOLERANCE_INTERVAL TJobObjectRateControlToleranceInterval;

typedef _JOBOBJECT_RATE_CONTROL_TOLERANCE_INTERVAL *PJobObjectRateControlToleranceInterval;

typedef _JOBOBJECT_ASSOCIATE_COMPLETION_PORT TJobObjectAssociateCompletionPort;

typedef _JOBOBJECT_ASSOCIATE_COMPLETION_PORT *PJobObjectAssociateCompletionPort;

typedef _JOBOBJECT_BASIC_LIMIT_INFORMATION TJobObjectBasicLimitInformation;

typedef _JOBOBJECT_BASIC_LIMIT_INFORMATION *PJobObjectBasicLimitInformation;

typedef _JOBOBJECT_BASIC_UI_RESTRICTIONS TJobObjectBasicUIRestrictions;

typedef _JOBOBJECT_BASIC_UI_RESTRICTIONS *PJobObjectBasicUIRestrictions;

struct DECLSPEC_DRECORD TJobObjectCPURate
{
public:
	System::Word MinRate;
	System::Word MaxRate;
};


typedef _JOBOBJECT_CPU_RATE_CONTROL_INFORMATION TJobObjectCPURateControlInformation;

typedef _JOBOBJECT_CPU_RATE_CONTROL_INFORMATION *PJobObjectCPURateControlInformation;

typedef _JOBOBJECT_END_OF_JOB_TIME_INFORMATION TJobObjectEndOfJobTimeInformation;

typedef _JOBOBJECT_END_OF_JOB_TIME_INFORMATION *PJobObjectEndOfJobTimeInformation;

typedef _JOBOBJECT_EXTENDED_LIMIT_INFORMATION TJobObjectExtendedLimitInformation;

typedef _JOBOBJECT_EXTENDED_LIMIT_INFORMATION *PJobObjectExtendedLimitInformation;

typedef JOBOBJECT_NET_RATE_CONTROL_INFORMATION TJobObjectNetRateControlInformation;

typedef _JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION TJobObjectNotificationLimitInformation;

typedef _JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION *PJobObjectNotificationLimitInformation;

typedef _JOBOBJECT_SECURITY_LIMIT_INFORMATION TJobObjectSecurityLimitInformation;

typedef _JOBOBJECT_SECURITY_LIMIT_INFORMATION *PJobObjectSecurityLimitInformation;

typedef _PROCESS_INFORMATION_CLASS TProcessInformationClass;

typedef _MEMORY_PRIORITY_INFORMATION *PMemoryPriorityInformation;

typedef _MEMORY_PRIORITY_INFORMATION TMemoryPriorityInformation;

typedef _PROCESS_MITIGATION_DEP_POLICY *PProcessMitigationDEPPolicy;

typedef _PROCESS_MITIGATION_DEP_POLICY TProcessMitigationDEPPolicy;

typedef _PROCESS_MITIGATION_ASLR_POLICY *PProcessMitigationASLRPolicy;

typedef _PROCESS_MITIGATION_ASLR_POLICY TProcessMitigationASLRPolicy;

typedef _PROCESS_MITIGATION_DYNAMIC_CODE_POLICY *PProcessMitigationDynamicCodePolicy;

typedef _PROCESS_MITIGATION_DYNAMIC_CODE_POLICY TProcessMitigationDynamicCodePolicy;

typedef _PROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY *PProcessMitigationStrictHandleCheckPolicy;

typedef _PROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY TProcessMitigationStrictHandleCheckPolicy;

typedef _PROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY *PProcessMitigationSystemCallDisablePolicy;

typedef _PROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY TProcessMitigationSystemCallDisablePolicy;

typedef _PROCESS_MITIGATION_EXTENSION_POINT_DISABLE_POLICY *PProcessMitigationExtensionPointDisablePolicy;

typedef _PROCESS_MITIGATION_EXTENSION_POINT_DISABLE_POLICY TProcessMitigationExtensionPointDisablePolicy;

typedef _PROCESS_MITIGATION_CONTROL_FLOW_GUARD_POLICY TProcessMitigationControlFlowGuardPolicy;

typedef _PROCESS_MITIGATION_BINARY_SIGNATURE_POLICY *PProcessMitigationBinarySignaturePolicy;

typedef _PROCESS_MITIGATION_BINARY_SIGNATURE_POLICY TProcessMitigationBinarySignaturePolicy;

typedef _PROCESS_MITIGATION_FONT_DISABLE_POLICY *PProcessMitigationFontDisablePolicy;

typedef _PROCESS_MITIGATION_FONT_DISABLE_POLICY TProcessMitigationFontDisablePolicy;

typedef _PROCESS_MITIGATION_IMAGE_LOAD_POLICY TProcessMitigationImageLoadPolicy;

typedef _PROCESS_MITIGATION_POLICY TProcessMitigationPolicy;

typedef _PROCESS_MITIGATION_POLICY *PProcessMitigationPolicy;

typedef void * TFNTopLevelExceptionFilter;

typedef _PROC_THREAD_ATTRIBUTE_LIST TProcThreadAttributeList;

typedef _PROC_THREAD_ATTRIBUTE_LIST *PProcThreadAttributeList;

typedef _THREAD_INFORMATION_CLASS TThreadInformationClass;

typedef _RTL_UMS_SCHEDULER_REASON TRTLUMSSchedulerReason;

typedef _RTL_UMS_SCHEDULER_REASON *PRTLUMSSchedulerReason;

typedef void * TFNRTLUMSSchedulerEntryPoint;

typedef _RTL_UMS_THREAD_INFO_CLASS TRTLUMSThreadInfoClass;

typedef _UMS_SYSTEM_THREAD_INFORMATION TUMSSystemThreadInformation;

typedef _UMS_SYSTEM_THREAD_INFORMATION *PUMSSystemThreadInformation;

typedef _UMS_SCHEDULER_STARTUP_INFO TUMSSchedulerStartupInfo;

typedef _UMS_SCHEDULER_STARTUP_INFO *PUMSSchedulerStartupInfo;

typedef _TP_CALLBACK_PRIORITY TTPCallbackPriority;

typedef _TP_WAIT TTPWait;

typedef PTP_WAIT PTPWait;

typedef _TP_CALLBACK_INSTANCE TTPCallbackInstance;

typedef _TP_CALLBACK_INSTANCE *PTPCallbackInstance;

typedef _TP_POOL TTPPool;

typedef PTP_POOL PTPPool;

typedef _TP_WORK TTPWork;

typedef PTP_WORK PTPWork;

typedef _TP_TIMER TTPTimer;

typedef PTP_TIMER PTPTimer;

typedef _TP_IO TTPIO;

typedef PTP_IO PTPIO;

typedef _TP_CLEANUP_GROUP TTPCleanupGroup;

typedef PTP_CLEANUP_GROUP PTPCleanupGroup;

typedef _TP_POOL_STACK_INFORMATION TTPPoolStackInformation;

typedef _TP_POOL_STACK_INFORMATION *PTPPoolStackInformation;

typedef void * TFNTPCleanupGroupCancelCallback;

typedef void * TFNPTPSimpleCallback;

typedef void * TFNTPWaitCallback;

typedef void * TFNTPWorkCallback;

typedef void * TFNTPTimerCallback;

typedef void * TFNTPWin32IOCallback;

typedef _TP_CALLBACK_ENVIRON_V3 TTPCallbackEnviron;

typedef _TP_CALLBACK_ENVIRON_V3 *PTPCallbackEnviron;

typedef _HARDWARE_COUNTER_TYPE THardwareCounterType;

typedef _HARDWARE_COUNTER_TYPE *PHardwareCounterType;

typedef _HARDWARE_COUNTER_DATA THardwareCounterData;

typedef _HARDWARE_COUNTER_DATA *PHardwareCounterData;

typedef _PERFORMANCE_DATA TPerformanceData;

typedef _PERFORMANCE_DATA *PPerformanceData;

typedef void * TFNAPCProc;

typedef _WOW64_FLOATING_SAVE_AREA TWow64FloatingSaveArea;

typedef _WOW64_FLOATING_SAVE_AREA *PWow64FloatingSaveArea;

typedef _WOW64_CONTEXT TWow64Context;

typedef _WOW64_CONTEXT *PWow64Context;

typedef _LDT_ENTRY TWow64LDTEntry;

typedef PWOW64_LDT_ENTRY PWow64LDTEntry;

typedef _RTL_SRWLOCK TRTLSRWLock;

typedef _RTL_SRWLOCK *PRTLSRWLock;

typedef System::StaticArray<NativeUInt, 64> TWOHandleArray;

typedef TWOHandleArray *PWOHandleArray;

typedef _BY_HANDLE_FILE_INFORMATION *PByHandleFileInformation;

typedef _BY_HANDLE_FILE_INFORMATION TByHandleFileInformation;

typedef _SYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION TSystemProcessorCycleTimeInformation;

typedef _SYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION *PSystemProcessorCycleTimeInformation;

typedef _TIME_ZONE_INFORMATION *PTimeZoneInformation;

typedef _TIME_ZONE_INFORMATION TTimeZoneInformation;

typedef _TIME_DYNAMIC_ZONE_INFORMATION *PDynamicTimeZoneInformation;

typedef _TIME_DYNAMIC_ZONE_INFORMATION TDynamicTimeZoneInformation;

typedef _TIME_DYNAMIC_ZONE_INFORMATION TIME_DYNAMIC_ZONE_INFORMATION;

typedef unsigned __stdcall (*TFNExportFunc)(void * pbData, void * pvCallbackContext, unsigned ulLength);

typedef unsigned __stdcall (*TFNImportFunc)(void * pbData, void * pvCallbackContext, unsigned ulLength);

typedef _RECOVERY_AGENT_INFORMATIONA *PRecoveryAgentInformationA;

typedef _RECOVERY_AGENT_INFORMATIONW *PRecoveryAgentInformationW;

typedef PRecoveryAgentInformationW PRecoveryAgentInformation;

struct DECLSPEC_DRECORD _RECOVERY_AGENT_INFORMATIONA
{
public:
	unsigned NextEntryOffset;
	unsigned AgentNameLength;
	System::StaticArray<char, 1> AgentInformation;
};


struct DECLSPEC_DRECORD _RECOVERY_AGENT_INFORMATIONW
{
public:
	unsigned NextEntryOffset;
	unsigned AgentNameLength;
	System::StaticArray<System::WideChar, 1> AgentInformation;
};


typedef _RECOVERY_AGENT_INFORMATIONA TRecoveryAgentInformationA;

typedef _RECOVERY_AGENT_INFORMATIONW TRecoveryAgentInformationW;

typedef _RECOVERY_AGENT_INFORMATIONW TRecoveryAgentInformation;

typedef _RECOVERY_AGENT_INFORMATIONA RECOVERY_AGENT_INFORMATIONA;

typedef _RECOVERY_AGENT_INFORMATIONW RECOVERY_AGENT_INFORMATIONW;

typedef _RECOVERY_AGENT_INFORMATIONW RECOVERY_AGENT_INFORMATION;

typedef void * TPROverlappedCompletionRoutine;

typedef _WIN32_STREAM_ID *PWIN32StreamID;

typedef _WIN32_STREAM_ID TWIN32StreamID;

typedef _STARTUPINFOA *PStartupInfoA;

typedef _STARTUPINFOW *PStartupInfoW;

typedef PStartupInfoW PStartupInfo;

typedef _STARTUPINFOA TStartupInfoA;

typedef _STARTUPINFOW TStartupInfoW;

typedef _STARTUPINFOW TStartupInfo;

typedef _WIN32_FIND_DATAA *PWin32FindDataA;

typedef _WIN32_FIND_DATAW *PWin32FindDataW;

typedef PWin32FindDataW PWin32FindData;

typedef _WIN32_FIND_DATAA TWin32FindDataA;

typedef _WIN32_FIND_DATAW TWin32FindDataW;

typedef _WIN32_FIND_DATAW TWin32FindData;

typedef _WIN32_FILE_ATTRIBUTE_DATA *PWin32FileAttributeData;

typedef _WIN32_FILE_ATTRIBUTE_DATA TWin32FileAttributeData;

typedef _SLIST_HEADER TSListHeader;

typedef PSLIST_HEADER PSListHeader;

typedef _RTL_RUN_ONCE TRTLRunOnce;

typedef _RTL_RUN_ONCE *PRTLRunOnce;

typedef void * TFNInitOnce;

typedef _RTL_BARRIER TRTLBarrier;

typedef _RTL_BARRIER *PRTLBarrier;

typedef void * TFNTimerAPCRoutine;

typedef _REASON_CONTEXT TReasonContext;

typedef _REASON_CONTEXT *PReasonContext;

typedef _GET_FILEEX_INFO_LEVELS TGetFileExInfoLevels;

typedef _FINDEX_INFO_LEVELS TFindexInfoLevels;

typedef _FINDEX_SEARCH_OPS TFindexSearchOps;

typedef void * TFNProgressRoutine;

typedef _COMPUTER_NAME_FORMAT TComputerNameFormat;

typedef tagHW_PROFILE_INFOA *PHWProfileInfoA;

typedef tagHW_PROFILE_INFOW *PHWProfileInfoW;

typedef PHWProfileInfoW PHWProfileInfo;

typedef tagHW_PROFILE_INFOA THWProfileInfoA;

typedef tagHW_PROFILE_INFOW THWProfileInfoW;

typedef tagHW_PROFILE_INFOW THWProfileInfo;

typedef _OSVERSIONINFOA *POSVersionInfoA;

typedef _OSVERSIONINFOW *POSVersionInfoW;

typedef POSVersionInfoW POSVersionInfo;

typedef _OSVERSIONINFOA TOSVersionInfoA;

typedef _OSVERSIONINFOW TOSVersionInfoW;

typedef _OSVERSIONINFOW TOSVersionInfo;

typedef _OSVERSIONINFOEXA *POSVersionInfoExA;

typedef _OSVERSIONINFOEXW *POSVersionInfoExW;

typedef POSVersionInfoExW POSVersionInfoEx;

typedef _OSVERSIONINFOEXA TOSVersionInfoExA;

typedef _OSVERSIONINFOEXW TOSVersionInfoExW;

typedef _OSVERSIONINFOEXW TOSVersionInfoEx;

typedef _SYSTEM_POWER_STATUS *PSystemPowerStatus;

typedef _SYSTEM_POWER_STATUS TSystemPowerStatus;

typedef _WIN_CERTIFICATE *PWinCertificate;

typedef _WIN_CERTIFICATE TWinCertificate;

typedef _CRYPTOAPI_BLOB CERT_RDN_VALUE_BLOB;

typedef _CRYPTOAPI_BLOB *PCERT_BLOB;

typedef _CRYPTOAPI_BLOB DATA_BLOB;

typedef void * *PHCERTSTORE;

typedef WINTRUST_FILE_INFO_ TWinTrustFileInfp;

typedef PWINTRUST_FILE_INFO PWinTrustFileInfp;

typedef _WINTRUST_DATA TWinTrustData;

typedef PWINTRUST_DATA PWinTrustData;

typedef void * TWinTrustSubject;

typedef _WIN_TRUST_ACTDATA_CONTEXT_WITH_SUBJECT *PWinTrustActdataContextWithSubject;

typedef _WIN_TRUST_ACTDATA_CONTEXT_WITH_SUBJECT TWinTrustActdataContextWithSubject;

typedef _WIN_TRUST_ACTDATA_SUBJECT_ONLY *PWinTrustActdataSubjectOnly;

typedef _WIN_TRUST_ACTDATA_SUBJECT_ONLY TWinTrustActdataSubjectOnly;

typedef _WIN_TRUST_SUBJECT_FILE *PWinTrustSubjectFile;

typedef _WIN_TRUST_SUBJECT_FILE TWinTrustSubjectFile;

typedef _WIN_TRUST_SUBJECT_FILE_AND_DISPLAY *PWinTrustSubjectFileAndDisplay;

typedef _WIN_TRUST_SUBJECT_FILE_AND_DISPLAY TWinTrustSubjectFileAndDisplay;

typedef _WIN_SPUB_TRUSTED_PUBLISHER_DATA *PWinSpubTrustedPublisherData;

typedef _WIN_SPUB_TRUSTED_PUBLISHER_DATA TWinSpubTrustedPublisherData;

typedef tagXFORM *PXForm;

typedef tagXFORM TXForm;

typedef tagBITMAP *PBitmap;

typedef tagRGBTRIPLE *PRGBTriple;

typedef tagRGBTRIPLE TRGBTriple;

typedef tagRGBQUAD *PRGBQuad;

typedef tagRGBQUAD TRGBQuad;

typedef tagCIEXYZ *PCIEXYZ;

typedef tagCIEXYZ TCIEXYZ;

typedef tagICEXYZTRIPLE *PCIEXYZTriple;

typedef tagICEXYZTRIPLE TCIEXYZTriple;

typedef tagLOGCOLORSPACEA *PLogColorSpaceA;

typedef tagLOGCOLORSPACEW *PLogColorSpaceW;

typedef PLogColorSpaceW PLogColorSpace;

typedef tagLOGCOLORSPACEA TLogColorSpaceA;

typedef tagLOGCOLORSPACEW TLogColorSpaceW;

typedef tagLOGCOLORSPACEW TLogColorSpace;

typedef tagBITMAPCOREHEADER *PBitmapCoreHeader;

typedef tagBITMAPCOREHEADER TBitmapCoreHeader;

typedef tagBITMAPINFOHEADER *PBitmapInfoHeader;

typedef tagBITMAPINFOHEADER TBitmapInfoHeader;

typedef BITMAPV4HEADER *PBitmapV4Header;

typedef BITMAPV4HEADER TBitmapV4Header;

typedef BITMAPV5HEADER *PBitmapV5Header;

typedef BITMAPV5HEADER TBitmapV5Header;

typedef tagBITMAPINFO *PBitmapInfo;

typedef tagBITMAPINFO TBitmapInfo;

typedef tagBITMAPCOREINFO *PBitmapCoreInfo;

typedef tagBITMAPCOREINFO TBitmapCoreInfo;

typedef tagBITMAPFILEHEADER *PBitmapFileHeader;

typedef tagBITMAPFILEHEADER TBitmapFileHeader;

typedef tagFONTSIGNATURE *PFontSignature;

typedef tagFONTSIGNATURE TFontSignature;

typedef tagCHARSETINFO *PCharsetInfo;

typedef tagCHARSETINFO TCharsetInfo;

typedef tagLOCALESIGNATURE *PLocaleSignature;

typedef tagLOCALESIGNATURE TLocaleSignature;

typedef tagHANDLETABLE *PHandleTable;

typedef tagHANDLETABLE THandleTable;

typedef tagMETARECORD *PMetaRecord;

typedef tagMETARECORD TMetaRecord;

typedef tagMETAFILEPICT *PMetafilePict;

typedef tagMETAFILEPICT TMetafilePict;

typedef tagMETAHEADER *PMetaHeader;

typedef tagMETAHEADER TMetaHeader;

typedef tagENHMETARECORD *PEnhMetaRecord;

typedef tagENHMETARECORD TEnhMetaRecord;

typedef tagENHMETAHEADER *PEnhMetaHeader;

typedef tagENHMETAHEADER TEnhMetaHeader;

typedef tagTEXTMETRICA *PTextMetricA;

typedef tagTEXTMETRICW *PTextMetricW;

typedef PTextMetricW PTextMetric;

typedef tagTEXTMETRICA TTextMetricA;

typedef tagTEXTMETRICW TTextMetricW;

typedef tagTEXTMETRICW TTextMetric;

typedef tagNEWTEXTMETRICA *PNewTextMetricA;

typedef tagNEWTEXTMETRICW *PNewTextMetricW;

typedef PNewTextMetricW PNewTextMetric;

typedef tagNEWTEXTMETRICA TNewTextMetricA;

typedef tagNEWTEXTMETRICW TNewTextMetricW;

typedef tagNEWTEXTMETRICW TNewTextMetric;

typedef tagNEWTEXTMETRICEXA *PNewTextMetricExA;

typedef tagNEWTEXTMETRICEXW *PNewTextMetricExW;

typedef PNewTextMetricExW PNewTextMetricEx;

typedef tagNEWTEXTMETRICEXA TNewTextMetricExA;

typedef tagNEWTEXTMETRICEXW TNewTextMetricExW;

typedef tagNEWTEXTMETRICEXW TNewTextMetricEx;

typedef tagPELARRAY *PPelArray;

typedef tagPELARRAY TPelArray;

typedef tagLOGBRUSH *PLogBrush;

typedef tagLOGBRUSH TLogBrush;

typedef tagLOGBRUSH32 *PLogBrush32;

typedef tagLOGBRUSH32 TLogBrush32;

typedef tagLOGBRUSH *PPattern;

typedef tagLOGBRUSH TPattern;

typedef tagLOGPEN *PLogPen;

typedef tagLOGPEN TLogPen;

typedef tagLOGPEN *PExtLogPen;

typedef tagEXTLOGPEN TExtLogPen;

typedef tagEXTLOGPEN32 *PExtLogPen32;

typedef tagEXTLOGPEN32 TExtLogPen32;

typedef tagPALETTEENTRY *PPaletteEntry;

typedef tagPALETTEENTRY TPaletteEntry;

typedef tagLOGPALETTE *PLogPalette;

typedef tagLOGPALETTE TLogPalette;

typedef TMaxLogPalette *PMaxLogPalette;

struct DECLSPEC_DRECORD TMaxLogPalette
{
public:
	System::Word palVersion;
	System::Word palNumEntries;
	System::StaticArray<tagPALETTEENTRY, 256> palPalEntry;
};


typedef tagLOGFONTA *PLogFontA;

typedef tagLOGFONTW *PLogFontW;

typedef PLogFontW PLogFont;

typedef tagLOGFONTA TLogFontA;

typedef tagLOGFONTW TLogFontW;

typedef tagLOGFONTW TLogFont;

typedef tagENUMLOGFONTA *PEnumLogFontA;

typedef tagENUMLOGFONTW *PEnumLogFontW;

typedef PEnumLogFontW PEnumLogFont;

typedef tagENUMLOGFONTA TEnumLogFontA;

typedef tagENUMLOGFONTW TEnumLogFontW;

typedef tagENUMLOGFONTW TEnumLogFont;

typedef tagENUMLOGFONTEXA *PEnumLogFontExA;

typedef tagENUMLOGFONTEXW *PEnumLogFontExW;

typedef PEnumLogFontExW PEnumLogFontEx;

typedef tagENUMLOGFONTEXA TEnumLogFontExA;

typedef tagENUMLOGFONTEXW TEnumLogFontExW;

typedef tagENUMLOGFONTEXW TEnumLogFontEx;

typedef tagPANOSE *PPanose;

typedef tagPANOSE TPanose;

typedef tagEXTLOGFONTA *PExtLogFontA;

typedef tagEXTLOGFONTW *PExtLogFontW;

typedef PExtLogFontW PExtLogFont;

typedef tagEXTLOGFONTA TExtLogFontA;

typedef tagEXTLOGFONTW TExtLogFontW;

typedef tagEXTLOGFONTW TExtLogFont;

typedef _devicemodeA *PDeviceModeA;

typedef _devicemodeW *PDeviceModeW;

typedef PDeviceModeW PDeviceMode;

typedef _devicemodeA TDeviceModeA;

typedef _devicemodeW TDeviceModeW;

typedef _devicemodeW TDeviceMode;

typedef PDeviceModeW PDevMode;

typedef _devicemodeW TDevMode;

typedef _DISPLAY_DEVICEA *PDisplayDeviceA;

typedef _DISPLAY_DEVICEW *PDisplayDeviceW;

typedef PDisplayDeviceW PDisplayDevice;

typedef _DISPLAY_DEVICEA TDisplayDeviceA;

typedef _DISPLAY_DEVICEW TDisplayDeviceW;

typedef _DISPLAY_DEVICEW TDisplayDevice;

typedef _RGNDATAHEADER *PRgnDataHeader;

typedef _RGNDATAHEADER TRgnDataHeader;

typedef _RGNDATA *PRgnData;

typedef _RGNDATA TRgnData;

typedef _ABC TABC;

typedef _ABCFLOAT *PABCFloat;

typedef _ABCFLOAT TABCFloat;

typedef _OUTLINETEXTMETRICA *POutlineTextmetricA;

typedef _OUTLINETEXTMETRICW *POutlineTextmetricW;

typedef POutlineTextmetricW POutlineTextmetric;

typedef _OUTLINETEXTMETRICA TOutlineTextmetricA;

typedef _OUTLINETEXTMETRICW TOutlineTextmetricW;

typedef _OUTLINETEXTMETRICW TOutlineTextmetric;

typedef tagPOLYTEXTA *PPolyTextA;

typedef tagPOLYTEXTW *PPolyTextW;

typedef PPolyTextW PPolyText;

typedef tagPOLYTEXTA TPolyTextA;

typedef tagPOLYTEXTW TPolyTextW;

typedef tagPOLYTEXTW TPolyText;

typedef _FIXED TFixed;

typedef _MAT2 *PMat2;

typedef _MAT2 TMat2;

typedef _GLYPHMETRICS *PGlyphMetrics;

typedef _GLYPHMETRICS TGlyphMetrics;

typedef tagPOINTFX *PPointfx;

typedef tagPOINTFX TPointfx;

typedef tagTTPOLYCURVE *PTTPolyCurve;

typedef tagTTPOLYCURVE TTTPolyCurve;

typedef tagTTPOLYGONHEADER *PTTPolygonHeader;

typedef tagTTPOLYGONHEADER TTTPolygonHeader;

typedef tagGCP_RESULTSA *PGCPResultsA;

typedef tagGCP_RESULTSW *PGCPResultsW;

typedef PGCPResultsW PGCPResults;

typedef tagGCP_RESULTSA TGCPResultsA;

typedef tagGCP_RESULTSW TGCPResultsW;

typedef tagGCP_RESULTSW TGCPResults;

typedef _RASTERIZER_STATUS *PRasterizerStatus;

typedef _RASTERIZER_STATUS TRasterizerStatus;

typedef tagPIXELFORMATDESCRIPTOR *PPixelFormatDescriptor;

typedef tagPIXELFORMATDESCRIPTOR TPixelFormatDescriptor;

typedef void * TFNOldFontEnumProcA;

typedef void * TFNOldFontEnumProcW;

typedef void * TFNOldFontEnumProc;

typedef void * TFNGObjEnumProc;

typedef void * TFNLineDDAProc;

typedef void * TFNFontEnumProcA;

typedef void * TFNFontEnumProcW;

typedef void * TFNFontEnumProc;

typedef void * TFNDevMode;

typedef void * TFNDevCaps;

typedef tagWCRANGE *PWCRange;

typedef tagWCRANGE TWCRange;

typedef tagGLYPHSET *PGlyphSet;

typedef tagGLYPHSET TGlyphSet;

typedef tagDESIGNVECTOR *PDesignVector;

typedef tagDESIGNVECTOR TDesignVector;

typedef tagAXISINFOA *PAxisInfoA;

typedef tagAXISINFOA TAxisInfoA;

typedef tagAXISINFOW *PAxisInfoW;

typedef tagAXISINFOW TAxisInfoW;

typedef PAxisInfoW PAxisInfo;

typedef tagAXESLISTA *PAxesListA;

typedef tagAXESLISTA TAxesListA;

typedef tagAXESLISTW *PAxesListW;

typedef tagAXESLISTW TAxesListW;

typedef PAxesListW PAxesList;

typedef tagENUMLOGFONTEXDVA *PEnumLogFontExDVA;

typedef tagENUMLOGFONTEXDVW *PEnumLogFontExDVW;

typedef PEnumLogFontExDVW PEnumLogFontExDV;

typedef tagENUMLOGFONTEXDVA TEnumLogFontExDVA;

typedef tagENUMLOGFONTEXDVW TEnumLogFontExDVW;

typedef tagENUMLOGFONTEXDVW TEnumLogFontExDV;

typedef tagENUMTEXTMETRICA *PEnumTextMetricA;

typedef tagENUMTEXTMETRICW *PEnumTextMetricW;

typedef PEnumTextMetricW PEnumTextMetric;

typedef tagENUMTEXTMETRICA TEnumTextMetricA;

typedef tagENUMTEXTMETRICW TEnumTextMetricW;

typedef tagENUMTEXTMETRICW TEnumTextMetric;

typedef _TRIVERTEX *PTriVertex;

typedef _TRIVERTEX TTriVertex;

typedef _GRADIENT_TRIANGLE *PGradientTriangle;

typedef _GRADIENT_TRIANGLE TGradientTriangle;

typedef _GRADIENT_RECT *PGradientRect;

typedef _GRADIENT_RECT TGradientRect;

typedef _BLENDFUNCTION *PBlendFunction;

typedef _BLENDFUNCTION TBlendFunction;

typedef void * TFNMFEnumProc;

typedef void * TFNEnhMFEnumProc;

typedef tagDIBSECTION *PDIBSection;

typedef tagDIBSECTION TDIBSection;

typedef tagCOLORADJUSTMENT *PColorAdjustment;

typedef tagCOLORADJUSTMENT TColorAdjustment;

typedef System::LongBool __stdcall (*TFNAbortProc)(HDC DC, int p2);

typedef _DOCINFOA *PDocInfoA;

typedef _DOCINFOW *PDocInfoW;

typedef PDocInfoW PDocInfo;

typedef _DOCINFOA TDocInfoA;

typedef _DOCINFOW TDocInfoW;

typedef _DOCINFOW TDocInfo;

typedef tagKERNINGPAIR *PKerningPair;

typedef tagKERNINGPAIR TKerningPair;

typedef void * TFNICMEnumProc;

typedef tagEMR TEMR;

typedef tagEMRTEXT *PEMRText;

typedef tagEMRTEXT TEMRText;

typedef tagABORTPATH *PAbortPath;

typedef tagABORTPATH TAbortPath;

typedef tagABORTPATH TEMRAbortPath;

typedef PAbortPath PEMRAbortPath;

typedef tagABORTPATH TEMRBeginPath;

typedef PAbortPath PEMRBeginPath;

typedef tagABORTPATH TEMREndPath;

typedef PAbortPath PEMREndPath;

typedef tagABORTPATH TEMRCloseFigure;

typedef PAbortPath PEMRCloseFigure;

typedef tagABORTPATH TEMRFlattenPath;

typedef PAbortPath PEMRFlattenPath;

typedef tagABORTPATH TEMRWidenPath;

typedef PAbortPath PEMRWidenPath;

typedef tagABORTPATH TEMRSetMetaRgn;

typedef PAbortPath PEMRSetMetaRgn;

typedef tagABORTPATH TEMRSaveDC;

typedef PAbortPath PEMRSaveDC;

typedef tagABORTPATH TEMRRealizePalette;

typedef PAbortPath PEMRRealizePalette;

typedef tagEMRSELECTCLIPPATH *PEMRSelectclippath;

typedef tagEMRSELECTCLIPPATH TEMRSelectClipPath;

typedef tagEMRSELECTCLIPPATH TEMRSetBkMode;

typedef PEMRSelectclippath PEMRSetBkMode;

typedef tagEMRSELECTCLIPPATH TEMRSetMapMode;

typedef PEMRSelectclippath PEMRSetMapMode;

typedef tagEMRSELECTCLIPPATH TEMRSetPolyFillMode;

typedef PEMRSelectclippath PEMRSetPolyFillMode;

typedef tagEMRSELECTCLIPPATH TEMRSetRop2;

typedef PEMRSelectclippath PEMRSetRop2;

typedef tagEMRSELECTCLIPPATH TEMRSetStretchBltMode;

typedef PEMRSelectclippath PEMRSetStretchBltMode;

typedef tagEMRSELECTCLIPPATH TEMRSetICMMode;

typedef PEMRSelectclippath PEMRSetICMMode;

typedef tagEMRSELECTCLIPPATH TEMRSetTextAlign;

typedef PEMRSelectclippath PEMRSetTextAlign;

typedef tagEMRSETMITERLIMIT *PEMRSetMiterLimit;

typedef tagEMRSETMITERLIMIT TEMRSetMiterLimit;

typedef tagEMRRESTOREDC *PEMRRestoreDC;

typedef tagEMRRESTOREDC TEMRRestoreDC;

typedef tagEMRSETARCDIRECTION *PEMRSetArcDirection;

typedef tagEMRSETARCDIRECTION TEMRSetArcDirection;

typedef tagEMRSETMAPPERFLAGS *PEMRSetMapperFlags;

typedef tagEMRSETMAPPERFLAGS TEMRSetMapperFlags;

typedef tagEMRSETTEXTCOLOR *PEMRSetTextColor;

typedef tagEMRSETTEXTCOLOR TEMRSetTextColor;

typedef tagEMRSETTEXTCOLOR TEMRSetBkColor;

typedef PEMRSetTextColor PEMRSetBkColor;

typedef tagEMRSELECTOBJECT *PEMRSelectObject;

typedef tagEMRSELECTOBJECT TEMRSelectObject;

typedef tagEMRSELECTOBJECT EMRDeleteObject;

typedef PEMRSelectObject PEMRDeleteObject;

typedef tagEMRSETCOLORSPACE *PEMRSelectColorSpace;

typedef tagEMRSETCOLORSPACE TEMRSelectColorSpace;

typedef tagEMRSETCOLORSPACE EMRDeleteColorSpace;

typedef PEMRSelectColorSpace PEMRDeleteColorSpace;

typedef tagEMRSELECTPALETTE *PEMRSelectPalette;

typedef tagEMRSELECTPALETTE TEMRSelectPalette;

typedef tagEMRRESIZEPALETTE *PEMRResizePalette;

typedef tagEMRRESIZEPALETTE TEMRResizePalette;

typedef tagEMRSETPALETTEENTRIES *PEMRSetPaletteEntries;

typedef tagEMRSETPALETTEENTRIES TEMRSetPaletteEntries;

typedef tagEMRSETCOLORADJUSTMENT *PEMRSetColorAdjustment;

typedef tagEMRSETCOLORADJUSTMENT TEMRSetColorAdjustment;

typedef tagEMRGDICOMMENT *PEMRGDIComment;

typedef tagEMRGDICOMMENT TEMRGDIComment;

typedef tagEMREOF TEMREOF;

typedef tagEMRLINETO *PEMRLineTo;

typedef tagEMRLINETO TEMRLineTo;

typedef tagEMRLINETO EMRMoveToEx;

typedef PEMRLineTo PEMRMoveToEx;

typedef tagEMROFFSETCLIPRGN *PEMROffsetClipRgn;

typedef tagEMROFFSETCLIPRGN TEMROffsetClipRgn;

typedef tagEMRFILLPATH *PEMRFillPath;

typedef tagEMRFILLPATH TEMRFillPath;

typedef tagEMRFILLPATH EMRStrokeAndFillPath;

typedef PEMRFillPath PEMRStrokeAndFillPath;

typedef tagEMRFILLPATH EMRStrokePath;

typedef PEMRFillPath PEMRStrokePath;

typedef tagEMREXCLUDECLIPRECT *PEMRExcludeClipRect;

typedef tagEMREXCLUDECLIPRECT TEMRExcludeClipRect;

typedef tagEMREXCLUDECLIPRECT EMRIntersectClipRect;

typedef PEMRExcludeClipRect PEMRIntersectClipRect;

typedef tagEMRSETVIEWPORTORGEX *PEMRSetViewportOrgEx;

typedef tagEMRSETVIEWPORTORGEX TEMRSetViewportOrgEx;

typedef tagEMRSETVIEWPORTORGEX EMRSetWindowOrgEx;

typedef PEMRSetViewportOrgEx PEMRSetWindowOrgEx;

typedef tagEMRSETVIEWPORTORGEX EMRSetBrushOrgEx;

typedef PEMRSetViewportOrgEx PEMRSetBrushOrgEx;

typedef tagEMRSETVIEWPORTEXTEX *PEMRSetViewportExtEx;

typedef tagEMRSETVIEWPORTEXTEX TEMRSetViewportExtEx;

typedef tagEMRSETVIEWPORTEXTEX EMRSetWindowExtEx;

typedef PEMRSetViewportExtEx PEMRSetWindowExtEx;

typedef tagEMRSCALEVIEWPORTEXTEX *PEMRScaleViewportExtEx;

typedef tagEMRSCALEVIEWPORTEXTEX TEMRScaleViewportExtEx;

typedef tagEMRSCALEVIEWPORTEXTEX EMRScaleWindowExtEx;

typedef PEMRScaleViewportExtEx PEMRScaleWindowExtEx;

typedef tagEMRSETWORLDTRANSFORM *PEMRSetWorldTransform;

typedef tagEMRSETWORLDTRANSFORM TEMRSetWorldTransform;

typedef tagEMRMODIFYWORLDTRANSFORM *PEMRModifyWorldTransform;

typedef tagEMRMODIFYWORLDTRANSFORM TEMRModifyWorldTransform;

typedef tagEMRSETPIXELV *PEMRSetPixelV;

typedef tagEMRSETPIXELV TEMRSetPixelV;

typedef tagEMREXTFLOODFILL *PEMRExtFloodFill;

typedef tagEMREXTFLOODFILL TEMRExtFloodFill;

typedef tagEMRELLIPSE *PEMREllipse;

typedef tagEMRELLIPSE TEMREllipse;

typedef tagEMRELLIPSE EMRRectangle;

typedef PEMREllipse PEMRRectangle;

typedef tagEMRROUNDRECT *PEMRRoundRect;

typedef tagEMRROUNDRECT TEMRRoundRect;

typedef tagEMRARC *PEMRArc;

typedef tagEMRARC TEMRArc;

typedef tagEMRARC EMRArcTo;

typedef PEMRArc PEMRArcTo;

typedef tagEMRARC EMRChord;

typedef PEMRArc PEMRChord;

typedef tagEMRARC EMRPie;

typedef PEMRArc PEMRPie;

typedef tagEMRANGLEARC *PEMRAngleArc;

typedef tagEMRANGLEARC TEMRAngleArc;

typedef tagEMRPOLYLINE *PEMRPolyline;

typedef tagEMRPOLYLINE TEMRPolyline;

typedef tagEMRPOLYLINE EMRPolyBezier;

typedef PEMRPolyline PEMRPolyBezier;

typedef tagEMRPOLYLINE EMRPolyGON;

typedef PEMRPolyline PEMRPolyGON;

typedef tagEMRPOLYLINE EMRPolyBezierTo;

typedef PEMRPolyline PEMRPolyBezierTo;

typedef tagEMRPOLYLINE EMRPolyLineTo;

typedef PEMRPolyline PEMRPolyLineTo;

typedef tagEMRPOLYLINE16 *PEMRPolyline16;

typedef tagEMRPOLYLINE16 TEMRPolyline16;

typedef tagEMRPOLYLINE16 EMRPolyBezier16;

typedef PEMRPolyline16 PEMRPolyBezier16;

typedef tagEMRPOLYLINE16 EMRPolygon16;

typedef PEMRPolyline16 PEMRPolygon16;

typedef tagEMRPOLYLINE16 EMRPolyBezierTo16;

typedef PEMRPolyline16 PEMRPolyBezierTo16;

typedef tagEMRPOLYLINE16 EMRPolyLineTo16;

typedef PEMRPolyline16 PEMRPolyLineTo16;

typedef tagEMRPOLYDRAW *PEMRPolyDraw;

typedef tagEMRPOLYDRAW TEMRPolyDraw;

typedef tagEMRPOLYDRAW16 *PEMRPolyDraw16;

typedef tagEMRPOLYDRAW16 TEMRPolyDraw16;

typedef tagEMRPOLYPOLYLINE *PEMRPolyPolyline;

typedef tagEMRPOLYPOLYLINE TEMRPolyPolyline;

typedef tagEMRPOLYPOLYLINE EMRPolyPolygon;

typedef PEMRPolyPolyline PEMRPolyPolygon;

typedef tagEMRPOLYPOLYLINE16 *PEMRPolyPolyline16;

typedef tagEMRPOLYPOLYLINE16 TEMRPolyPolyline16;

typedef tagEMRPOLYPOLYLINE16 EMRPolyPolygon16;

typedef PEMRPolyPolyline16 PEMRPolyPolygon16;

typedef tagEMRINVERTRGN *PEMRInvertRgn;

typedef tagEMRINVERTRGN TEMRInvertRgn;

typedef tagEMRINVERTRGN EMRPaintRgn;

typedef PEMRInvertRgn PEMRPaintRgn;

typedef tagEMRFILLRGN *PEMRFillRgn;

typedef tagEMRFILLRGN TEMRFillRgn;

typedef tagEMRFRAMERGN *PEMRFrameRgn;

typedef tagEMRFRAMERGN TEMRFrameRgn;

typedef tagEMRGRADIENTFILL TEMGradientFill;

typedef tagEMREXTSELECTCLIPRGN *PEMRExtSelectClipRgn;

typedef tagEMREXTSELECTCLIPRGN TEMRExtSelectClipRgn;

typedef tagEMREXTTEXTOUTA *PEMRExtTextOut;

typedef tagEMREXTTEXTOUTA TEMRExtTextOut;

typedef tagEMRPOLYTEXTOUTA *PEMRPolyTextOut;

typedef tagEMRPOLYTEXTOUTA TEMRPolyTextOut;

typedef tagEMRBITBLT *PEMRBitBlt;

typedef tagEMRBITBLT TEMRBitBlt;

typedef tagEMRSTRETCHBLT *PEMRStretchBlt;

typedef tagEMRSTRETCHBLT TEMRStretchBlt;

typedef tagEMRMASKBLT *PEMRMaskBlt;

typedef tagEMRMASKBLT TEMRMaskBlt;

typedef tagEMRPLGBLT *PEMRPLGBlt;

typedef tagEMRPLGBLT TEMRPLGBlt;

typedef tagEMRSETDIBITSTODEVICE *PEMRSetDIBitsToDevice;

typedef tagEMRSETDIBITSTODEVICE TEMRSetDIBitsToDevice;

typedef tagEMRSTRETCHDIBITS *PEMRStretchDIBits;

typedef tagEMRSTRETCHDIBITS TEMRStretchDIBits;

typedef tagEMRALPHABLEND TEMRAlphaBlend;

typedef tagEMRTRANSPARENTBLT TEMRTransparentBLT;

typedef tagEMREXTCREATEFONTINDIRECTW *PEMRExtCreateFontIndirect;

typedef tagEMREXTCREATEFONTINDIRECTW TEMRExtCreateFontIndirect;

typedef tagEMRCREATEPALETTE *PEMRCreatePalette;

typedef tagEMRCREATEPALETTE TEMRCreatePalette;

typedef tagEMRCREATECOLORSPACE *PEMRCreateColorSpace;

typedef tagEMRCREATECOLORSPACE TEMRCreateColorSpace;

typedef tagEMRCREATEPEN *PEMRCreatePen;

typedef tagEMRCREATEPEN TEMRCreatePen;

typedef tagEMREXTCREATEPEN *PEMRExtCreatePen;

typedef tagEMREXTCREATEPEN TEMRExtCreatePen;

typedef tagEMRCREATEBRUSHINDIRECT *PEMRCreateBrushIndirect;

typedef tagEMRCREATEBRUSHINDIRECT TEMRCreateBrushIndirect;

typedef tagEMRCREATEMONOBRUSH *PEMRCreateMonoBrush;

typedef tagEMRCREATEMONOBRUSH TEMRCreateMonoBrush;

typedef tagEMRCREATEDIBPATTERNBRUSHPT *PEMRCreateDIBPatternBrushPt;

typedef tagEMRCREATEDIBPATTERNBRUSHPT TEMRCreateDIBPatternBrushPt;

typedef tagEMRFORMAT *PEMRFormat;

typedef tagEMRFORMAT TEMRFormat;

typedef tagEMRGLSRECORD *PEMRGLSRecord;

typedef tagEMRGLSRECORD TEMRGLSRecord;

typedef tagEMRGLSBOUNDEDRECORD *PEMRGLSBoundedRecord;

typedef tagEMRGLSBOUNDEDRECORD TEMRGLSBoundedRecord;

typedef tagEMRPIXELFORMAT *PEMRPixelFormat;

typedef tagEMRPIXELFORMAT TEMRPixelFormat;

typedef _POINTFLOAT *PPointFloat;

typedef _POINTFLOAT TPointFloat;

typedef _GLYPHMETRICSFLOAT *PGlyphMetricsFloat;

typedef _GLYPHMETRICSFLOAT TGlyphMetricsFloat;

typedef tagLAYERPLANEDESCRIPTOR *PLayerPlaneDescriptor;

typedef tagLAYERPLANEDESCRIPTOR TLayerPlaneDescriptor;

typedef _WGLSWAP TWGLSwap;

typedef void * TFNWndProc;

typedef void * TFNDlgProc;

typedef void * TFNTimerProc;

typedef void * TFNGrayStringProc;

typedef void * TFNWndEnumProc;

typedef void * TFNSendAsyncProc;

typedef void * TFNDrawStateProc;

typedef NativeInt __stdcall (*TFNHookProc)(int code, NativeUInt wparam, NativeInt lparam);

typedef void * TFNPropEnumProc;

typedef void * TFNPropEnumProcEx;

typedef void * TFNEditWordBreakProc;

typedef void * TFNNameEnumProc;

typedef void * TFNWinStaEnumProc;

typedef void * TFNDeskTopEnumProc;

typedef char * MakeIntResourceA;

typedef System::WideChar * MakeIntResourceW;

typedef System::WideChar * MakeIntResource;

typedef tagCREATESTRUCTA *PCreateStructA;

typedef tagCREATESTRUCTW *PCreateStructW;

typedef PCreateStructW PCreateStruct;

typedef tagCREATESTRUCTA TCreateStructA;

typedef tagCREATESTRUCTW TCreateStructW;

typedef tagCREATESTRUCTW TCreateStruct;

typedef tagCBT_CREATEWNDA *PCBTCreateWnd;

typedef tagCBT_CREATEWNDA TCBTCreateWnd;

typedef tagCBTACTIVATESTRUCT *PCBTActivateStruct;

typedef tagCBTACTIVATESTRUCT TCBTActivateStruct;

typedef tagEVENTMSG *PEventMsg;

typedef tagEVENTMSG TEventMsg;

typedef tagCWPSTRUCT *PCWPStruct;

typedef tagCWPSTRUCT TCWPStruct;

typedef tagCWPRETSTRUCT *PCWPRetStruct;

typedef tagCWPRETSTRUCT TCWPRetStruct;

typedef tagDEBUGHOOKINFO *PDebugHookInfo;

typedef tagDEBUGHOOKINFO TDebugHookInfo;

typedef tagMOUSEHOOKSTRUCT *PMouseHookStruct;

typedef tagMOUSEHOOKSTRUCT TMouseHookStruct;

typedef tagMOUSEHOOKSTRUCTEX *PMouseHookStructEx;

typedef tagMOUSEHOOKSTRUCTEX TMouseHookStructEx;

typedef tagHARDWAREHOOKSTRUCT *PHardwareHookStruct;

typedef tagHARDWAREHOOKSTRUCT THardwareHookStruct;

typedef tagMOUSEMOVEPOINT TMouseMovePoint;

typedef tagUSEROBJECTFLAGS *PUserObjectFlags;

typedef tagUSEROBJECTFLAGS TUserObjectFlags;

typedef tagWNDCLASSEXA *PWndClassExA;

typedef tagWNDCLASSEXW *PWndClassExW;

typedef PWndClassExW PWndClassEx;

typedef tagWNDCLASSEXA TWndClassExA;

typedef tagWNDCLASSEXW TWndClassExW;

typedef tagWNDCLASSEXW TWndClassEx;

typedef tagWNDCLASSA *PWndClassA;

typedef tagWNDCLASSW *PWndClassW;

typedef PWndClassW PWndClass;

typedef tagWNDCLASSA TWndClassA;

typedef tagWNDCLASSW TWndClassW;

typedef tagWNDCLASSW TWndClass;

typedef tagMINMAXINFO *PMinMaxInfo;

typedef tagMINMAXINFO TMinMaxInfo;

typedef tagCOPYDATASTRUCT *PCopyDataStruct;

typedef tagCOPYDATASTRUCT TCopyDataStruct;

typedef tagMDINEXTMENU *PMDINextMenu;

typedef tagMDINEXTMENU TMDINextMenu;

typedef POWERBROADCAST_SETTING TPowerBroadcastSetting;

typedef POWERBROADCAST_SETTING *PPowerBroadcastSetting;

typedef tagWINDOWPOS *PWindowPos;

typedef tagWINDOWPOS TWindowPos;

typedef tagNCCALCSIZE_PARAMS *PNCCalcSizeParams;

typedef tagNCCALCSIZE_PARAMS TNCCalcSizeParams;

typedef tagTRACKMOUSEEVENT TTrackMouseEvent;

typedef tagACCEL *PAccel;

typedef tagACCEL TAccel;

typedef tagPAINTSTRUCT *PPaintStruct;

typedef tagPAINTSTRUCT TPaintStruct;

typedef tagWINDOWPLACEMENT *PWindowPlacement;

typedef tagWINDOWPLACEMENT TWindowPlacement;

typedef tagNMHDR *PNMHdr;

typedef tagNMHDR TNMHdr;

typedef tagSTYLESTRUCT *PStyleStruct;

typedef tagSTYLESTRUCT TStyleStruct;

enum DECLSPEC_DENUM Winapi_Windows__1 : unsigned int { odSelected, odGrayed, odDisabled, odChecked, odFocused, odDefault, odHotLight, odInactive, odNoAccel, odNoFocusRect, odReserved1, odReserved2, odComboBoxEdit };

typedef System::Set<Winapi_Windows__1, Winapi_Windows__1::odSelected, Winapi_Windows__1::odComboBoxEdit> TOwnerDrawState;

typedef tagMEASUREITEMSTRUCT *PMeasureItemStruct;

typedef tagMEASUREITEMSTRUCT TMeasureItemStruct;

typedef tagDRAWITEMSTRUCT *PDrawItemStruct;

typedef tagDRAWITEMSTRUCT TDrawItemStruct;

typedef tagDELETEITEMSTRUCT *PDeleteItemStruct;

typedef tagDELETEITEMSTRUCT TDeleteItemStruct;

typedef tagCOMPAREITEMSTRUCT *PCompareItemStruct;

typedef tagCOMPAREITEMSTRUCT TCompareItemStruct;

typedef BSMINFO TBSMInfo;

typedef BSMINFO *PBSMINFO;

typedef tagBROADCASTSYSMSG *PBroadcastSysMsg;

#pragma pack(push,4)
struct DECLSPEC_DRECORD tagBROADCASTSYSMSG
{
public:
	unsigned uiMessage;
	NativeUInt wParam;
	NativeInt lParam;
};
#pragma pack(pop)


typedef tagBROADCASTSYSMSG TBroadcastSysMsg;

typedef tagBROADCASTSYSMSG BROADCASTSYSMSG;

typedef FLASHWINFO TFlashWInfo;

typedef DLGTEMPLATE *PDlgTemplate;

typedef DLGTEMPLATE TDlgTemplate;

typedef DLGITEMTEMPLATE *PDlgItemTemplate;

typedef DLGITEMTEMPLATE TDlgItemTemplate;

typedef System::StaticArray<System::Byte, 256> TKeyboardState;

typedef TKeyboardState *PKeyboardState;

typedef tagMOUSEINPUT *PMouseInput;

typedef tagMOUSEINPUT TMouseInput;

typedef tagKEYBDINPUT *PKeybdInput;

typedef tagKEYBDINPUT TKeybdInput;

typedef tagHARDWAREINPUT *PHardwareInput;

typedef tagHARDWAREINPUT THardwareInput;

typedef tagINPUT *PInput;

typedef tagINPUT TInput;

typedef TOUCHINPUT TTouchInput;

typedef tagLASTINPUTINFO *PLastInputInfo;

typedef tagLASTINPUTINFO TLastInputInfo;

typedef tagTPMPARAMS *PTPMParams;

typedef tagTPMPARAMS TTPMParams;

typedef tagMENUINFO TMenuInfo;

typedef tagMENUGETOBJECTINFO TMenuGetObjectInfo;

typedef tagMENUITEMINFOA *PMenuItemInfoA;

typedef tagMENUITEMINFOW *PMenuItemInfoW;

typedef PMenuItemInfoW PMenuItemInfo;

typedef tagMENUITEMINFOA TMenuItemInfoA;

typedef tagMENUITEMINFOW TMenuItemInfoW;

typedef tagMENUITEMINFOW TMenuItemInfo;

typedef tagDROPSTRUCT *PDropStruct;

typedef tagDROPSTRUCT TDropStruct;

typedef tagDRAWTEXTPARAMS *PDrawTextParams;

typedef tagDRAWTEXTPARAMS TDrawTextParams;

typedef tagHELPINFO *PHelpInfo;

typedef tagHELPINFO THelpInfo;

typedef void __fastcall (*TPRMsgBoxCallback)(tagHELPINFO &lpHelpInfo);

typedef tagMSGBOXPARAMSA *PMsgBoxParamsA;

typedef tagMSGBOXPARAMSW *PMsgBoxParamsW;

typedef PMsgBoxParamsW PMsgBoxParams;

typedef tagMSGBOXPARAMSA TMsgBoxParamsA;

typedef tagMSGBOXPARAMSW TMsgBoxParamsW;

typedef tagMSGBOXPARAMSW TMsgBoxParams;

typedef MENUITEMTEMPLATEHEADER *PMenuItemTemplateHeader;

typedef MENUITEMTEMPLATEHEADER TMenuItemTemplateHeader;

typedef MENUITEMTEMPLATE *PMenuItemTemplate;

typedef MENUITEMTEMPLATE TMenuItemTemplate;

typedef _ICONINFO *PIconInfo;

typedef _ICONINFO TIconInfo;

typedef tagCURSORSHAPE *PCursorShape;

typedef tagCURSORSHAPE TCursorShape;

typedef ICONINFOEXA TIconInfoExA;

typedef ICONINFOEXW TIconInfoExW;

typedef tagSCROLLINFO *PScrollInfo;

typedef tagSCROLLINFO TScrollInfo;

typedef tagMDICREATESTRUCTA *PMDICreateStructA;

typedef tagMDICREATESTRUCTW *PMDICreateStructW;

typedef PMDICreateStructW PMDICreateStruct;

typedef tagMDICREATESTRUCTA TMDICreateStructA;

typedef tagMDICREATESTRUCTW TMDICreateStructW;

typedef tagMDICREATESTRUCTW TMDICreateStruct;

typedef tagCLIENTCREATESTRUCT *PClientCreateStruct;

typedef tagCLIENTCREATESTRUCT TClientCreateStruct;

typedef tagMULTIKEYHELPA *PMultiKeyHelpA;

typedef tagMULTIKEYHELPW *PMultiKeyHelpW;

typedef PMultiKeyHelpW PMultiKeyHelp;

typedef tagMULTIKEYHELPA TMultiKeyHelpA;

typedef tagMULTIKEYHELPW TMultiKeyHelpW;

typedef tagMULTIKEYHELPW TMultiKeyHelp;

typedef tagHELPWININFOA *PHelpWinInfoA;

typedef tagHELPWININFOW *PHelpWinInfoW;

typedef PHelpWinInfoW PHelpWinInfo;

typedef tagHELPWININFOA THelpWinInfoA;

typedef tagHELPWININFOW THelpWinInfoW;

typedef tagHELPWININFOW THelpWinInfo;

typedef _HHN_NOTIFY *PHHN_Notify;

struct DECLSPEC_DRECORD _HHN_NOTIFY
{
public:
	tagNMHDR hdr;
	char *pszUrl;
};


typedef _HHN_NOTIFY THHN_Notify;

typedef _HH_POPUP *PHH_POPUP;

struct DECLSPEC_DRECORD _HH_POPUP
{
public:
	int cbStruct;
	NativeUInt hInst;
	unsigned idString;
	System::WideChar *pszText;
	System::Types::TPoint pt;
	unsigned clrForeground;
	unsigned clrBackground;
	System::Types::TRect rcMargins;
	System::WideChar *pszFont;
};


typedef _HH_POPUP THH_Popup;

typedef _HH_AKLINK *PHH_AKLINK;

struct DECLSPEC_DRECORD _HH_AKLINK
{
public:
	int cbStruct;
	System::LongBool fReserved;
	System::WideChar *pszKeywords;
	System::WideChar *pszUrl;
	System::WideChar *pszMsgText;
	System::WideChar *pszMsgTitle;
	System::WideChar *pszWindow;
	System::LongBool fIndexOnFail;
};


typedef _HH_AKLINK THH_AKLink;

typedef _HH_ENUM_IT *PHH_Enum_It;

struct DECLSPEC_DRECORD _HH_ENUM_IT
{
public:
	int cbStruct;
	int iType;
	char *pszCatName;
	char *pszITName;
	char *pszItDescription;
};


typedef _HH_ENUM_IT THH_Enum_it;

typedef _HH_ENUM_CAT *PHH_Enum_Cat;

struct DECLSPEC_DRECORD _HH_ENUM_CAT
{
public:
	int cbStruct;
	char *pszCatName;
	char *pszCatDescription;
};


typedef _HH_ENUM_CAT THH_Enum_Cat;

typedef _HH_SET_INFOTYPE *PHH_Set_Infotype;

struct DECLSPEC_DRECORD _HH_SET_INFOTYPE
{
public:
	int cbStruct;
	char *pszCatName;
	char *pszInfoTypeName;
};


typedef _HH_SET_INFOTYPE THH_Set_Infotype;

typedef unsigned *PHH_Infotype;

typedef unsigned THH_Infotype;

typedef _HH_FTS_QUERYA *PHH_Fts_QueryA;

typedef _HH_FTS_QUERYW *PHH_Fts_QueryW;

typedef PHH_Fts_QueryW PHH_Fts_Query;

struct DECLSPEC_DRECORD _HH_FTS_QUERYA
{
public:
	int cbStruct;
	System::LongBool fUniCodeStrings;
	char *pszSearchQuery;
	int iProximity;
	System::LongBool fStemmedSearch;
	System::LongBool fTitleOnly;
	System::LongBool fExecute;
	char *pszWindow;
};


struct DECLSPEC_DRECORD _HH_FTS_QUERYW
{
public:
	int cbStruct;
	System::LongBool fUniCodeStrings;
	System::WideChar *pszSearchQuery;
	int iProximity;
	System::LongBool fStemmedSearch;
	System::LongBool fTitleOnly;
	System::LongBool fExecute;
	System::WideChar *pszWindow;
};


typedef _HH_FTS_QUERYA THH_Fts_QueryA;

typedef _HH_FTS_QUERYW THH_Fts_QueryW;

typedef _HH_FTS_QUERYW THH_Fts_Query;

typedef _HH_FTS_QUERYA HH_FTS_QUERYA;

typedef _HH_FTS_QUERYW HH_FTS_QUERYW;

typedef _HH_WINTYPE *PHH_Wintype;

struct DECLSPEC_DRECORD _HH_WINTYPE
{
public:
	int cbStruct;
	System::LongBool fUniCodeStrings;
	System::WideChar *pszType;
	unsigned fsValidMembers;
	unsigned fsWinProperties;
	System::WideChar *pszCaption;
	unsigned dwStyles;
	unsigned dwExStyles;
	System::Types::TRect rcWindowPos;
	int nShowState;
	HWND hwndHelp;
	HWND hwndCaller;
	unsigned *paInfoTypes;
	HWND hwndToolBar;
	HWND hwndNavigation;
	HWND hwndHTML;
	int iNavWidth;
	System::Types::TRect rcHTML;
	System::WideChar *pszToc;
	System::WideChar *pszIndex;
	System::WideChar *pszFile;
	System::WideChar *pszHome;
	unsigned fsToolBarFlags;
	System::LongBool fNotExpanded;
	int curNavType;
	int tabPos;
	int idNotify;
	System::StaticArray<System::Byte, 20> tabOrder;
	int cHistory;
	System::WideChar *pszJump1;
	System::WideChar *pszJump2;
	System::WideChar *pszUrlJump1;
	System::WideChar *pszUrlJump2;
	System::Types::TRect rcMinSize;
	int cbInfoTYpes;
	System::WideChar *pszCustomTabs;
};


typedef _HH_WINTYPE THH_WINTYPE;

typedef _HH_NTRACK *PHH_NTrack;

struct DECLSPEC_DRECORD _HH_NTRACK
{
public:
	tagNMHDR hdr;
	char *pszCurUrl;
	int idAction;
};


typedef _HH_NTRACK THH_NTrack;

typedef tagNONCLIENTMETRICSA *PNonClientMetricsA;

typedef tagNONCLIENTMETRICSW *PNonClientMetricsW;

typedef PNonClientMetricsW PNonClientMetrics;

typedef tagNONCLIENTMETRICSA TNonClientMetricsA;

typedef tagNONCLIENTMETRICSW TNonClientMetricsW;

typedef tagNONCLIENTMETRICSW TNonClientMetrics;

typedef tagMINIMIZEDMETRICS *PMinimizedMetrics;

typedef tagMINIMIZEDMETRICS TMinimizedMetrics;

typedef tagICONMETRICSA *PIconMetricsA;

typedef tagICONMETRICSW *PIconMetricsW;

typedef PIconMetricsW PIconMetrics;

typedef tagICONMETRICSA TIconMetricsA;

typedef tagICONMETRICSW TIconMetricsW;

typedef tagICONMETRICSW TIconMetrics;

typedef tagANIMATIONINFO *PAnimationInfo;

typedef tagANIMATIONINFO TAnimationInfo;

typedef tagSERIALKEYSA *PSerialKeysA;

typedef tagSERIALKEYSW *PSerialKeysW;

typedef PSerialKeysW PSerialKeys;

typedef tagSERIALKEYSA TSerialKeysA;

typedef tagSERIALKEYSW TSerialKeysW;

typedef tagSERIALKEYSW TSerialKeys;

typedef tagHIGHCONTRASTA *PHighContrastA;

typedef tagHIGHCONTRASTW *PHighContrastW;

typedef PHighContrastW PHighContrast;

typedef tagHIGHCONTRASTA THighContrastA;

typedef tagHIGHCONTRASTW THighContrastW;

typedef tagHIGHCONTRASTW THighContrast;

typedef tagFILTERKEYS *PFilterKeys;

typedef tagFILTERKEYS TFilterKeys;

typedef tagSTICKYKEYS *PStickyKeys;

typedef tagSTICKYKEYS TStickyKeys;

typedef tagMOUSEKEYS *PMouseKeys;

typedef tagMOUSEKEYS TMouseKeys;

typedef tagACCESSTIMEOUT *PAccessTimeout;

typedef tagACCESSTIMEOUT TAccessTimeout;

typedef tagSOUNDSENTRYA *PSoundsEntryA;

typedef tagSOUNDSENTRYW *PSoundsEntryW;

typedef PSoundsEntryW PSoundsEntry;

typedef tagSOUNDSENTRYA TSoundsEntryA;

typedef tagSOUNDSENTRYW TSoundsEntryW;

typedef tagSOUNDSENTRYW TSoundsEntry;

typedef tagTOGGLEKEYS *PToggleKeys;

typedef tagTOGGLEKEYS TToggleKeys;

typedef AUDIODESCRIPTION TAudioDescription;

typedef AUDIODESCRIPTION *PAudioDescription;

typedef tagGUITHREADINFO TGUIThreadInfo;

typedef tagCURSORINFO TCursorInfo;

typedef tagWINDOWINFO TWindowInfo;

typedef tagTITLEBARINFO TTitleBarInfo;

typedef tagTITLEBARINFOEX TTitleBarInfoEx;

typedef tagMENUBARINFO TMenuBarInfo;

typedef tagSCROLLBARINFO TScrollBarInfo;

typedef tagCOMBOBOXINFO TComboBoxInfo;

typedef tagALTTABINFO TAltTabInfo;

typedef _cpinfo *PCPInfo;

typedef _cpinfo TCPInfo;

typedef _numberfmtA *PNumberFmtA;

typedef _numberfmtW *PNumberFmtW;

typedef PNumberFmtW PNumberFmt;

typedef _numberfmtA TNumberFmtA;

typedef _numberfmtW TNumberFmtW;

typedef _numberfmtW TNumberFmt;

typedef _currencyfmtA *PCurrencyFmtA;

typedef _currencyfmtW *PCurrencyFmtW;

typedef PCurrencyFmtW PCurrencyFmt;

typedef _currencyfmtA TCurrencyFmtA;

typedef _currencyfmtW TCurrencyFmtW;

typedef _currencyfmtW TCurrencyFmt;

typedef SYSNLS_FUNCTION TSysNlsFunction;

typedef unsigned NLS_FUNCTION;

typedef _nlsversioninfo *PNlsVersionInfo;

typedef _nlsversioninfo TNlsVersionInfo;

typedef _nlsversioninfoex *PNlsVersionInfoEx;

typedef _nlsversioninfoex TNlsVersionInfoEx;

typedef SYSGEOTYPE TSysGEOType;

typedef SYSGEOCLASS TSysGEOClass;

typedef NORM_FORM TNormForm;

typedef System::LongBool __stdcall (*TFNLanguageGroupEnumProcA)(unsigned dw1, char * p1, char * p2, unsigned dw2, NativeInt p3);

typedef System::LongBool __stdcall (*TFNLanguageGroupEnumProcW)(unsigned dw1, System::WideChar * p1, System::WideChar * p2, unsigned dw2, NativeInt p3);

typedef TFNLanguageGroupEnumProcW TFNLanguageGroupEnumProc;

typedef System::LongBool __stdcall (*TFNLangGroupLocaleEnumProcA)(unsigned dw1, unsigned dw2, char * p1, NativeInt p2);

typedef System::LongBool __stdcall (*TFNLangGroupLocaleEnumProcW)(unsigned dw1, unsigned dw2, System::WideChar * p1, NativeInt p2);

typedef TFNLangGroupLocaleEnumProcW TFNLangGroupLocaleEnumProc;

typedef System::LongBool __stdcall (*TFNUILanguageEnumProcA)(char * p1, NativeInt p2);

typedef System::LongBool __stdcall (*TFNUILanguageEnumProcW)(System::WideChar * p1, NativeInt p2);

typedef TFNUILanguageEnumProcW TFNUILanguageEnumProc;

typedef void * TFNLocaleEnumProcA;

typedef void * TFNLocaleEnumProcW;

typedef void * TFNLocaleEnumProc;

typedef void * TFNCodepageEnumProcA;

typedef void * TFNCodepageEnumProcW;

typedef void * TFNCodepageEnumProc;

typedef void * TFNDateFmtEnumProcA;

typedef void * TFNDateFmtEnumProcW;

typedef void * TFNDateFmtEnumProc;

typedef System::LongBool __stdcall (*TFNDateFmtEnumProcExA)(char * p1, unsigned dw1);

typedef System::LongBool __stdcall (*TFNDateFmtEnumProcExW)(System::WideChar * p1, unsigned dw1);

typedef TFNDateFmtEnumProcExW TFNDateFmtEnumProcEx;

typedef void * TFNTimeFmtEnumProcA;

typedef void * TFNTimeFmtEnumProcW;

typedef void * TFNTimeFmtEnumProc;

typedef void * TFNCalInfoEnumProcA;

typedef void * TFNCalInfoEnumProcW;

typedef void * TFNCalInfoEnumProc;

typedef System::LongBool __stdcall (*TFNCalInfoEnumProcExA)(char * p1, unsigned dw1);

typedef System::LongBool __stdcall (*TFNCalInfoEnumProcExW)(System::WideChar * p1, unsigned dw1);

typedef TFNCalInfoEnumProcExW TFNCalInfoEnumProcEx;

typedef System::LongBool __stdcall (*TFNGEOEnumProc)(int l1);

typedef _FILEMUIINFO *PFileMUIInfo;

typedef _FILEMUIINFO TFileMUIInfo;

typedef System::LongBool __stdcall (*TFNCalInfoEnumProcExEx)(System::WideChar * p1, unsigned dw1, System::WideChar * p2, NativeInt p3);

typedef System::LongBool __stdcall (*TFNDateFmtEnumProcExEx)(System::WideChar * p1, unsigned dw1, NativeInt p2);

typedef System::LongBool __stdcall (*TFNTimeFmtEnumProcEx)(System::WideChar * p1, NativeInt p2);

typedef System::LongBool __stdcall (*TFNLocaleEnumProcEx)(System::WideChar * p1, unsigned dw1, NativeInt p2);

typedef _COORD *PCoord;

typedef _COORD TCoord;

typedef _SMALL_RECT *PSmallRect;

typedef _SMALL_RECT TSmallRect;

typedef _KEY_EVENT_RECORD *PKeyEventRecord;

typedef _KEY_EVENT_RECORD TKeyEventRecord;

typedef _MOUSE_EVENT_RECORD *PMouseEventRecord;

typedef _MOUSE_EVENT_RECORD TMouseEventRecord;

typedef _WINDOW_BUFFER_SIZE_RECORD *PWindowBufferSizeRecord;

typedef _WINDOW_BUFFER_SIZE_RECORD TWindowBufferSizeRecord;

typedef _MENU_EVENT_RECORD *PMenuEventRecord;

typedef _MENU_EVENT_RECORD TMenuEventRecord;

typedef _FOCUS_EVENT_RECORD *PFocusEventRecord;

typedef _FOCUS_EVENT_RECORD TFocusEventRecord;

typedef _INPUT_RECORD *PInputRecord;

typedef _INPUT_RECORD TInputRecord;

typedef _CHAR_INFO *PCharInfo;

typedef _CHAR_INFO TCharInfo;

typedef _CONSOLE_SCREEN_BUFFER_INFO TConsoleScreenBufferInfo;

typedef PCONSOLE_SCREEN_BUFFER_INFO PConsoleScreenBufferInfo;

typedef _CONSOLE_SCREEN_BUFFER_INFOEX TConsoleScreenBufferInfoex;

typedef PCONSOLE_SCREEN_BUFFER_INFOEX PConsoleScreenBufferInfoex;

typedef _CONSOLE_CURSOR_INFO TConsoleCursorInfo;

typedef PCONSOLE_CURSOR_INFO PConsoleCursorInfo;

typedef void * TFNHandlerRoutine;

typedef _CONSOLE_READCONSOLE_CONTROL TConsoleReadconsoleControl;

typedef PCONSOLE_READCONSOLE_CONTROL PConsoleReadconsoleControl;

typedef _CONSOLE_FONT_INFO TConsoleFontInfo;

typedef PCONSOLE_FONT_INFO PConsoleFontInfo;

typedef _CONSOLE_FONT_INFOEX TConsoleFontInfoEx;

typedef PCONSOLE_FONT_INFOEX PConsoleFontInfoEx;

typedef _CONSOLE_SELECTION_INFO TConsoleSelectionInfo;

typedef PCONSOLE_SELECTION_INFO PConsoleSelectionInfo;

typedef _CONSOLE_HISTORY_INFO TConsoleHistoryInfo;

typedef PCONSOLE_HISTORY_INFO PConsoleHistoryInfo;

typedef tagVS_FIXEDFILEINFO *PVSFixedFileInfo;

typedef tagVS_FIXEDFILEINFO TVSFixedFileInfo;

typedef val_context *PValContext;

typedef val_context TValContext;

typedef pvalueA *PPValueA;

typedef pvalueW *PPValueW;

typedef PPValueW PPValue;

typedef pvalueA TPValueA;

typedef pvalueW TPValueW;

typedef pvalueW TPValue;

typedef void * TFNQueryHandler;

typedef void * *PFNQueryHandler;

typedef provider_info *PProviderInfo;

typedef provider_info TProviderInfo;

typedef provider_info TRegProvider;

typedef PProviderInfo PProvider;

typedef value_entA *PValueEntA;

typedef value_entW *PValueEntW;

typedef PValueEntW PValueEnt;

typedef value_entA TValueEntA;

typedef value_entW TValueEntW;

typedef value_entW TValueEnt;

typedef value_entW TValEnt;

typedef PValueEntW PValEnt;

typedef _NETRESOURCEA *PNetResourceA;

typedef _NETRESOURCEW *PNetResourceW;

typedef PNetResourceW PNetResource;

typedef _NETRESOURCEA TNetResourceA;

typedef _NETRESOURCEW TNetResourceW;

typedef _NETRESOURCEW TNetResource;

typedef _CONNECTDLGSTRUCTA *PConnectDlgStruct;

typedef _CONNECTDLGSTRUCTA TConnectDlgStruct;

typedef _DISCDLGSTRUCTA *PDiscDlgStructA;

typedef _DISCDLGSTRUCTW *PDiscDlgStructW;

typedef PDiscDlgStructW PDiscDlgStruct;

typedef _DISCDLGSTRUCTA TDiscDlgStructA;

typedef _DISCDLGSTRUCTW TDiscDlgStructW;

typedef _DISCDLGSTRUCTW TDiscDlgStruct;

typedef _UNIVERSAL_NAME_INFOA *PUniversalNameInfoA;

typedef _UNIVERSAL_NAME_INFOW *PUniversalNameInfoW;

typedef PUniversalNameInfoW PUniversalNameInfo;

typedef _UNIVERSAL_NAME_INFOA TUniversalNameInfoA;

typedef _UNIVERSAL_NAME_INFOW TUniversalNameInfoW;

typedef _UNIVERSAL_NAME_INFOW TUniversalNameInfo;

typedef _REMOTE_NAME_INFOA *PRemoteNameInfoA;

typedef _REMOTE_NAME_INFOW *PRemoteNameInfoW;

typedef PRemoteNameInfoW PRemoteNameInfo;

typedef _REMOTE_NAME_INFOA TRemoteNameInfoA;

typedef _REMOTE_NAME_INFOW TRemoteNameInfoW;

typedef _REMOTE_NAME_INFOW TRemoteNameInfo;

typedef _NETINFOSTRUCT *PNetInfoStruct;

typedef _NETINFOSTRUCT TNetInfoStruct;

typedef void * TFNGetProfilePath;

typedef void * TFNReconcileProfile;

typedef void * TFNProcessPolicies;

typedef _NETCONNECTINFOSTRUCT *PNetConnectInfoStruct;

typedef _NETCONNECTINFOSTRUCT TNetConnectInfoStruct;

typedef DDEACK *PDDEAck;

typedef DDEACK TDDEAck;

typedef DDEADVISE *PDDEAdvise;

typedef DDEADVISE TDDEAdvise;

typedef DDEDATA *PDDEData;

typedef DDEDATA TDDEData;

typedef DDEPOKE *PDDEPoke;

typedef DDEPOKE TDDEPoke;

typedef NativeUInt HGESTUREINFO;

typedef GESTUREINFO TGestureInfo;

typedef GESTURENOTIFYSTRUCT TGestureNotifyStruct;

typedef GESTURECONFIG TGestureConfig;

typedef PACTCTXW PACTCTX;

typedef tagACTCTXA TActCtxA;

typedef tagACTCTXW TActCtxW;

typedef tagACTCTXW TActCtx;

typedef tagACTCTX_SECTION_KEYED_DATA_2600 TActCtxSectionKeyedData2600;

typedef PACTCTX_SECTION_KEYED_DATA_2600 PActCtxSectionKeyedData2600;

typedef tagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA TActCtxSectionKeyedDataAssemblyMetadata;

typedef PACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA PActCtxSectionKeyedDataAssemblyMetadata;

typedef tagACTCTX_SECTION_KEYED_DATA TActCtxSectionKeyedData;

typedef PACTCTX_SECTION_KEYED_DATA PActCtxSectionKeyedData;

typedef _ACTIVATION_CONTEXT_BASIC_INFORMATION TActivationContextBasicInformation;

typedef PACTIVATION_CONTEXT_BASIC_INFORMATION PActivationContextBasicInformation;

//-- var, const, procedure ---------------------------------------------------
static const unsigned LDTF_BASEMID = unsigned(0xff000000);
static const int LDTF_TYPE_8 = int(0xf80000);
static const int LDTF_DPL = int(0x60000);
static const int LDTF_PRES = int(0x10000);
static const System::Word LDTF_LIMITHI = System::Word(0xf000);
static const System::Word LDTF_SYS = System::Word(0x800);
static const System::Word LDTF_RESERVED_0 = System::Word(0x400);
static const System::Word LDTF_DEFAULT_BIG = System::Word(0x200);
static const System::Word LDTF_GRANULARITY = System::Word(0x100);
static const System::Byte LDTF_BASEHI = System::Byte(0xff);
static const int _DELETE = int(0x10000);
static const System::Int8 _ABORTDOC = System::Int8(0x2);
static const System::Int8 _SETABORTPROC = System::Int8(0x9);
static const System::Int8 _STARTDOC = System::Int8(0xa);
static const System::Int8 _ENDDOC = System::Int8(0xb);
static const System::Int8 _SETMITERLIMIT = System::Int8(0x17);
static const System::Word _EXTTEXTOUT = System::Word(0x200);
static const System::Word _STRETCHBLT = System::Word(0x800);
static const System::Byte GCP_GLYPHINDEXING = System::Byte(0x80);
static const int GCP_NODIACRITICS = int(0x20000);
static const System::Int8 COLOR_ENDCOLORS = System::Int8(0x1e);
static const System::Int8 ID_OK = System::Int8(0x1);
static const System::Int8 ID_CANCEL = System::Int8(0x2);
static const System::Int8 ID_ABORT = System::Int8(0x3);
static const System::Int8 ID_RETRY = System::Int8(0x4);
static const System::Int8 ID_IGNORE = System::Int8(0x5);
static const System::Int8 ID_YES = System::Int8(0x6);
static const System::Int8 ID_NO = System::Int8(0x7);
static const System::Int8 ID_CLOSE = System::Int8(0x8);
static const System::Int8 ID_HELP = System::Int8(0x9);
static const System::Int8 _MOUSE_EVENT = System::Int8(0x2);
static const System::Byte dde_AppReturnCode = System::Byte(0xff);
static const System::Word dde_Busy = System::Word(0x4000);
static const System::Word dde_Ack = System::Word(0x8000);
static const System::Word dde_DeferUpd = System::Word(0x4000);
static const System::Word dde_AckReq = System::Word(0x8000);
static const System::Word dde_Response = System::Word(0x1000);
static const System::Word dde_Release = System::Word(0x2000);
#define advapi32kernel L"advapi32.dll"
#define advapi32legacy L"advapi32.dll"
#define advapi32 L"advapi32.dll"
#define kernel32 L"kernel32.dll"
#define kernelbase L"kernel32.dll"
#define mpr L"mpr.dll"
#define comctl32 L"comctl32.dll"
#define gdi32 L"gdi32.dll"
#define opengl32 L"opengl32.dll"
#define user32kernel L"user32.dll"
#define minuser L"user32.dll"
#define user32 L"user32.dll"
#define wintrust L"wintrust.dll"
#define msimg32 L"msimg32.dll"
#define wtsapi32 L"wtsapi32.dll"
#define secur32 L"secur32.dll"
extern DELPHI_PACKAGE System::LongBool __fastcall Is_IntResource(System::WideChar * lpszType);
extern "C" System::LongBool __stdcall SoundSentryFunc(void);
extern DELPHI_PACKAGE unsigned __fastcall MakeULong(System::Word A, System::Word B);
extern DELPHI_PACKAGE int __fastcall HResultCode(HRESULT hr);
extern DELPHI_PACKAGE int __fastcall HResultFacility(HRESULT hr);
extern DELPHI_PACKAGE int __fastcall HResultSeverity(HRESULT hr);
extern DELPHI_PACKAGE HRESULT __fastcall HResultFromWin32(int x);
extern DELPHI_PACKAGE HRESULT __fastcall HResultFromNT(int x);
extern DELPHI_PACKAGE NativeInt __fastcall PointToLParam(const System::Types::TPoint &P);
extern DELPHI_PACKAGE double __fastcall RotateAngleFromArgument(System::Word Arg);
extern DELPHI_PACKAGE System::Types::TSmallPoint __fastcall InertiaVectorFromArgument(unsigned __int64 Arg);
}	/* namespace Windows */
}	/* namespace Winapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI_WINDOWS)
using namespace Winapi::Windows;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI)
using namespace Winapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Winapi_WindowsHPP
