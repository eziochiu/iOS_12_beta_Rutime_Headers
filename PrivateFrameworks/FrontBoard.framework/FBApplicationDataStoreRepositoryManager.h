/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationDataStoreRepositoryManager : NSObject <FBApplicationDataStoreRepositoryDelegate> {
    FBSqliteApplicationDataStoreRepository * _dataStore;
    NSURL * _dataStoreURL;
    NSObject<OS_dispatch_queue> * _deferredWorkQueue;
    LSApplicationWorkspace * _lsApplicationWorkspace;
}

@property (nonatomic, retain) <FBApplicationDataStoreRepository> *dataStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LSApplicationWorkspace *lsApplicationWorkspace;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleApplicationInstalled:(id)arg1;
- (void)_handleApplicationsUninstalled:(id)arg1;
- (id)_initWithDataStore:(id)arg1 lsWorkspace:(id)arg2;
- (void)_performAfterDeferredWork:(id /* block */)arg1;
- (id)_safeObjectForKey:(id)arg1 forApplication:(id)arg2 ofType:(Class)arg3;
- (void)clearExpiredUninstalledApplicationsFromStoreIfNecessary;
- (id)dataStore;
- (void)dealloc;
- (id)init;
- (id)lsApplicationWorkspace;
- (void)migrateApplicationStorePathIfNecessary;
- (bool)migrateFromApplicationStore:(id)arg1 toApplicationStore:(id)arg2 error:(id*)arg3;
- (bool)migrateFromPlistStoreAtURL:(id)arg1 toSqliteStoreAtURL:(id)arg2 error:(id*)arg3;
- (void)objectChangedForKeys:(id)arg1 application:(id)arg2;
- (bool)removeStoreAtURL:(id)arg1 error:(out id*)arg2;
- (void)setDataStore:(id)arg1;
- (void)setLsApplicationWorkspace:(id)arg1;
- (void)storeInvalidatedForIdentifier:(id)arg1;
- (id)urlByAppendingString:(id)arg1 toURL:(id)arg2;

@end
