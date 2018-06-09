/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncSequenceRecord : HDCloudSyncRecord {
    bool  _active;
    unsigned long long  _baselineEpoch;
    unsigned long long  _changeIndex;
    unsigned long long  _childRecordCount;
    NSSet * _includedIdentifiers;
    int  _protocolVersion;
    long long  _slot;
    HDSyncAnchorMap * _syncAnchorMap;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, readonly) unsigned long long baselineEpoch;
@property (nonatomic, readonly) unsigned long long changeIndex;
@property (nonatomic, readonly) unsigned long long childRecordCount;
@property (nonatomic, readonly) NSSet *includedIdentifiers;
@property (nonatomic, readonly) int protocolVersion;
@property (nonatomic) long long slot;
@property (nonatomic, readonly) HDSyncAnchorMap *syncAnchorMap;

+ (bool)hasFutureSchema:(id)arg1;
+ (bool)isSequenceRecord:(id)arg1;
+ (bool)isSequenceRecordID:(id)arg1;
+ (id)recordIDWithZoneID:(id)arg1 sequenceSlot:(long long)arg2;
+ (id)recordIDsWithZoneID:(id)arg1;
+ (id)recordWithCKRecord:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)_unitTest_setChildRecordCount:(unsigned long long)arg1;
- (unsigned long long)baselineEpoch;
- (unsigned long long)changeIndex;
- (unsigned long long)childRecordCount;
- (id)description;
- (unsigned long long)hash;
- (id)includedIdentifiers;
- (void)incrementChangeIndex;
- (void)incrementChildRecordCount;
- (id)initForSequenceSlot:(long long)arg1 syncAnchorMap:(id)arg2 active:(bool)arg3 changeIndex:(unsigned long long)arg4 childRecordCount:(unsigned long long)arg5 baselineEpoch:(unsigned long long)arg6 includedIdentifiers:(id)arg7 protocolVersion:(int)arg8 storeRecordID:(id)arg9 record:(id)arg10 schemaVersion:(long long)arg11;
- (id)initForSequenceSlot:(long long)arg1 syncAnchorMap:(id)arg2 changeIndex:(unsigned long long)arg3 baselineEpoch:(unsigned long long)arg4 includedIdentifiers:(id)arg5 storeRecord:(id)arg6;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (int)protocolVersion;
- (void)setActive:(bool)arg1;
- (void)setProtocolVersion:(int)arg1;
- (void)setSlot:(long long)arg1;
- (long long)slot;
- (id)syncAnchorMap;
- (void)updateSyncAnchorMapWithSyncAnchorMap:(id)arg1;

@end
