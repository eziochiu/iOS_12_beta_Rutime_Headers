/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
 */

@interface MIInstallerClient : NSObject <MobileInstallerDelegateProtocol> {
    id /* block */  _appDictionaryEnumBlock;
    NSXPCConnection * _connection;
    bool  _delegatesComplete;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _delegatesCompleteCond;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _delegatesCompleteCondMutex;
    NSError * _delegatesCompleteError;
    id /* block */  _progressBlock;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id /* block */ appDictionaryEnumBlock;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) bool delegatesComplete;
@property (nonatomic, retain) NSError *delegatesCompleteError;
@property (nonatomic, copy) id /* block */ progressBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)installerWithAppDictionaryEnumerator:(id /* block */)arg1;
+ (id)installerWithProgressBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_invalidateObject;
- (id)_waitForPendingDelegateMessages;
- (id /* block */)appDictionaryEnumBlock;
- (void)checkCapabilities:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)clearUninstalledIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (id)connection;
- (void)dealloc;
- (void)delegateMessageDeliveryCompleteWithError:(id)arg1;
- (bool)delegatesComplete;
- (id)delegatesCompleteError;
- (void)dieForTesting;
- (void)enumerateAppDictionary:(id)arg1 error:(id)arg2;
- (void)enumerateInstalledAppsWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchDiskUsageForIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchInstalledAppsWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchInstalledDeveloperAppsWithMountPath:(id)arg1 completion:(id /* block */)arg2;
- (void)getAppMetadataForApp:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)installURL:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)listSafeHarborsOfType:(long long)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)lookupSystemAppStateWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)lookupUninstalledWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)processRestoredContainerWithIdentifier:(id)arg1 ofType:(long long)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (id /* block */)progressBlock;
- (id)queue;
- (void)registerSafeHarborAtPath:(id)arg1 forIdentifier:(id)arg2 ofType:(long long)arg3 withOptions:(id)arg4 completion:(id /* block */)arg5;
- (void)removeSafeHarborForIdentifier:(id)arg1 ofType:(long long)arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)reportProgress:(id)arg1;
- (void)setAppDictionaryEnumBlock:(id /* block */)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegatesComplete:(bool)arg1;
- (void)setDelegatesCompleteError:(id)arg1;
- (void)setProgressBlock:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)snapshotWKAppInCompanionAppID:(id)arg1 toURL:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)uninstallIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)updateAppDataProtectionWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)updatePlaceholderMetadataForApp:(id)arg1 installType:(unsigned long long)arg2 failureReason:(unsigned long long)arg3 underlyingError:(id)arg4 failureSource:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (void)updateSinfForLSWithIdentifier:(id)arg1 withOptions:(id)arg2 sinfData:(id)arg3 completion:(id /* block */)arg4;
- (void)updateSystemAppStateForIdentifier:(id)arg1 appState:(int)arg2 completion:(id /* block */)arg3;
- (void)updateiTunesMetadataForLSWithIdentifier:(id)arg1 options:(id)arg2 plistData:(id)arg3 completion:(id /* block */)arg4;

@end
