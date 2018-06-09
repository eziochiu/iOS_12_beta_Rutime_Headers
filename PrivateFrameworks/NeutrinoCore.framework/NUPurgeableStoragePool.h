/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUPurgeableStoragePool : NSObject {
    double  _migrationDelay;
    NSObject<OS_dispatch_queue> * _migrationQueue;
    bool  _migrationTimerScheduled;
    unsigned long long  _nonPurgeableActivityCounter;
    long long  _nonPurgeableLimit;
    NSMutableArray * _nonPurgeableList;
    long long  _purgeableLimit;
    NSObject<OS_dispatch_queue> * _stateQueue;
    NUStoragePoolStats * _stats;
    Class  _storageClass;
    NSMutableArray * _volatileList;
}

@property (nonatomic, readonly) double migrationDelay;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *migrationQueue;
@property (nonatomic, readonly) long long nonPurgeableLimit;
@property (nonatomic, readonly) NSMutableArray *nonPurgeableList;
@property (nonatomic, readonly) long long purgeableLimit;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateQueue;
@property (nonatomic, readonly, copy) NUStoragePoolStats *stats;
@property (nonatomic, readonly) Class storageClass;
@property (nonatomic, readonly) NSMutableArray *volatileList;

- (void).cxx_destruct;
- (id)_allocateStorageWithSize:(struct { long long x1; long long x2; })arg1 format:(id)arg2;
- (void)_enforcePurgableLimit;
- (void)_migrateAllNonPurgeableStorageIfNoRecentActivity:(unsigned long long)arg1;
- (void)_migrateOldestNonPurgeableStorageToPurgeable;
- (void)_migrateStorageToPurgeable:(id)arg1;
- (void)_migrationTimer:(unsigned long long)arg1;
- (id)_popOldestNonPurgeableStorage;
- (void)_reapPurged;
- (void)_resetNonPurgeableStorageMigrationTimer;
- (void)_returnNonPurgeableStorage:(id)arg1;
- (void)_returnVolatileStorage:(id)arg1;
- (void)_scheduleMigrationTimer;
- (id)_storageFromPoolWithSize:(struct { long long x1; long long x2; })arg1 format:(id)arg2 exactMatch:(bool)arg3;
- (id)debugDescription;
- (id)init;
- (id)initWithStorageClass:(Class)arg1;
- (void)migrateAllNonPurgeableStorage;
- (double)migrationDelay;
- (id)migrationQueue;
- (id)newStorageWithMinimumSize:(struct { long long x1; long long x2; })arg1 format:(id)arg2;
- (id)newStorageWithSize:(struct { long long x1; long long x2; })arg1 format:(id)arg2;
- (id)newStorageWithSize:(struct { long long x1; long long x2; })arg1 format:(id)arg2 exactMatch:(bool)arg3;
- (long long)nonPurgeableLimit;
- (id)nonPurgeableList;
- (long long)purgeableLimit;
- (id)reapPurged;
- (void)returnStorage:(id)arg1;
- (id)stateQueue;
- (id)stats;
- (Class)storageClass;
- (id)volatileList;
- (void)waitForMigration;

@end
