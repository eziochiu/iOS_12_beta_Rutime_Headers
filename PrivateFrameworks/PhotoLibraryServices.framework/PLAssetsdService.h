/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetsdService : NSObject <PLAssetsdServiceProtocol> {
    PLAssetsdCloudInternalService * _cloudInternalService;
    PLAssetsdCloudService * _cloudService;
    PLConnectionDebugger * _connectionDebugger;
    PLAssetsdDebugService * _debugService;
    PLAssetsdDemoService * _demoService;
    PLAssetsdDiagnosticsService * _diagnosticsService;
    PLAssetsdLibraryInternalService * _libraryInternalService;
    PLAssetsdLibraryService * _libraryService;
    PLAssetsdMigrationService * _migrationService;
    PLAssetsdNotificationService * _notificationService;
    PLAssetsdResourceInternalService * _resourceInternalService;
    PLAssetsdResourceService * _resourceService;
    PLAssetsdResourceWriteOnlyService * _resourceWriteOnlyService;
    PLAssetsdSyncService * _syncService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_prepareToRunDaemonJob:(id)arg1;
- (void)getCloudInternalServiceWithReply:(id /* block */)arg1;
- (void)getCloudServiceWithReply:(id /* block */)arg1;
- (void)getDebugServiceWithReply:(id /* block */)arg1;
- (void)getDemoServiceWithReply:(id /* block */)arg1;
- (void)getDiagnosticsServiceWithReply:(id /* block */)arg1;
- (void)getLibraryInternalServiceWithReply:(id /* block */)arg1;
- (void)getLibraryServiceWithReply:(id /* block */)arg1;
- (void)getMigrationServiceWithReply:(id /* block */)arg1;
- (void)getNotificationServiceWithReply:(id /* block */)arg1;
- (void)getResourceInternalServiceWithReply:(id /* block */)arg1;
- (void)getResourceServiceWithReply:(id /* block */)arg1;
- (void)getResourceWriteOnlyServiceWithReply:(id /* block */)arg1;
- (void)getSyncServiceWithReply:(id /* block */)arg1;
- (bool)isClientAuthorizedForTCCService:(struct __CFString { }*)arg1 withConnection:(id)arg2;
- (void)runDaemonJob:(id)arg1 serially:(bool)arg2;
- (void)runDaemonJob:(id)arg1 serially:(bool)arg2 withReply:(id /* block */)arg3;

@end