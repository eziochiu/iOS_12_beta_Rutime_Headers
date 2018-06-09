/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDSampleTypesDeletionEntry : HDJournalEntry {
    NSSet * _sourceIDs;
    NSSet * _types;
}

@property (nonatomic, copy) NSSet *sourceIDs;
@property (nonatomic, retain) NSSet *types;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceIDs:(id)arg1 types:(id)arg2;
- (void)setSourceIDs:(id)arg1;
- (void)setTypes:(id)arg1;
- (id)sourceIDs;
- (id)types;

@end
