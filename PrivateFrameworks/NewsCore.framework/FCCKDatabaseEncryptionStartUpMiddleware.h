/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKDatabaseEncryptionStartUpMiddleware : NSObject <FCCKDatabaseStartUpMiddleware> {
    <FCCKDatabaseMigrator> * _encryptionMigrator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <FCCKDatabaseMigrator> *encryptionMigrator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)secureSentinelRecordID;
+ (id)sentinelRecordID;

- (void).cxx_destruct;
- (void)_adoptSentinel:(id)arg1 secureSentinel:(id)arg2 forDatabase:(id)arg3 completion:(id /* block */)arg4;
- (void)_createSentinelsIfNeededForDatabase:(id)arg1 completion:(id /* block */)arg2;
- (void)_deleteOldDataIfDesiredWithSentinel:(id)arg1 secureSentinel:(id)arg2 database:(id)arg3 completion:(id /* block */)arg4;
- (void)_deleteOldDataWithSentinel:(id)arg1 secureSentinel:(id)arg2 database:(id)arg3 completion:(id /* block */)arg4;
- (void)_fetchSentinelsWithDatabase:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleIdentityLossWithDatabase:(id)arg1 sentinel:(id)arg2 secureSentinel:(id)arg3 completion:(id /* block */)arg4;
- (void)_migrateWithSentinel:(id)arg1 secureSentinel:(id)arg2 database:(id)arg3 completion:(id /* block */)arg4;
- (bool)_shouldFailGracefullyWithSentinel:(id)arg1 secureSentinel:(id)arg2 error:(id)arg3;
- (bool)_shouldHandleIdentityLossWithSentinel:(id)arg1 secureSentinel:(id)arg2 error:(id)arg3;
- (void)_tryToEnableEncryptionForDatabase:(id)arg1 completion:(id /* block */)arg2;
- (id)encryptionMigrator;
- (id)initWithEncryptionMigrator:(id)arg1;
- (void)performStartUpForDatabase:(id)arg1 completion:(id /* block */)arg2;
- (void)setEncryptionMigrator:(id)arg1;

@end
