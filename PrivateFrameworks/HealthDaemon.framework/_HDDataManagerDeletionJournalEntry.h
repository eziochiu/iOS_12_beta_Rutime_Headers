/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDDataManagerDeletionJournalEntry : HDJournalEntry {
    HDDataDeletionConfiguration * _configuration;
    NSArray * _objectUUIDs;
}

@property (nonatomic, readonly, copy) HDDataDeletionConfiguration *configuration;
@property (nonatomic, readonly, copy) NSArray *objectUUIDs;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configuration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 objectUUIDs:(id)arg2;
- (id)objectUUIDs;

@end
