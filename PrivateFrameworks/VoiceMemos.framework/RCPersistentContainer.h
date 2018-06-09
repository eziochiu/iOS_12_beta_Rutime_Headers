/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCPersistentContainer : NSPersistentContainer {
    NSDate * _changeNotificationDate;
    id  _changeNotificationObserver;
    NSPersistentStore * _cloudStore;
    NSString * _cloudStoreIdentifier;
    NSArray * _cloudStores;
    NSArray * _contextsToNotify;
    NSPersistentHistoryToken * _currentHistoryToken;
    NSPersistentHistoryToken * _latestHistoryToken;
    NSPersistentStore * _localStore;
    RCDatabaseMetadata * _metadata;
    NSCloudKitMirroringDelegateOptions * _mirroringOptions;
    NSString * _transactionAuthor;
}

@property (nonatomic, readonly) NSPersistentStore *cloudStore;
@property (nonatomic, readonly) NSPersistentStore *localStore;
@property (nonatomic, readonly) RCDatabaseMetadata *metadata;
@property (nonatomic, readonly) NSCloudKitMirroringDelegateOptions *mirroringOptions;

+ (void)initialize;
+ (id)mirroringContainer;
+ (id)newObjectModel;
+ (id)sharedContainer;

- (void).cxx_destruct;
- (id)_cloudRecordingsInContext:(id)arg1;
- (void)_deleteOrphanedEntityRevisionsWithContext:(id)arg1;
- (id)_fetchLegacyRecordingsForMigrationWithContext:(id)arg1;
- (void)_handleRemoteChangeNotificationOnMainQueue:(id)arg1;
- (id)_initWithMirroring:(bool)arg1;
- (id)_legacyRecordingWithUniqueID:(id)arg1 context:(id)arg2;
- (void)_migrateDatabaseIfNecessary;
- (id)_nextTransactionAfterToken:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)_valueForDatabaseProperty:(id)arg1 context:(id)arg2;
- (id)cloudStore;
- (void)dealloc;
- (id)localStore;
- (id)metadata;
- (id)mirroringOptions;
- (id)newContextWithConcurrencyType:(unsigned long long)arg1;

@end
