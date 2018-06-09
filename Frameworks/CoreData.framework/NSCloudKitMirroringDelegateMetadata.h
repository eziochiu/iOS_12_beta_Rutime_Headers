/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCloudKitMirroringDelegateMetadata : NSObject {
    NSString * _ckIdentityRecordName;
    bool  _hasChanges;
    bool  _hasCheckedCKIdentity;
    bool  _hasInitializedZone;
    bool  _hasInitializedZoneSubscription;
    NSDictionary * _keyToPreviousServerChangeToken;
    NSPersistentHistoryToken * _lastHistoryToken;
    bool  _loaded;
    NSPersistentStore * _store;
}

@property (setter=setCKIdentityRecordName:, nonatomic, retain) NSString *ckIdentityRecordName;
@property (nonatomic, readonly) bool hasChanges;
@property (nonatomic) bool hasCheckedCKIdentity;
@property (nonatomic) bool hasInitializedZone;
@property (nonatomic) bool hasInitializedZoneSubscription;
@property (nonatomic, readonly) NSDictionary *keyToPreviousServerChangeToken;
@property (nonatomic, retain) NSPersistentHistoryToken *lastHistoryToken;
@property (nonatomic, readonly) bool loaded;
@property (nonatomic, readonly) NSPersistentStore *store;

+ (id)allDefaultsKeys;

- (void).cxx_destruct;
- (id)_keyForDatabase:(id)arg1;
- (id)_keyForDatabaseScope:(long long)arg1;
- (id)_keyForZoneName:(id)arg1 owner:(id)arg2 databseScope:(long long)arg3;
- (id)_keyForZoneWithID:(id)arg1 inDatabase:(id)arg2;
- (void)_setChangeToken:(id)arg1 forKey:(id)arg2;
- (id)changeTokenForDatabase:(id)arg1;
- (id)changeTokenForZoneWithID:(id)arg1 inDatabase:(id)arg2;
- (id)ckIdentityRecordName;
- (unsigned long long)countChangeTokens;
- (void)dealloc;
- (id)description;
- (bool)hasChanges;
- (bool)hasCheckedCKIdentity;
- (bool)hasInitializedZone;
- (bool)hasInitializedZoneSubscription;
- (id)initWithStore:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyToPreviousServerChangeToken;
- (id)lastHistoryToken;
- (bool)load:(id*)arg1;
- (bool)loaded;
- (void)purgeCachedChangeTokens;
- (bool)safeDictionary:(id)arg1 isEqualToDictionary:(id)arg2;
- (bool)safeString:(id)arg1 isEqualToString:(id)arg2;
- (bool)save:(id*)arg1;
- (void)setCKIdentityRecordName:(id)arg1;
- (void)setChangeToken:(id)arg1 forDatabase:(id)arg2;
- (void)setChangeToken:(id)arg1 forZoneWithID:(id)arg2 inDatabase:(id)arg3;
- (void)setHasCheckedCKIdentity:(bool)arg1;
- (void)setHasInitializedZone:(bool)arg1;
- (void)setHasInitializedZoneSubscription:(bool)arg1;
- (void)setLastHistoryToken:(id)arg1;
- (id)store;
- (bool)updateStoreMetadata:(id*)arg1;

@end
