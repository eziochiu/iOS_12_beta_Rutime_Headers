/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitSetupAssistant : NSObject {
    NSObject<OS_dispatch_semaphore> * _cloudKitSemaphore;
    CKContainer * _container;
    CKDatabase * _database;
    NSURL * _largeBlobDirectoryURL;
    NSCloudKitMirroringDelegateMetadata * _metadata;
    NSCloudKitMirroringDelegateOptions * _mirroringOptions;
    NSPersistentStoreCoordinator * _observedCoordinator;
    NSPersistentStore * _observedStore;
    CKRecordZone * _zone;
    CKRecordZoneSubscription * _zoneSubscription;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *cloudKitSemaphore;
@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) CKDatabase *database;
@property (nonatomic, readonly) NSURL *largeBlobDirectoryURL;
@property (nonatomic, readonly) NSCloudKitMirroringDelegateMetadata *metadata;
@property (nonatomic, readonly) NSCloudKitMirroringDelegateOptions *mirroringOptions;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *observedCoordinator;
@property (nonatomic, readonly) NSPersistentStore *observedStore;
@property (nonatomic, readonly) CKRecordZone *zone;
@property (nonatomic, readonly) CKRecordZoneSubscription *zoneSubscription;

+ (id)containerWithIdentifier:(id)arg1 andOptions:(id)arg2;

- (void).cxx_destruct;
- (bool)_checkAccountStatus:(id*)arg1;
- (bool)_checkAndInitializeUserDefaults:(id*)arg1;
- (bool)_checkUserIdentity:(id*)arg1;
- (bool)_createSchema:(id*)arg1;
- (bool)_createSchemaIfNecessary:(id*)arg1;
- (bool)_createZoneIfNecessary:(id*)arg1;
- (bool)_deleteZone:(id)arg1 error:(id*)arg2;
- (bool)_initializeAssetStorageURLError:(id*)arg1;
- (bool)_initializeCloudKitForObservedStore:(id*)arg1;
- (bool)_saveUserDefaults:(id*)arg1;
- (bool)_saveZone:(id)arg1 error:(id*)arg2;
- (void)_setContainer:(id)arg1;
- (void)_setDatabase:(id)arg1;
- (bool)_setupZoneSubscriptionIfNecessary:(id*)arg1;
- (bool)_shouldAttemptRecoveryForZone:(id)arg1 afterError:(id)arg2;
- (id)cloudKitSemaphore;
- (id)container;
- (id)database;
- (void)dealloc;
- (id)init;
- (id)initWithMirroringOptions:(id)arg1 observedStore:(id)arg2 zone:(id)arg3 zoneSubscription:(id)arg4;
- (id)largeBlobDirectoryURL;
- (id)metadata;
- (id)mirroringOptions;
- (id)observedCoordinator;
- (id)observedStore;
- (id)zone;
- (id)zoneSubscription;

@end
