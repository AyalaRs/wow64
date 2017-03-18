enum _wow64_index{
	index_ZwAcceptConnectPort=2,
	index_ZwAccessCheck,
	index_ZwAccessCheckAndAuditAlarm,
	index_ZwAccessCheckByType,
	index_ZwAccessCheckByTypeAndAuditAlarm,
	index_ZwAccessCheckByTypeResultList,
	index_ZwAccessCheckByTypeResultListAndAuditAlarm,
	index_ZwAccessCheckByTypeResultListAndAuditAlarmByHandle,
	index_ZwAddAtom,
	index_ZwAddBootEntry,
	index_ZwAddDriverEntry,
	index_ZwAdjustGroupsToken,
	index_ZwAdjustPrivilegesToken,
	index_ZwAlertResumeThread,
	index_ZwAlertThread,
	index_ZwAllocateLocallyUniqueId,
	index_ZwAllocateReserveObject,
	index_ZwAllocateUserPhysicalPages,
	index_ZwAllocateUuids,
	index_ZwAllocateVirtualMemory,
	index_ZwAlpcAcceptConnectPort,
	index_ZwAlpcCancelMessage,
	index_ZwAlpcConnectPort,
	index_ZwAlpcCreatePort,
	index_ZwAlpcCreatePortSection,
	index_ZwAlpcCreateResourceReserve,
	index_ZwAlpcCreateSectionView,
	index_ZwAlpcCreateSecurityContext,
	index_ZwAlpcDeletePortSection,
	index_ZwAlpcDeleteResourceReserve,
	index_ZwAlpcDeleteSectionView,
	index_ZwAlpcDeleteSecurityContext,
	index_ZwAlpcDisconnectPort,
	index_ZwAlpcImpersonateClientOfPort,
	index_ZwAlpcOpenSenderProcess,
	index_ZwAlpcOpenSenderThread,
	index_ZwAlpcQueryInformation,
	index_ZwAlpcQueryInformationMessage,
	index_ZwAlpcRevokeSecurityContext,
	index_ZwAlpcSendWaitReceivePort,
	index_ZwAlpcSetInformation,
	index_ZwApphelpCacheControl,
	index_ZwAreMappedFilesTheSame,
	index_ZwAssignProcessToJobObject,
	index_ZwCallbackReturn,
	index_ZwCancelIoFile,
	index_ZwCancelIoFileEx,
	index_ZwCancelSynchronousIoFile,
	index_ZwCancelTimer,
	index_ZwClearEvent,
	index_ZwClose,
	index_ZwCloseObjectAuditAlarm,
	index_ZwCommitComplete,
	index_ZwCommitEnlistment,
	index_ZwCommitTransaction,
	index_ZwCompactKeys,
	index_ZwCompareTokens,
	index_ZwCompleteConnectPort,
	index_ZwCompressKey,
	index_ZwConnectPort,
	index_ZwContinue,
	index_ZwCreateDebugObject,
	index_ZwCreateDirectoryObject,
	index_ZwCreateEnlistment,
	index_ZwCreateEvent,
	index_ZwCreateEventPair,
	index_ZwCreateFile,
	index_ZwCreateIoCompletion,
	index_ZwCreateJobObject,
	index_ZwCreateJobSet,
	index_ZwCreateKey,
	index_ZwCreateKeyTransacted,
	index_ZwCreateKeyedEvent,
	index_ZwCreateMailslotFile,
	index_ZwCreateMutant,
	index_ZwCreateNamedPipeFile,
	index_ZwCreatePagingFile,
	index_ZwCreatePort,
	index_ZwCreatePrivateNamespace,
	index_ZwCreateProcess,
	index_ZwCreateProcessEx,
	index_ZwCreateProfile,
	index_ZwCreateProfileEx,
	index_ZwCreateResourceManager,
	index_ZwCreateSection,
	index_ZwCreateSemaphore,
	index_ZwCreateSymbolicLinkObject,
	index_ZwCreateThread,
	index_ZwCreateThreadEx,
	index_ZwCreateTimer,
	index_ZwCreateToken,
	index_ZwCreateTransaction,
	index_ZwCreateTransactionManager,
	index_ZwCreateUserProcess,
	index_ZwCreateWaitablePort,
	index_ZwCreateWorkerFactory,
	index_ZwDebugActiveProcess,
	index_ZwDebugContinue,
	index_ZwDelayExecution,
	index_ZwDeleteAtom,
	index_ZwDeleteBootEntry,
	index_ZwDeleteDriverEntry,
	index_ZwDeleteFile,
	index_ZwDeleteKey,
	index_ZwDeleteObjectAuditAlarm,
	index_ZwDeletePrivateNamespace,
	index_ZwDeleteValueKey,
	index_ZwDeviceIoControlFile,
	index_ZwDisableLastKnownGood,
	index_ZwDisplayString,
	index_ZwDrawText,
	index_ZwDuplicateObject,
	index_ZwDuplicateToken,
	index_ZwEnableLastKnownGood,
	index_ZwEnumerateBootEntries,
	index_ZwEnumerateDriverEntries,
	index_ZwEnumerateKey,
	index_ZwEnumerateSystemEnvironmentValuesEx,
	index_ZwEnumerateTransactionObject,
	index_ZwEnumerateValueKey,
	index_ZwExtendSection,
	index_ZwFilterToken,
	index_ZwFindAtom,
	index_ZwFlushBuffersFile,
	index_ZwFlushInstallUILanguage,
	index_ZwFlushInstructionCache,
	index_ZwFlushKey,
	index_ZwFlushProcessWriteBuffers,
	index_ZwFlushVirtualMemory,
	index_ZwFlushWriteBuffer,
	index_ZwFreeUserPhysicalPages,
	index_ZwFreeVirtualMemory,
	index_ZwFreezeRegistry,
	index_ZwFreezeTransactions,
	index_ZwFsControlFile,
	index_ZwGetContextThread,
	index_ZwGetCurrentProcessorNumber,
	index_ZwGetDevicePowerState,
	index_ZwGetMUIRegistryInfo,
	index_ZwGetNextProcess,
	index_ZwGetNextThread,
	index_ZwGetNlsSectionPtr,
	index_ZwGetNotificationResourceManager,
	index_ZwGetPlugPlayEvent,
	index_ZwGetWriteWatch,
	index_ZwImpersonateAnonymousToken,
	index_ZwImpersonateClientOfPort,
	index_ZwImpersonateThread,
	index_ZwInitializeNlsFiles,
	index_ZwInitializeRegistry,
	index_ZwInitiatePowerAction,
	index_ZwIsProcessInJob,
	index_ZwIsSystemResumeAutomatic,
	index_ZwIsUILanguageComitted,
	index_ZwListenPort,
	index_ZwLoadDriver,
	index_ZwLoadKey,
	index_ZwLoadKey2,
	index_ZwLoadKeyEx,
	index_ZwLockFile,
	index_ZwLockProductActivationKeys,
	index_ZwLockRegistryKey,
	index_ZwLockVirtualMemory,
	index_ZwMakePermanentObject,
	index_ZwMakeTemporaryObject,
	index_ZwMapCMFModule,
	index_ZwMapUserPhysicalPages,
	index_ZwMapUserPhysicalPagesScatter,
	index_ZwMapViewOfSection,
	index_ZwModifyBootEntry,
	index_ZwModifyDriverEntry,
	index_ZwNotifyChangeDirectoryFile,
	index_ZwNotifyChangeKey,
	index_ZwNotifyChangeMultipleKeys,
	index_ZwNotifyChangeSession,
	index_ZwOpenDirectoryObject,
	index_ZwOpenEnlistment,
	index_ZwOpenEvent,
	index_ZwOpenEventPair,
	index_ZwOpenFile,
	index_ZwOpenIoCompletion,
	index_ZwOpenJobObject,
	index_ZwOpenKey,
	index_ZwOpenKeyEx,
	index_ZwOpenKeyTransacted,
	index_ZwOpenKeyTransactedEx,
	index_ZwOpenKeyedEvent,
	index_ZwOpenMutant,
	index_ZwOpenObjectAuditAlarm,
	index_ZwOpenPrivateNamespace,
	index_ZwOpenProcess,
	index_ZwOpenProcessToken,
	index_ZwOpenProcessTokenEx,
	index_ZwOpenResourceManager,
	index_ZwOpenSection,
	index_ZwOpenSemaphore,
	index_ZwOpenSession,
	index_ZwOpenSymbolicLinkObject,
	index_ZwOpenThread,
	index_ZwOpenThreadToken,
	index_ZwOpenThreadTokenEx,
	index_ZwOpenTimer,
	index_ZwOpenTransaction,
	index_ZwOpenTransactionManager,
	index_ZwPlugPlayControl,
	index_ZwPowerInformation,
	index_ZwPrePrepareComplete,
	index_ZwPrePrepareEnlistment,
	index_ZwPrepareComplete,
	index_ZwPrepareEnlistment,
	index_ZwPrivilegeCheck,
	index_ZwPrivilegeObjectAuditAlarm,
	index_ZwPrivilegedServiceAuditAlarm,
	index_ZwPropagationComplete,
	index_ZwPropagationFailed,
	index_ZwProtectVirtualMemory,
	index_ZwPulseEvent,
	index_ZwQueryAttributesFile,
	index_ZwQueryBootEntryOrder,
	index_ZwQueryBootOptions,
	index_ZwQueryDebugFilterState,
	index_ZwQueryDefaultLocale,
	index_ZwQueryDefaultUILanguage,
	index_ZwQueryDirectoryFile,
	index_ZwQueryDirectoryObject,
	index_ZwQueryDriverEntryOrder,
	index_ZwQueryEaFile,
	index_ZwQueryEvent,
	index_ZwQueryFullAttributesFile,
	index_ZwQueryInformationAtom,
	index_ZwQueryInformationEnlistment,
	index_ZwQueryInformationFile,
	index_ZwQueryInformationJobObject,
	index_ZwQueryInformationPort,
	index_ZwQueryInformationProcess,
	index_ZwQueryInformationResourceManager,
	index_ZwQueryInformationThread,
	index_ZwQueryInformationToken,
	index_ZwQueryInformationTransaction,
	index_ZwQueryInformationTransactionManager,
	index_ZwQueryInformationWorkerFactory,
	index_ZwQueryInstallUILanguage,
	index_ZwQueryIntervalProfile,
	index_ZwQueryIoCompletion,
	index_ZwQueryKey,
	index_ZwQueryLicenseValue,
	index_ZwQueryMultipleValueKey,
	index_ZwQueryMutant,
	index_ZwQueryObject,
	index_ZwQueryOpenSubKeys,
	index_ZwQueryOpenSubKeysEx,
	index_ZwQueryPerformanceCounter,
	index_ZwQueryPortInformationProcess,
	index_ZwQueryQuotaInformationFile,
	index_ZwQuerySection,
	index_ZwQuerySecurityAttributesToken,
	index_ZwQuerySecurityObject,
	index_ZwQuerySemaphore,
	index_ZwQuerySymbolicLinkObject,
	index_ZwQuerySystemEnvironmentValue,
	index_ZwQuerySystemEnvironmentValueEx,
	index_ZwQuerySystemInformation,
	index_ZwQuerySystemInformationEx,
	index_ZwQuerySystemTime,
	index_ZwQueryTimer,
	index_ZwQueryTimerResolution,
	index_ZwQueryValueKey,
	index_ZwQueryVirtualMemory,
	index_ZwQueryVolumeInformationFile,
	index_ZwQueueApcThread,
	index_ZwQueueApcThreadEx,
	index_ZwRaiseException,
	index_ZwRaiseHardError,
	index_ZwReadFile,
	index_ZwReadFileScatter,
	index_ZwReadOnlyEnlistment,
	index_ZwReadRequestData,
	index_ZwReadVirtualMemory,
	index_ZwRecoverEnlistment,
	index_ZwRecoverResourceManager,
	index_ZwRecoverTransactionManager,
	index_ZwRegisterProtocolAddressInformation,
	index_ZwRegisterThreadTerminatePort,
	index_ZwReleaseKeyedEvent,
	index_ZwReleaseMutant,
	index_ZwReleaseSemaphore,
	index_ZwReleaseWorkerFactoryWorker,
	index_ZwRemoveIoCompletion,
	index_ZwRemoveIoCompletionEx,
	index_ZwRemoveProcessDebug,
	index_ZwRenameKey,
	index_ZwRenameTransactionManager,
	index_ZwReplaceKey,
	index_ZwReplacePartitionUnit,
	index_ZwReplyPort,
	index_ZwReplyWaitReceivePort,
	index_ZwReplyWaitReceivePortEx,
	index_ZwReplyWaitReplyPort,
	index_ZwRequestPort,
	index_ZwRequestWaitReplyPort,
	index_ZwResetEvent,
	index_ZwResetWriteWatch,
	index_ZwRestoreKey,
	index_ZwResumeProcess,
	index_ZwResumeThread,
	index_ZwRollbackComplete,
	index_ZwRollbackEnlistment,
	index_ZwRollbackTransaction,
	index_ZwRollforwardTransactionManager,
	index_ZwSaveKey,
	index_ZwSaveKeyEx,
	index_ZwSaveMergedKeys,
	index_ZwSecureConnectPort,
	index_ZwSerializeBoot,
	index_ZwSetBootEntryOrder,
	index_ZwSetBootOptions,
	index_ZwSetContextThread,
	index_ZwSetDebugFilterState,
	index_ZwSetDefaultHardErrorPort,
	index_ZwSetDefaultLocale,
	index_ZwSetDefaultUILanguage,
	index_ZwSetDriverEntryOrder,
	index_ZwSetEaFile,
	index_ZwSetEvent,
	index_ZwSetEventBoostPriority,
	index_ZwSetHighEventPair,
	index_ZwSetHighWaitLowEventPair,
	index_ZwSetInformationDebugObject,
	index_ZwSetInformationEnlistment,
	index_ZwSetInformationFile,
	index_ZwSetInformationJobObject,
	index_ZwSetInformationKey,
	index_ZwSetInformationObject,
	index_ZwSetInformationProcess,
	index_ZwSetInformationResourceManager,
	index_ZwSetInformationThread,
	index_ZwSetInformationToken,
	index_ZwSetInformationTransaction,
	index_ZwSetInformationTransactionManager,
	index_ZwSetInformationWorkerFactory,
	index_ZwSetIntervalProfile,
	index_ZwSetIoCompletion,
	index_ZwSetIoCompletionEx,
	index_ZwSetLdtEntries,
	index_ZwSetLowEventPair,
	index_ZwSetLowWaitHighEventPair,
	index_ZwSetQuotaInformationFile,
	index_ZwSetSecurityObject,
	index_ZwSetSystemEnvironmentValue,
	index_ZwSetSystemEnvironmentValueEx,
	index_ZwSetSystemInformation,
	index_ZwSetSystemPowerState,
	index_ZwSetSystemTime,
	index_ZwSetThreadExecutionState,
	index_ZwSetTimer,
	index_ZwSetTimerEx,
	index_ZwSetTimerResolution,
	index_ZwSetUuidSeed,
	index_ZwSetValueKey,
	index_ZwSetVolumeInformationFile,
	index_ZwShutdownSystem,
	index_ZwShutdownWorkerFactory,
	index_ZwSignalAndWaitForSingleObject,
	index_ZwSinglePhaseReject,
	index_ZwStartProfile,
	index_ZwStopProfile,
	index_ZwSuspendProcess,
	index_ZwSuspendThread,
	index_ZwSystemDebugControl,
	index_ZwTerminateJobObject,
	index_ZwTerminateProcess,
	index_ZwTerminateThread,
	index_ZwTestAlert,
	index_ZwThawRegistry,
	index_ZwThawTransactions,
	index_ZwTraceControl,
	index_ZwTraceEvent,
	index_ZwTranslateFilePath,
	index_ZwUmsThreadYield,
	index_ZwUnloadDriver,
	index_ZwUnloadKey,
	index_ZwUnloadKey2,
	index_ZwUnloadKeyEx,
	index_ZwUnlockFile,
	index_ZwUnlockVirtualMemory,
	index_ZwUnmapViewOfSection,
	index_ZwVdmControl,
	index_ZwWaitForDebugEvent,
	index_ZwWaitForKeyedEvent,
	index_ZwWaitForMultipleObjects,
	index_ZwWaitForMultipleObjects32,
	index_ZwWaitForSingleObject,
	index_ZwWaitForWorkViaWorkerFactory,
	index_ZwWaitHighEventPair,
	index_ZwWaitLowEventPair,
	index_ZwWorkerFactoryWorkerReady,
	index_ZwWriteFile,
	index_ZwWriteFileGather,
	index_ZwWriteRequestData,
	index_ZwWriteVirtualMemory,
	index_ZwYieldExecution,
	index_wow64_max
}wow64_index;


#if 1
char fn_ZwAcceptConnectPort[]="ZwAcceptConnectPort";
char fn_ZwAccessCheck[]="ZwAccessCheck";
char fn_ZwAccessCheckAndAuditAlarm[]="ZwAccessCheckAndAuditAlarm";
char fn_ZwAccessCheckByType[]="ZwAccessCheckByType";
char fn_ZwAccessCheckByTypeAndAuditAlarm[]="ZwAccessCheckByTypeAndAuditAlarm";
char fn_ZwAccessCheckByTypeResultList[]="ZwAccessCheckByTypeResultList";
char fn_ZwAccessCheckByTypeResultListAndAuditAlarm[]="ZwAccessCheckByTypeResultListAndAuditAlarm";
char fn_ZwAccessCheckByTypeResultListAndAuditAlarmByHandle[]="ZwAccessCheckByTypeResultListAndAuditAlarmByHandle";
char fn_ZwAddAtom[]="ZwAddAtom";
char fn_ZwAddBootEntry[]="ZwAddBootEntry";
char fn_ZwAddDriverEntry[]="ZwAddDriverEntry";
char fn_ZwAdjustGroupsToken[]="ZwAdjustGroupsToken";
char fn_ZwAdjustPrivilegesToken[]="ZwAdjustPrivilegesToken";
char fn_ZwAlertResumeThread[]="ZwAlertResumeThread";
char fn_ZwAlertThread[]="ZwAlertThread";
char fn_ZwAllocateLocallyUniqueId[]="ZwAllocateLocallyUniqueId";
char fn_ZwAllocateReserveObject[]="ZwAllocateReserveObject";
char fn_ZwAllocateUserPhysicalPages[]="ZwAllocateUserPhysicalPages";
char fn_ZwAllocateUuids[]="ZwAllocateUuids";
char fn_ZwAllocateVirtualMemory[]="ZwAllocateVirtualMemory";
char fn_ZwAlpcAcceptConnectPort[]="ZwAlpcAcceptConnectPort";
char fn_ZwAlpcCancelMessage[]="ZwAlpcCancelMessage";
char fn_ZwAlpcConnectPort[]="ZwAlpcConnectPort";
char fn_ZwAlpcCreatePort[]="ZwAlpcCreatePort";
char fn_ZwAlpcCreatePortSection[]="ZwAlpcCreatePortSection";
char fn_ZwAlpcCreateResourceReserve[]="ZwAlpcCreateResourceReserve";
char fn_ZwAlpcCreateSectionView[]="ZwAlpcCreateSectionView";
char fn_ZwAlpcCreateSecurityContext[]="ZwAlpcCreateSecurityContext";
char fn_ZwAlpcDeletePortSection[]="ZwAlpcDeletePortSection";
char fn_ZwAlpcDeleteResourceReserve[]="ZwAlpcDeleteResourceReserve";
char fn_ZwAlpcDeleteSectionView[]="ZwAlpcDeleteSectionView";
char fn_ZwAlpcDeleteSecurityContext[]="ZwAlpcDeleteSecurityContext";
char fn_ZwAlpcDisconnectPort[]="ZwAlpcDisconnectPort";
char fn_ZwAlpcImpersonateClientOfPort[]="ZwAlpcImpersonateClientOfPort";
char fn_ZwAlpcOpenSenderProcess[]="ZwAlpcOpenSenderProcess";
char fn_ZwAlpcOpenSenderThread[]="ZwAlpcOpenSenderThread";
char fn_ZwAlpcQueryInformation[]="ZwAlpcQueryInformation";
char fn_ZwAlpcQueryInformationMessage[]="ZwAlpcQueryInformationMessage";
char fn_ZwAlpcRevokeSecurityContext[]="ZwAlpcRevokeSecurityContext";
char fn_ZwAlpcSendWaitReceivePort[]="ZwAlpcSendWaitReceivePort";
char fn_ZwAlpcSetInformation[]="ZwAlpcSetInformation";
char fn_ZwApphelpCacheControl[]="ZwApphelpCacheControl";
char fn_ZwAreMappedFilesTheSame[]="ZwAreMappedFilesTheSame";
char fn_ZwAssignProcessToJobObject[]="ZwAssignProcessToJobObject";
char fn_ZwCallbackReturn[]="ZwCallbackReturn";
char fn_ZwCancelIoFile[]="ZwCancelIoFile";
char fn_ZwCancelIoFileEx[]="ZwCancelIoFileEx";
char fn_ZwCancelSynchronousIoFile[]="ZwCancelSynchronousIoFile";
char fn_ZwCancelTimer[]="ZwCancelTimer";
char fn_ZwClearEvent[]="ZwClearEvent";
char fn_ZwClose[]="ZwClose";
char fn_ZwCloseObjectAuditAlarm[]="ZwCloseObjectAuditAlarm";
char fn_ZwCommitComplete[]="ZwCommitComplete";
char fn_ZwCommitEnlistment[]="ZwCommitEnlistment";
char fn_ZwCommitTransaction[]="ZwCommitTransaction";
char fn_ZwCompactKeys[]="ZwCompactKeys";
char fn_ZwCompareTokens[]="ZwCompareTokens";
char fn_ZwCompleteConnectPort[]="ZwCompleteConnectPort";
char fn_ZwCompressKey[]="ZwCompressKey";
char fn_ZwConnectPort[]="ZwConnectPort";
char fn_ZwContinue[]="ZwContinue";
char fn_ZwCreateDebugObject[]="ZwCreateDebugObject";
char fn_ZwCreateDirectoryObject[]="ZwCreateDirectoryObject";
char fn_ZwCreateEnlistment[]="ZwCreateEnlistment";
char fn_ZwCreateEvent[]="ZwCreateEvent";
char fn_ZwCreateEventPair[]="ZwCreateEventPair";
char fn_ZwCreateFile[]="ZwCreateFile";
char fn_ZwCreateIoCompletion[]="ZwCreateIoCompletion";
char fn_ZwCreateJobObject[]="ZwCreateJobObject";
char fn_ZwCreateJobSet[]="ZwCreateJobSet";
char fn_ZwCreateKey[]="ZwCreateKey";
char fn_ZwCreateKeyTransacted[]="ZwCreateKeyTransacted";
char fn_ZwCreateKeyedEvent[]="ZwCreateKeyedEvent";
char fn_ZwCreateMailslotFile[]="ZwCreateMailslotFile";
char fn_ZwCreateMutant[]="ZwCreateMutant";
char fn_ZwCreateNamedPipeFile[]="ZwCreateNamedPipeFile";
char fn_ZwCreatePagingFile[]="ZwCreatePagingFile";
char fn_ZwCreatePort[]="ZwCreatePort";
char fn_ZwCreatePrivateNamespace[]="ZwCreatePrivateNamespace";
char fn_ZwCreateProcess[]="ZwCreateProcess";
char fn_ZwCreateProcessEx[]="ZwCreateProcessEx";
char fn_ZwCreateProfile[]="ZwCreateProfile";
char fn_ZwCreateProfileEx[]="ZwCreateProfileEx";
char fn_ZwCreateResourceManager[]="ZwCreateResourceManager";
char fn_ZwCreateSection[]="ZwCreateSection";
char fn_ZwCreateSemaphore[]="ZwCreateSemaphore";
char fn_ZwCreateSymbolicLinkObject[]="ZwCreateSymbolicLinkObject";
char fn_ZwCreateThread[]="ZwCreateThread";
char fn_ZwCreateThreadEx[]="ZwCreateThreadEx";
char fn_ZwCreateTimer[]="ZwCreateTimer";
char fn_ZwCreateToken[]="ZwCreateToken";
char fn_ZwCreateTransaction[]="ZwCreateTransaction";
char fn_ZwCreateTransactionManager[]="ZwCreateTransactionManager";
char fn_ZwCreateUserProcess[]="ZwCreateUserProcess";
char fn_ZwCreateWaitablePort[]="ZwCreateWaitablePort";
char fn_ZwCreateWorkerFactory[]="ZwCreateWorkerFactory";
char fn_ZwDebugActiveProcess[]="ZwDebugActiveProcess";
char fn_ZwDebugContinue[]="ZwDebugContinue";
char fn_ZwDelayExecution[]="ZwDelayExecution";
char fn_ZwDeleteAtom[]="ZwDeleteAtom";
char fn_ZwDeleteBootEntry[]="ZwDeleteBootEntry";
char fn_ZwDeleteDriverEntry[]="ZwDeleteDriverEntry";
char fn_ZwDeleteFile[]="ZwDeleteFile";
char fn_ZwDeleteKey[]="ZwDeleteKey";
char fn_ZwDeleteObjectAuditAlarm[]="ZwDeleteObjectAuditAlarm";
char fn_ZwDeletePrivateNamespace[]="ZwDeletePrivateNamespace";
char fn_ZwDeleteValueKey[]="ZwDeleteValueKey";
char fn_ZwDeviceIoControlFile[]="ZwDeviceIoControlFile";
char fn_ZwDisableLastKnownGood[]="ZwDisableLastKnownGood";
char fn_ZwDisplayString[]="ZwDisplayString";
char fn_ZwDrawText[]="ZwDrawText";
char fn_ZwDuplicateObject[]="ZwDuplicateObject";
char fn_ZwDuplicateToken[]="ZwDuplicateToken";
char fn_ZwEnableLastKnownGood[]="ZwEnableLastKnownGood";
char fn_ZwEnumerateBootEntries[]="ZwEnumerateBootEntries";
char fn_ZwEnumerateDriverEntries[]="ZwEnumerateDriverEntries";
char fn_ZwEnumerateKey[]="ZwEnumerateKey";
char fn_ZwEnumerateSystemEnvironmentValuesEx[]="ZwEnumerateSystemEnvironmentValuesEx";
char fn_ZwEnumerateTransactionObject[]="ZwEnumerateTransactionObject";
char fn_ZwEnumerateValueKey[]="ZwEnumerateValueKey";
char fn_ZwExtendSection[]="ZwExtendSection";
char fn_ZwFilterToken[]="ZwFilterToken";
char fn_ZwFindAtom[]="ZwFindAtom";
char fn_ZwFlushBuffersFile[]="ZwFlushBuffersFile";
char fn_ZwFlushInstallUILanguage[]="ZwFlushInstallUILanguage";
char fn_ZwFlushInstructionCache[]="ZwFlushInstructionCache";
char fn_ZwFlushKey[]="ZwFlushKey";
char fn_ZwFlushProcessWriteBuffers[]="ZwFlushProcessWriteBuffers";
char fn_ZwFlushVirtualMemory[]="ZwFlushVirtualMemory";
char fn_ZwFlushWriteBuffer[]="ZwFlushWriteBuffer";
char fn_ZwFreeUserPhysicalPages[]="ZwFreeUserPhysicalPages";
char fn_ZwFreeVirtualMemory[]="ZwFreeVirtualMemory";
char fn_ZwFreezeRegistry[]="ZwFreezeRegistry";
char fn_ZwFreezeTransactions[]="ZwFreezeTransactions";
char fn_ZwFsControlFile[]="ZwFsControlFile";
char fn_ZwGetContextThread[]="ZwGetContextThread";
char fn_ZwGetCurrentProcessorNumber[]="ZwGetCurrentProcessorNumber";
char fn_ZwGetDevicePowerState[]="ZwGetDevicePowerState";
char fn_ZwGetMUIRegistryInfo[]="ZwGetMUIRegistryInfo";
char fn_ZwGetNextProcess[]="ZwGetNextProcess";
char fn_ZwGetNextThread[]="ZwGetNextThread";
char fn_ZwGetNlsSectionPtr[]="ZwGetNlsSectionPtr";
char fn_ZwGetNotificationResourceManager[]="ZwGetNotificationResourceManager";
char fn_ZwGetPlugPlayEvent[]="ZwGetPlugPlayEvent";
char fn_ZwGetWriteWatch[]="ZwGetWriteWatch";
char fn_ZwImpersonateAnonymousToken[]="ZwImpersonateAnonymousToken";
char fn_ZwImpersonateClientOfPort[]="ZwImpersonateClientOfPort";
char fn_ZwImpersonateThread[]="ZwImpersonateThread";
char fn_ZwInitializeNlsFiles[]="ZwInitializeNlsFiles";
char fn_ZwInitializeRegistry[]="ZwInitializeRegistry";
char fn_ZwInitiatePowerAction[]="ZwInitiatePowerAction";
char fn_ZwIsProcessInJob[]="ZwIsProcessInJob";
char fn_ZwIsSystemResumeAutomatic[]="ZwIsSystemResumeAutomatic";
char fn_ZwIsUILanguageComitted[]="ZwIsUILanguageComitted";
char fn_ZwListenPort[]="ZwListenPort";
char fn_ZwLoadDriver[]="ZwLoadDriver";
char fn_ZwLoadKey[]="ZwLoadKey";
char fn_ZwLoadKey2[]="ZwLoadKey2";
char fn_ZwLoadKeyEx[]="ZwLoadKeyEx";
char fn_ZwLockFile[]="ZwLockFile";
char fn_ZwLockProductActivationKeys[]="ZwLockProductActivationKeys";
char fn_ZwLockRegistryKey[]="ZwLockRegistryKey";
char fn_ZwLockVirtualMemory[]="ZwLockVirtualMemory";
char fn_ZwMakePermanentObject[]="ZwMakePermanentObject";
char fn_ZwMakeTemporaryObject[]="ZwMakeTemporaryObject";
char fn_ZwMapCMFModule[]="ZwMapCMFModule";
char fn_ZwMapUserPhysicalPages[]="ZwMapUserPhysicalPages";
char fn_ZwMapUserPhysicalPagesScatter[]="ZwMapUserPhysicalPagesScatter";
char fn_ZwMapViewOfSection[]="ZwMapViewOfSection";
char fn_ZwModifyBootEntry[]="ZwModifyBootEntry";
char fn_ZwModifyDriverEntry[]="ZwModifyDriverEntry";
char fn_ZwNotifyChangeDirectoryFile[]="ZwNotifyChangeDirectoryFile";
char fn_ZwNotifyChangeKey[]="ZwNotifyChangeKey";
char fn_ZwNotifyChangeMultipleKeys[]="ZwNotifyChangeMultipleKeys";
char fn_ZwNotifyChangeSession[]="ZwNotifyChangeSession";
char fn_ZwOpenDirectoryObject[]="ZwOpenDirectoryObject";
char fn_ZwOpenEnlistment[]="ZwOpenEnlistment";
char fn_ZwOpenEvent[]="ZwOpenEvent";
char fn_ZwOpenEventPair[]="ZwOpenEventPair";
char fn_ZwOpenFile[]="ZwOpenFile";
char fn_ZwOpenIoCompletion[]="ZwOpenIoCompletion";
char fn_ZwOpenJobObject[]="ZwOpenJobObject";
char fn_ZwOpenKey[]="ZwOpenKey";
char fn_ZwOpenKeyEx[]="ZwOpenKeyEx";
char fn_ZwOpenKeyTransacted[]="ZwOpenKeyTransacted";
char fn_ZwOpenKeyTransactedEx[]="ZwOpenKeyTransactedEx";
char fn_ZwOpenKeyedEvent[]="ZwOpenKeyedEvent";
char fn_ZwOpenMutant[]="ZwOpenMutant";
char fn_ZwOpenObjectAuditAlarm[]="ZwOpenObjectAuditAlarm";
char fn_ZwOpenPrivateNamespace[]="ZwOpenPrivateNamespace";
char fn_ZwOpenProcess[]="ZwOpenProcess";
char fn_ZwOpenProcessToken[]="ZwOpenProcessToken";
char fn_ZwOpenProcessTokenEx[]="ZwOpenProcessTokenEx";
char fn_ZwOpenResourceManager[]="ZwOpenResourceManager";
char fn_ZwOpenSection[]="ZwOpenSection";
char fn_ZwOpenSemaphore[]="ZwOpenSemaphore";
char fn_ZwOpenSession[]="ZwOpenSession";
char fn_ZwOpenSymbolicLinkObject[]="ZwOpenSymbolicLinkObject";
char fn_ZwOpenThread[]="ZwOpenThread";
char fn_ZwOpenThreadToken[]="ZwOpenThreadToken";
char fn_ZwOpenThreadTokenEx[]="ZwOpenThreadTokenEx";
char fn_ZwOpenTimer[]="ZwOpenTimer";
char fn_ZwOpenTransaction[]="ZwOpenTransaction";
char fn_ZwOpenTransactionManager[]="ZwOpenTransactionManager";
char fn_ZwPlugPlayControl[]="ZwPlugPlayControl";
char fn_ZwPowerInformation[]="ZwPowerInformation";
char fn_ZwPrePrepareComplete[]="ZwPrePrepareComplete";
char fn_ZwPrePrepareEnlistment[]="ZwPrePrepareEnlistment";
char fn_ZwPrepareComplete[]="ZwPrepareComplete";
char fn_ZwPrepareEnlistment[]="ZwPrepareEnlistment";
char fn_ZwPrivilegeCheck[]="ZwPrivilegeCheck";
char fn_ZwPrivilegeObjectAuditAlarm[]="ZwPrivilegeObjectAuditAlarm";
char fn_ZwPrivilegedServiceAuditAlarm[]="ZwPrivilegedServiceAuditAlarm";
char fn_ZwPropagationComplete[]="ZwPropagationComplete";
char fn_ZwPropagationFailed[]="ZwPropagationFailed";
char fn_ZwProtectVirtualMemory[]="ZwProtectVirtualMemory";
char fn_ZwPulseEvent[]="ZwPulseEvent";
char fn_ZwQueryAttributesFile[]="ZwQueryAttributesFile";
char fn_ZwQueryBootEntryOrder[]="ZwQueryBootEntryOrder";
char fn_ZwQueryBootOptions[]="ZwQueryBootOptions";
char fn_ZwQueryDebugFilterState[]="ZwQueryDebugFilterState";
char fn_ZwQueryDefaultLocale[]="ZwQueryDefaultLocale";
char fn_ZwQueryDefaultUILanguage[]="ZwQueryDefaultUILanguage";
char fn_ZwQueryDirectoryFile[]="ZwQueryDirectoryFile";
char fn_ZwQueryDirectoryObject[]="ZwQueryDirectoryObject";
char fn_ZwQueryDriverEntryOrder[]="ZwQueryDriverEntryOrder";
char fn_ZwQueryEaFile[]="ZwQueryEaFile";
char fn_ZwQueryEvent[]="ZwQueryEvent";
char fn_ZwQueryFullAttributesFile[]="ZwQueryFullAttributesFile";
char fn_ZwQueryInformationAtom[]="ZwQueryInformationAtom";
char fn_ZwQueryInformationEnlistment[]="ZwQueryInformationEnlistment";
char fn_ZwQueryInformationFile[]="ZwQueryInformationFile";
char fn_ZwQueryInformationJobObject[]="ZwQueryInformationJobObject";
char fn_ZwQueryInformationPort[]="ZwQueryInformationPort";
char fn_ZwQueryInformationProcess[]="ZwQueryInformationProcess";
char fn_ZwQueryInformationResourceManager[]="ZwQueryInformationResourceManager";
char fn_ZwQueryInformationThread[]="ZwQueryInformationThread";
char fn_ZwQueryInformationToken[]="ZwQueryInformationToken";
char fn_ZwQueryInformationTransaction[]="ZwQueryInformationTransaction";
char fn_ZwQueryInformationTransactionManager[]="ZwQueryInformationTransactionManager";
char fn_ZwQueryInformationWorkerFactory[]="ZwQueryInformationWorkerFactory";
char fn_ZwQueryInstallUILanguage[]="ZwQueryInstallUILanguage";
char fn_ZwQueryIntervalProfile[]="ZwQueryIntervalProfile";
char fn_ZwQueryIoCompletion[]="ZwQueryIoCompletion";
char fn_ZwQueryKey[]="ZwQueryKey";
char fn_ZwQueryLicenseValue[]="ZwQueryLicenseValue";
char fn_ZwQueryMultipleValueKey[]="ZwQueryMultipleValueKey";
char fn_ZwQueryMutant[]="ZwQueryMutant";
char fn_ZwQueryObject[]="ZwQueryObject";
char fn_ZwQueryOpenSubKeys[]="ZwQueryOpenSubKeys";
char fn_ZwQueryOpenSubKeysEx[]="ZwQueryOpenSubKeysEx";
char fn_ZwQueryPerformanceCounter[]="ZwQueryPerformanceCounter";
char fn_ZwQueryPortInformationProcess[]="ZwQueryPortInformationProcess";
char fn_ZwQueryQuotaInformationFile[]="ZwQueryQuotaInformationFile";
char fn_ZwQuerySection[]="ZwQuerySection";
char fn_ZwQuerySecurityAttributesToken[]="ZwQuerySecurityAttributesToken";
char fn_ZwQuerySecurityObject[]="ZwQuerySecurityObject";
char fn_ZwQuerySemaphore[]="ZwQuerySemaphore";
char fn_ZwQuerySymbolicLinkObject[]="ZwQuerySymbolicLinkObject";
char fn_ZwQuerySystemEnvironmentValue[]="ZwQuerySystemEnvironmentValue";
char fn_ZwQuerySystemEnvironmentValueEx[]="ZwQuerySystemEnvironmentValueEx";
char fn_ZwQuerySystemInformation[]="ZwQuerySystemInformation";
char fn_ZwQuerySystemInformationEx[]="ZwQuerySystemInformationEx";
char fn_ZwQuerySystemTime[]="ZwQuerySystemTime";
char fn_ZwQueryTimer[]="ZwQueryTimer";
char fn_ZwQueryTimerResolution[]="ZwQueryTimerResolution";
char fn_ZwQueryValueKey[]="ZwQueryValueKey";
char fn_ZwQueryVirtualMemory[]="ZwQueryVirtualMemory";
char fn_ZwQueryVolumeInformationFile[]="ZwQueryVolumeInformationFile";
char fn_ZwQueueApcThread[]="ZwQueueApcThread";
char fn_ZwQueueApcThreadEx[]="ZwQueueApcThreadEx";
char fn_ZwRaiseException[]="ZwRaiseException";
char fn_ZwRaiseHardError[]="ZwRaiseHardError";
char fn_ZwReadFile[]="ZwReadFile";
char fn_ZwReadFileScatter[]="ZwReadFileScatter";
char fn_ZwReadOnlyEnlistment[]="ZwReadOnlyEnlistment";
char fn_ZwReadRequestData[]="ZwReadRequestData";
char fn_ZwReadVirtualMemory[]="ZwReadVirtualMemory";
char fn_ZwRecoverEnlistment[]="ZwRecoverEnlistment";
char fn_ZwRecoverResourceManager[]="ZwRecoverResourceManager";
char fn_ZwRecoverTransactionManager[]="ZwRecoverTransactionManager";
char fn_ZwRegisterProtocolAddressInformation[]="ZwRegisterProtocolAddressInformation";
char fn_ZwRegisterThreadTerminatePort[]="ZwRegisterThreadTerminatePort";
char fn_ZwReleaseKeyedEvent[]="ZwReleaseKeyedEvent";
char fn_ZwReleaseMutant[]="ZwReleaseMutant";
char fn_ZwReleaseSemaphore[]="ZwReleaseSemaphore";
char fn_ZwReleaseWorkerFactoryWorker[]="ZwReleaseWorkerFactoryWorker";
char fn_ZwRemoveIoCompletion[]="ZwRemoveIoCompletion";
char fn_ZwRemoveIoCompletionEx[]="ZwRemoveIoCompletionEx";
char fn_ZwRemoveProcessDebug[]="ZwRemoveProcessDebug";
char fn_ZwRenameKey[]="ZwRenameKey";
char fn_ZwRenameTransactionManager[]="ZwRenameTransactionManager";
char fn_ZwReplaceKey[]="ZwReplaceKey";
char fn_ZwReplacePartitionUnit[]="ZwReplacePartitionUnit";
char fn_ZwReplyPort[]="ZwReplyPort";
char fn_ZwReplyWaitReceivePort[]="ZwReplyWaitReceivePort";
char fn_ZwReplyWaitReceivePortEx[]="ZwReplyWaitReceivePortEx";
char fn_ZwReplyWaitReplyPort[]="ZwReplyWaitReplyPort";
char fn_ZwRequestPort[]="ZwRequestPort";
char fn_ZwRequestWaitReplyPort[]="ZwRequestWaitReplyPort";
char fn_ZwResetEvent[]="ZwResetEvent";
char fn_ZwResetWriteWatch[]="ZwResetWriteWatch";
char fn_ZwRestoreKey[]="ZwRestoreKey";
char fn_ZwResumeProcess[]="ZwResumeProcess";
char fn_ZwResumeThread[]="ZwResumeThread";
char fn_ZwRollbackComplete[]="ZwRollbackComplete";
char fn_ZwRollbackEnlistment[]="ZwRollbackEnlistment";
char fn_ZwRollbackTransaction[]="ZwRollbackTransaction";
char fn_ZwRollforwardTransactionManager[]="ZwRollforwardTransactionManager";
char fn_ZwSaveKey[]="ZwSaveKey";
char fn_ZwSaveKeyEx[]="ZwSaveKeyEx";
char fn_ZwSaveMergedKeys[]="ZwSaveMergedKeys";
char fn_ZwSecureConnectPort[]="ZwSecureConnectPort";
char fn_ZwSerializeBoot[]="ZwSerializeBoot";
char fn_ZwSetBootEntryOrder[]="ZwSetBootEntryOrder";
char fn_ZwSetBootOptions[]="ZwSetBootOptions";
char fn_ZwSetContextThread[]="ZwSetContextThread";
char fn_ZwSetDebugFilterState[]="ZwSetDebugFilterState";
char fn_ZwSetDefaultHardErrorPort[]="ZwSetDefaultHardErrorPort";
char fn_ZwSetDefaultLocale[]="ZwSetDefaultLocale";
char fn_ZwSetDefaultUILanguage[]="ZwSetDefaultUILanguage";
char fn_ZwSetDriverEntryOrder[]="ZwSetDriverEntryOrder";
char fn_ZwSetEaFile[]="ZwSetEaFile";
char fn_ZwSetEvent[]="ZwSetEvent";
char fn_ZwSetEventBoostPriority[]="ZwSetEventBoostPriority";
char fn_ZwSetHighEventPair[]="ZwSetHighEventPair";
char fn_ZwSetHighWaitLowEventPair[]="ZwSetHighWaitLowEventPair";
char fn_ZwSetInformationDebugObject[]="ZwSetInformationDebugObject";
char fn_ZwSetInformationEnlistment[]="ZwSetInformationEnlistment";
char fn_ZwSetInformationFile[]="ZwSetInformationFile";
char fn_ZwSetInformationJobObject[]="ZwSetInformationJobObject";
char fn_ZwSetInformationKey[]="ZwSetInformationKey";
char fn_ZwSetInformationObject[]="ZwSetInformationObject";
char fn_ZwSetInformationProcess[]="ZwSetInformationProcess";
char fn_ZwSetInformationResourceManager[]="ZwSetInformationResourceManager";
char fn_ZwSetInformationThread[]="ZwSetInformationThread";
char fn_ZwSetInformationToken[]="ZwSetInformationToken";
char fn_ZwSetInformationTransaction[]="ZwSetInformationTransaction";
char fn_ZwSetInformationTransactionManager[]="ZwSetInformationTransactionManager";
char fn_ZwSetInformationWorkerFactory[]="ZwSetInformationWorkerFactory";
char fn_ZwSetIntervalProfile[]="ZwSetIntervalProfile";
char fn_ZwSetIoCompletion[]="ZwSetIoCompletion";
char fn_ZwSetIoCompletionEx[]="ZwSetIoCompletionEx";
char fn_ZwSetLdtEntries[]="ZwSetLdtEntries";
char fn_ZwSetLowEventPair[]="ZwSetLowEventPair";
char fn_ZwSetLowWaitHighEventPair[]="ZwSetLowWaitHighEventPair";
char fn_ZwSetQuotaInformationFile[]="ZwSetQuotaInformationFile";
char fn_ZwSetSecurityObject[]="ZwSetSecurityObject";
char fn_ZwSetSystemEnvironmentValue[]="ZwSetSystemEnvironmentValue";
char fn_ZwSetSystemEnvironmentValueEx[]="ZwSetSystemEnvironmentValueEx";
char fn_ZwSetSystemInformation[]="ZwSetSystemInformation";
char fn_ZwSetSystemPowerState[]="ZwSetSystemPowerState";
char fn_ZwSetSystemTime[]="ZwSetSystemTime";
char fn_ZwSetThreadExecutionState[]="ZwSetThreadExecutionState";
char fn_ZwSetTimer[]="ZwSetTimer";
char fn_ZwSetTimerEx[]="ZwSetTimerEx";
char fn_ZwSetTimerResolution[]="ZwSetTimerResolution";
char fn_ZwSetUuidSeed[]="ZwSetUuidSeed";
char fn_ZwSetValueKey[]="ZwSetValueKey";
char fn_ZwSetVolumeInformationFile[]="ZwSetVolumeInformationFile";
char fn_ZwShutdownSystem[]="ZwShutdownSystem";
char fn_ZwShutdownWorkerFactory[]="ZwShutdownWorkerFactory";
char fn_ZwSignalAndWaitForSingleObject[]="ZwSignalAndWaitForSingleObject";
char fn_ZwSinglePhaseReject[]="ZwSinglePhaseReject";
char fn_ZwStartProfile[]="ZwStartProfile";
char fn_ZwStopProfile[]="ZwStopProfile";
char fn_ZwSuspendProcess[]="ZwSuspendProcess";
char fn_ZwSuspendThread[]="ZwSuspendThread";
char fn_ZwSystemDebugControl[]="ZwSystemDebugControl";
char fn_ZwTerminateJobObject[]="ZwTerminateJobObject";
char fn_ZwTerminateProcess[]="ZwTerminateProcess";
char fn_ZwTerminateThread[]="ZwTerminateThread";
char fn_ZwTestAlert[]="ZwTestAlert";
char fn_ZwThawRegistry[]="ZwThawRegistry";
char fn_ZwThawTransactions[]="ZwThawTransactions";
char fn_ZwTraceControl[]="ZwTraceControl";
char fn_ZwTraceEvent[]="ZwTraceEvent";
char fn_ZwTranslateFilePath[]="ZwTranslateFilePath";
char fn_ZwUmsThreadYield[]="ZwUmsThreadYield";
char fn_ZwUnloadDriver[]="ZwUnloadDriver";
char fn_ZwUnloadKey[]="ZwUnloadKey";
char fn_ZwUnloadKey2[]="ZwUnloadKey2";
char fn_ZwUnloadKeyEx[]="ZwUnloadKeyEx";
char fn_ZwUnlockFile[]="ZwUnlockFile";
char fn_ZwUnlockVirtualMemory[]="ZwUnlockVirtualMemory";
char fn_ZwUnmapViewOfSection[]="ZwUnmapViewOfSection";
char fn_ZwVdmControl[]="ZwVdmControl";
char fn_ZwWaitForDebugEvent[]="ZwWaitForDebugEvent";
char fn_ZwWaitForKeyedEvent[]="ZwWaitForKeyedEvent";
char fn_ZwWaitForMultipleObjects[]="ZwWaitForMultipleObjects";
char fn_ZwWaitForMultipleObjects32[]="ZwWaitForMultipleObjects32";
char fn_ZwWaitForSingleObject[]="ZwWaitForSingleObject";
char fn_ZwWaitForWorkViaWorkerFactory[]="ZwWaitForWorkViaWorkerFactory";
char fn_ZwWaitHighEventPair[]="ZwWaitHighEventPair";
char fn_ZwWaitLowEventPair[]="ZwWaitLowEventPair";
char fn_ZwWorkerFactoryWorkerReady[]="ZwWorkerFactoryWorkerReady";
char fn_ZwWriteFile[]="ZwWriteFile";
char fn_ZwWriteFileGather[]="ZwWriteFileGather";
char fn_ZwWriteRequestData[]="ZwWriteRequestData";
char fn_ZwWriteVirtualMemory[]="ZwWriteVirtualMemory";
char fn_ZwYieldExecution[]="ZwYieldExecution";
#endif

__int64 _thunk_w64_pfn_list[]={
	0,
	0,
	(__int64)&fn_ZwAcceptConnectPort,
	(__int64)&fn_ZwAccessCheck,
	(__int64)&fn_ZwAccessCheckAndAuditAlarm,
	(__int64)&fn_ZwAccessCheckByType,
	(__int64)&fn_ZwAccessCheckByTypeAndAuditAlarm,
	(__int64)&fn_ZwAccessCheckByTypeResultList,
	(__int64)&fn_ZwAccessCheckByTypeResultListAndAuditAlarm,
	(__int64)&fn_ZwAccessCheckByTypeResultListAndAuditAlarmByHandle,
	(__int64)&fn_ZwAddAtom,
	(__int64)&fn_ZwAddBootEntry,
	(__int64)&fn_ZwAddDriverEntry,
	(__int64)&fn_ZwAdjustGroupsToken,
	(__int64)&fn_ZwAdjustPrivilegesToken,
	(__int64)&fn_ZwAlertResumeThread,
	(__int64)&fn_ZwAlertThread,
	(__int64)&fn_ZwAllocateLocallyUniqueId,
	(__int64)&fn_ZwAllocateReserveObject,
	(__int64)&fn_ZwAllocateUserPhysicalPages,
	(__int64)&fn_ZwAllocateUuids,
	(__int64)&fn_ZwAllocateVirtualMemory,
	(__int64)&fn_ZwAlpcAcceptConnectPort,
	(__int64)&fn_ZwAlpcCancelMessage,
	(__int64)&fn_ZwAlpcConnectPort,
	(__int64)&fn_ZwAlpcCreatePort,
	(__int64)&fn_ZwAlpcCreatePortSection,
	(__int64)&fn_ZwAlpcCreateResourceReserve,
	(__int64)&fn_ZwAlpcCreateSectionView,
	(__int64)&fn_ZwAlpcCreateSecurityContext,
	(__int64)&fn_ZwAlpcDeletePortSection,
	(__int64)&fn_ZwAlpcDeleteResourceReserve,
	(__int64)&fn_ZwAlpcDeleteSectionView,
	(__int64)&fn_ZwAlpcDeleteSecurityContext,
	(__int64)&fn_ZwAlpcDisconnectPort,
	(__int64)&fn_ZwAlpcImpersonateClientOfPort,
	(__int64)&fn_ZwAlpcOpenSenderProcess,
	(__int64)&fn_ZwAlpcOpenSenderThread,
	(__int64)&fn_ZwAlpcQueryInformation,
	(__int64)&fn_ZwAlpcQueryInformationMessage,
	(__int64)&fn_ZwAlpcRevokeSecurityContext,
	(__int64)&fn_ZwAlpcSendWaitReceivePort,
	(__int64)&fn_ZwAlpcSetInformation,
	(__int64)&fn_ZwApphelpCacheControl,
	(__int64)&fn_ZwAreMappedFilesTheSame,
	(__int64)&fn_ZwAssignProcessToJobObject,
	(__int64)&fn_ZwCallbackReturn,
	(__int64)&fn_ZwCancelIoFile,
	(__int64)&fn_ZwCancelIoFileEx,
	(__int64)&fn_ZwCancelSynchronousIoFile,
	(__int64)&fn_ZwCancelTimer,
	(__int64)&fn_ZwClearEvent,
	(__int64)&fn_ZwClose,
	(__int64)&fn_ZwCloseObjectAuditAlarm,
	(__int64)&fn_ZwCommitComplete,
	(__int64)&fn_ZwCommitEnlistment,
	(__int64)&fn_ZwCommitTransaction,
	(__int64)&fn_ZwCompactKeys,
	(__int64)&fn_ZwCompareTokens,
	(__int64)&fn_ZwCompleteConnectPort,
	(__int64)&fn_ZwCompressKey,
	(__int64)&fn_ZwConnectPort,
	(__int64)&fn_ZwContinue,
	(__int64)&fn_ZwCreateDebugObject,
	(__int64)&fn_ZwCreateDirectoryObject,
	(__int64)&fn_ZwCreateEnlistment,
	(__int64)&fn_ZwCreateEvent,
	(__int64)&fn_ZwCreateEventPair,
	(__int64)&fn_ZwCreateFile,
	(__int64)&fn_ZwCreateIoCompletion,
	(__int64)&fn_ZwCreateJobObject,
	(__int64)&fn_ZwCreateJobSet,
	(__int64)&fn_ZwCreateKey,
	(__int64)&fn_ZwCreateKeyTransacted,
	(__int64)&fn_ZwCreateKeyedEvent,
	(__int64)&fn_ZwCreateMailslotFile,
	(__int64)&fn_ZwCreateMutant,
	(__int64)&fn_ZwCreateNamedPipeFile,
	(__int64)&fn_ZwCreatePagingFile,
	(__int64)&fn_ZwCreatePort,
	(__int64)&fn_ZwCreatePrivateNamespace,
	(__int64)&fn_ZwCreateProcess,
	(__int64)&fn_ZwCreateProcessEx,
	(__int64)&fn_ZwCreateProfile,
	(__int64)&fn_ZwCreateProfileEx,
	(__int64)&fn_ZwCreateResourceManager,
	(__int64)&fn_ZwCreateSection,
	(__int64)&fn_ZwCreateSemaphore,
	(__int64)&fn_ZwCreateSymbolicLinkObject,
	(__int64)&fn_ZwCreateThread,
	(__int64)&fn_ZwCreateThreadEx,
	(__int64)&fn_ZwCreateTimer,
	(__int64)&fn_ZwCreateToken,
	(__int64)&fn_ZwCreateTransaction,
	(__int64)&fn_ZwCreateTransactionManager,
	(__int64)&fn_ZwCreateUserProcess,
	(__int64)&fn_ZwCreateWaitablePort,
	(__int64)&fn_ZwCreateWorkerFactory,
	(__int64)&fn_ZwDebugActiveProcess,
	(__int64)&fn_ZwDebugContinue,
	(__int64)&fn_ZwDelayExecution,
	(__int64)&fn_ZwDeleteAtom,
	(__int64)&fn_ZwDeleteBootEntry,
	(__int64)&fn_ZwDeleteDriverEntry,
	(__int64)&fn_ZwDeleteFile,
	(__int64)&fn_ZwDeleteKey,
	(__int64)&fn_ZwDeleteObjectAuditAlarm,
	(__int64)&fn_ZwDeletePrivateNamespace,
	(__int64)&fn_ZwDeleteValueKey,
	(__int64)&fn_ZwDeviceIoControlFile,
	(__int64)&fn_ZwDisableLastKnownGood,
	(__int64)&fn_ZwDisplayString,
	(__int64)&fn_ZwDrawText,
	(__int64)&fn_ZwDuplicateObject,
	(__int64)&fn_ZwDuplicateToken,
	(__int64)&fn_ZwEnableLastKnownGood,
	(__int64)&fn_ZwEnumerateBootEntries,
	(__int64)&fn_ZwEnumerateDriverEntries,
	(__int64)&fn_ZwEnumerateKey,
	(__int64)&fn_ZwEnumerateSystemEnvironmentValuesEx,
	(__int64)&fn_ZwEnumerateTransactionObject,
	(__int64)&fn_ZwEnumerateValueKey,
	(__int64)&fn_ZwExtendSection,
	(__int64)&fn_ZwFilterToken,
	(__int64)&fn_ZwFindAtom,
	(__int64)&fn_ZwFlushBuffersFile,
	(__int64)&fn_ZwFlushInstallUILanguage,
	(__int64)&fn_ZwFlushInstructionCache,
	(__int64)&fn_ZwFlushKey,
	(__int64)&fn_ZwFlushProcessWriteBuffers,
	(__int64)&fn_ZwFlushVirtualMemory,
	(__int64)&fn_ZwFlushWriteBuffer,
	(__int64)&fn_ZwFreeUserPhysicalPages,
	(__int64)&fn_ZwFreeVirtualMemory,
	(__int64)&fn_ZwFreezeRegistry,
	(__int64)&fn_ZwFreezeTransactions,
	(__int64)&fn_ZwFsControlFile,
	(__int64)&fn_ZwGetContextThread,
	(__int64)&fn_ZwGetCurrentProcessorNumber,
	(__int64)&fn_ZwGetDevicePowerState,
	(__int64)&fn_ZwGetMUIRegistryInfo,
	(__int64)&fn_ZwGetNextProcess,
	(__int64)&fn_ZwGetNextThread,
	(__int64)&fn_ZwGetNlsSectionPtr,
	(__int64)&fn_ZwGetNotificationResourceManager,
	(__int64)&fn_ZwGetPlugPlayEvent,
	(__int64)&fn_ZwGetWriteWatch,
	(__int64)&fn_ZwImpersonateAnonymousToken,
	(__int64)&fn_ZwImpersonateClientOfPort,
	(__int64)&fn_ZwImpersonateThread,
	(__int64)&fn_ZwInitializeNlsFiles,
	(__int64)&fn_ZwInitializeRegistry,
	(__int64)&fn_ZwInitiatePowerAction,
	(__int64)&fn_ZwIsProcessInJob,
	(__int64)&fn_ZwIsSystemResumeAutomatic,
	(__int64)&fn_ZwIsUILanguageComitted,
	(__int64)&fn_ZwListenPort,
	(__int64)&fn_ZwLoadDriver,
	(__int64)&fn_ZwLoadKey,
	(__int64)&fn_ZwLoadKey2,
	(__int64)&fn_ZwLoadKeyEx,
	(__int64)&fn_ZwLockFile,
	(__int64)&fn_ZwLockProductActivationKeys,
	(__int64)&fn_ZwLockRegistryKey,
	(__int64)&fn_ZwLockVirtualMemory,
	(__int64)&fn_ZwMakePermanentObject,
	(__int64)&fn_ZwMakeTemporaryObject,
	(__int64)&fn_ZwMapCMFModule,
	(__int64)&fn_ZwMapUserPhysicalPages,
	(__int64)&fn_ZwMapUserPhysicalPagesScatter,
	(__int64)&fn_ZwMapViewOfSection,
	(__int64)&fn_ZwModifyBootEntry,
	(__int64)&fn_ZwModifyDriverEntry,
	(__int64)&fn_ZwNotifyChangeDirectoryFile,
	(__int64)&fn_ZwNotifyChangeKey,
	(__int64)&fn_ZwNotifyChangeMultipleKeys,
	(__int64)&fn_ZwNotifyChangeSession,
	(__int64)&fn_ZwOpenDirectoryObject,
	(__int64)&fn_ZwOpenEnlistment,
	(__int64)&fn_ZwOpenEvent,
	(__int64)&fn_ZwOpenEventPair,
	(__int64)&fn_ZwOpenFile,
	(__int64)&fn_ZwOpenIoCompletion,
	(__int64)&fn_ZwOpenJobObject,
	(__int64)&fn_ZwOpenKey,
	(__int64)&fn_ZwOpenKeyEx,
	(__int64)&fn_ZwOpenKeyTransacted,
	(__int64)&fn_ZwOpenKeyTransactedEx,
	(__int64)&fn_ZwOpenKeyedEvent,
	(__int64)&fn_ZwOpenMutant,
	(__int64)&fn_ZwOpenObjectAuditAlarm,
	(__int64)&fn_ZwOpenPrivateNamespace,
	(__int64)&fn_ZwOpenProcess,
	(__int64)&fn_ZwOpenProcessToken,
	(__int64)&fn_ZwOpenProcessTokenEx,
	(__int64)&fn_ZwOpenResourceManager,
	(__int64)&fn_ZwOpenSection,
	(__int64)&fn_ZwOpenSemaphore,
	(__int64)&fn_ZwOpenSession,
	(__int64)&fn_ZwOpenSymbolicLinkObject,
	(__int64)&fn_ZwOpenThread,
	(__int64)&fn_ZwOpenThreadToken,
	(__int64)&fn_ZwOpenThreadTokenEx,
	(__int64)&fn_ZwOpenTimer,
	(__int64)&fn_ZwOpenTransaction,
	(__int64)&fn_ZwOpenTransactionManager,
	(__int64)&fn_ZwPlugPlayControl,
	(__int64)&fn_ZwPowerInformation,
	(__int64)&fn_ZwPrePrepareComplete,
	(__int64)&fn_ZwPrePrepareEnlistment,
	(__int64)&fn_ZwPrepareComplete,
	(__int64)&fn_ZwPrepareEnlistment,
	(__int64)&fn_ZwPrivilegeCheck,
	(__int64)&fn_ZwPrivilegeObjectAuditAlarm,
	(__int64)&fn_ZwPrivilegedServiceAuditAlarm,
	(__int64)&fn_ZwPropagationComplete,
	(__int64)&fn_ZwPropagationFailed,
	(__int64)&fn_ZwProtectVirtualMemory,
	(__int64)&fn_ZwPulseEvent,
	(__int64)&fn_ZwQueryAttributesFile,
	(__int64)&fn_ZwQueryBootEntryOrder,
	(__int64)&fn_ZwQueryBootOptions,
	(__int64)&fn_ZwQueryDebugFilterState,
	(__int64)&fn_ZwQueryDefaultLocale,
	(__int64)&fn_ZwQueryDefaultUILanguage,
	(__int64)&fn_ZwQueryDirectoryFile,
	(__int64)&fn_ZwQueryDirectoryObject,
	(__int64)&fn_ZwQueryDriverEntryOrder,
	(__int64)&fn_ZwQueryEaFile,
	(__int64)&fn_ZwQueryEvent,
	(__int64)&fn_ZwQueryFullAttributesFile,
	(__int64)&fn_ZwQueryInformationAtom,
	(__int64)&fn_ZwQueryInformationEnlistment,
	(__int64)&fn_ZwQueryInformationFile,
	(__int64)&fn_ZwQueryInformationJobObject,
	(__int64)&fn_ZwQueryInformationPort,
	(__int64)&fn_ZwQueryInformationProcess,
	(__int64)&fn_ZwQueryInformationResourceManager,
	(__int64)&fn_ZwQueryInformationThread,
	(__int64)&fn_ZwQueryInformationToken,
	(__int64)&fn_ZwQueryInformationTransaction,
	(__int64)&fn_ZwQueryInformationTransactionManager,
	(__int64)&fn_ZwQueryInformationWorkerFactory,
	(__int64)&fn_ZwQueryInstallUILanguage,
	(__int64)&fn_ZwQueryIntervalProfile,
	(__int64)&fn_ZwQueryIoCompletion,
	(__int64)&fn_ZwQueryKey,
	(__int64)&fn_ZwQueryLicenseValue,
	(__int64)&fn_ZwQueryMultipleValueKey,
	(__int64)&fn_ZwQueryMutant,
	(__int64)&fn_ZwQueryObject,
	(__int64)&fn_ZwQueryOpenSubKeys,
	(__int64)&fn_ZwQueryOpenSubKeysEx,
	(__int64)&fn_ZwQueryPerformanceCounter,
	(__int64)&fn_ZwQueryPortInformationProcess,
	(__int64)&fn_ZwQueryQuotaInformationFile,
	(__int64)&fn_ZwQuerySection,
	(__int64)&fn_ZwQuerySecurityAttributesToken,
	(__int64)&fn_ZwQuerySecurityObject,
	(__int64)&fn_ZwQuerySemaphore,
	(__int64)&fn_ZwQuerySymbolicLinkObject,
	(__int64)&fn_ZwQuerySystemEnvironmentValue,
	(__int64)&fn_ZwQuerySystemEnvironmentValueEx,
	(__int64)&fn_ZwQuerySystemInformation,
	(__int64)&fn_ZwQuerySystemInformationEx,
	(__int64)&fn_ZwQuerySystemTime,
	(__int64)&fn_ZwQueryTimer,
	(__int64)&fn_ZwQueryTimerResolution,
	(__int64)&fn_ZwQueryValueKey,
	(__int64)&fn_ZwQueryVirtualMemory,
	(__int64)&fn_ZwQueryVolumeInformationFile,
	(__int64)&fn_ZwQueueApcThread,
	(__int64)&fn_ZwQueueApcThreadEx,
	(__int64)&fn_ZwRaiseException,
	(__int64)&fn_ZwRaiseHardError,
	(__int64)&fn_ZwReadFile,
	(__int64)&fn_ZwReadFileScatter,
	(__int64)&fn_ZwReadOnlyEnlistment,
	(__int64)&fn_ZwReadRequestData,
	(__int64)&fn_ZwReadVirtualMemory,
	(__int64)&fn_ZwRecoverEnlistment,
	(__int64)&fn_ZwRecoverResourceManager,
	(__int64)&fn_ZwRecoverTransactionManager,
	(__int64)&fn_ZwRegisterProtocolAddressInformation,
	(__int64)&fn_ZwRegisterThreadTerminatePort,
	(__int64)&fn_ZwReleaseKeyedEvent,
	(__int64)&fn_ZwReleaseMutant,
	(__int64)&fn_ZwReleaseSemaphore,
	(__int64)&fn_ZwReleaseWorkerFactoryWorker,
	(__int64)&fn_ZwRemoveIoCompletion,
	(__int64)&fn_ZwRemoveIoCompletionEx,
	(__int64)&fn_ZwRemoveProcessDebug,
	(__int64)&fn_ZwRenameKey,
	(__int64)&fn_ZwRenameTransactionManager,
	(__int64)&fn_ZwReplaceKey,
	(__int64)&fn_ZwReplacePartitionUnit,
	(__int64)&fn_ZwReplyPort,
	(__int64)&fn_ZwReplyWaitReceivePort,
	(__int64)&fn_ZwReplyWaitReceivePortEx,
	(__int64)&fn_ZwReplyWaitReplyPort,
	(__int64)&fn_ZwRequestPort,
	(__int64)&fn_ZwRequestWaitReplyPort,
	(__int64)&fn_ZwResetEvent,
	(__int64)&fn_ZwResetWriteWatch,
	(__int64)&fn_ZwRestoreKey,
	(__int64)&fn_ZwResumeProcess,
	(__int64)&fn_ZwResumeThread,
	(__int64)&fn_ZwRollbackComplete,
	(__int64)&fn_ZwRollbackEnlistment,
	(__int64)&fn_ZwRollbackTransaction,
	(__int64)&fn_ZwRollforwardTransactionManager,
	(__int64)&fn_ZwSaveKey,
	(__int64)&fn_ZwSaveKeyEx,
	(__int64)&fn_ZwSaveMergedKeys,
	(__int64)&fn_ZwSecureConnectPort,
	(__int64)&fn_ZwSerializeBoot,
	(__int64)&fn_ZwSetBootEntryOrder,
	(__int64)&fn_ZwSetBootOptions,
	(__int64)&fn_ZwSetContextThread,
	(__int64)&fn_ZwSetDebugFilterState,
	(__int64)&fn_ZwSetDefaultHardErrorPort,
	(__int64)&fn_ZwSetDefaultLocale,
	(__int64)&fn_ZwSetDefaultUILanguage,
	(__int64)&fn_ZwSetDriverEntryOrder,
	(__int64)&fn_ZwSetEaFile,
	(__int64)&fn_ZwSetEvent,
	(__int64)&fn_ZwSetEventBoostPriority,
	(__int64)&fn_ZwSetHighEventPair,
	(__int64)&fn_ZwSetHighWaitLowEventPair,
	(__int64)&fn_ZwSetInformationDebugObject,
	(__int64)&fn_ZwSetInformationEnlistment,
	(__int64)&fn_ZwSetInformationFile,
	(__int64)&fn_ZwSetInformationJobObject,
	(__int64)&fn_ZwSetInformationKey,
	(__int64)&fn_ZwSetInformationObject,
	(__int64)&fn_ZwSetInformationProcess,
	(__int64)&fn_ZwSetInformationResourceManager,
	(__int64)&fn_ZwSetInformationThread,
	(__int64)&fn_ZwSetInformationToken,
	(__int64)&fn_ZwSetInformationTransaction,
	(__int64)&fn_ZwSetInformationTransactionManager,
	(__int64)&fn_ZwSetInformationWorkerFactory,
	(__int64)&fn_ZwSetIntervalProfile,
	(__int64)&fn_ZwSetIoCompletion,
	(__int64)&fn_ZwSetIoCompletionEx,
	(__int64)&fn_ZwSetLdtEntries,
	(__int64)&fn_ZwSetLowEventPair,
	(__int64)&fn_ZwSetLowWaitHighEventPair,
	(__int64)&fn_ZwSetQuotaInformationFile,
	(__int64)&fn_ZwSetSecurityObject,
	(__int64)&fn_ZwSetSystemEnvironmentValue,
	(__int64)&fn_ZwSetSystemEnvironmentValueEx,
	(__int64)&fn_ZwSetSystemInformation,
	(__int64)&fn_ZwSetSystemPowerState,
	(__int64)&fn_ZwSetSystemTime,
	(__int64)&fn_ZwSetThreadExecutionState,
	(__int64)&fn_ZwSetTimer,
	(__int64)&fn_ZwSetTimerEx,
	(__int64)&fn_ZwSetTimerResolution,
	(__int64)&fn_ZwSetUuidSeed,
	(__int64)&fn_ZwSetValueKey,
	(__int64)&fn_ZwSetVolumeInformationFile,
	(__int64)&fn_ZwShutdownSystem,
	(__int64)&fn_ZwShutdownWorkerFactory,
	(__int64)&fn_ZwSignalAndWaitForSingleObject,
	(__int64)&fn_ZwSinglePhaseReject,
	(__int64)&fn_ZwStartProfile,
	(__int64)&fn_ZwStopProfile,
	(__int64)&fn_ZwSuspendProcess,
	(__int64)&fn_ZwSuspendThread,
	(__int64)&fn_ZwSystemDebugControl,
	(__int64)&fn_ZwTerminateJobObject,
	(__int64)&fn_ZwTerminateProcess,
	(__int64)&fn_ZwTerminateThread,
	(__int64)&fn_ZwTestAlert,
	(__int64)&fn_ZwThawRegistry,
	(__int64)&fn_ZwThawTransactions,
	(__int64)&fn_ZwTraceControl,
	(__int64)&fn_ZwTraceEvent,
	(__int64)&fn_ZwTranslateFilePath,
	(__int64)&fn_ZwUmsThreadYield,
	(__int64)&fn_ZwUnloadDriver,
	(__int64)&fn_ZwUnloadKey,
	(__int64)&fn_ZwUnloadKey2,
	(__int64)&fn_ZwUnloadKeyEx,
	(__int64)&fn_ZwUnlockFile,
	(__int64)&fn_ZwUnlockVirtualMemory,
	(__int64)&fn_ZwUnmapViewOfSection,
	(__int64)&fn_ZwVdmControl,
	(__int64)&fn_ZwWaitForDebugEvent,
	(__int64)&fn_ZwWaitForKeyedEvent,
	(__int64)&fn_ZwWaitForMultipleObjects,
	(__int64)&fn_ZwWaitForMultipleObjects32,
	(__int64)&fn_ZwWaitForSingleObject,
	(__int64)&fn_ZwWaitForWorkViaWorkerFactory,
	(__int64)&fn_ZwWaitHighEventPair,
	(__int64)&fn_ZwWaitLowEventPair,
	(__int64)&fn_ZwWorkerFactoryWorkerReady,
	(__int64)&fn_ZwWriteFile,
	(__int64)&fn_ZwWriteFileGather,
	(__int64)&fn_ZwWriteRequestData,
	(__int64)&fn_ZwWriteVirtualMemory,
	(__int64)&fn_ZwYieldExecution
};

