/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDAssociationInsertionJournalEntry : HDJournalEntry {
    NSData * _childUUIDsData;
    bool  _enforceSameSource;
    NSUUID * _parentUUID;
    long long  _provenance;
}

@property (nonatomic, readonly) NSData *childUUIDsData;
@property (nonatomic, readonly) bool enforceSameSource;
@property (nonatomic, readonly) NSUUID *parentUUID;
@property (nonatomic, readonly) long long provenance;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)childUUIDsData;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)enforceSameSource;
- (id)initWithCoder:(id)arg1;
- (id)initWithParentUUID:(id)arg1 childUUIDsData:(id)arg2 provenance:(long long)arg3 enforceSameSource:(bool)arg4;
- (id)parentUUID;
- (long long)provenance;

@end
