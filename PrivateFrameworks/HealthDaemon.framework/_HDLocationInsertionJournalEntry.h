/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDLocationInsertionJournalEntry : HDJournalEntry {
    NSArray * _data;
    NSUUID * _seriesIdentifier;
}

@property (nonatomic, readonly) NSArray *data;
@property (nonatomic, readonly) NSUUID *seriesIdentifier;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeriesPersistentID:(id)arg1 locationData:(id)arg2;
- (id)seriesIdentifier;

@end
