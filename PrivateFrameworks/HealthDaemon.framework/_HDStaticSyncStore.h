/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDStaticSyncStore : NSObject <HDSyncStore> {
    HDProfile * _profile;
    NSUUID * _storeIdentifier;
    long long  _syncProvenance;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDProfile *profile;
@property (readonly) int protocolVersion;
@property (nonatomic, readonly, copy) NSUUID *storeIdentifier;
@property (readonly) Class superclass;
@property (readonly) long long syncStoreType;

- (void).cxx_destruct;
- (bool)canRecieveSyncObjectsForEntityClass:(Class)arg1;
- (id)databaseIdentifier;
- (id)description;
- (bool)enforceSyncEntityOrdering;
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)arg1;
- (id)initWithProfile:(id)arg1 storeIdentifier:(id)arg2 error:(id*)arg3;
- (id)orderedSyncEntities;
- (id)profile;
- (int)protocolVersion;
- (bool)replacePersistedAnchorMap:(id)arg1 error:(id*)arg2;
- (bool)resetReceivedSyncAnchorMapWithError:(id*)arg1;
- (void)setExpectedSequenceNumber:(long long)arg1 forSyncEntityClass:(Class)arg2;
- (bool)shouldContinueAfterAnchorValidationError:(id)arg1;
- (bool)shouldEnforceSequenceOrdering;
- (id)storeIdentifier;
- (bool)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1;
- (id)syncEntityDependenciesForSyncEntity:(Class)arg1;
- (long long)syncEpoch;
- (long long)syncProvenance;
- (id)syncStoreDefaultSourceBundleIdentifier;
- (id)syncStoreIdentifier;
- (long long)syncStoreType;

@end
