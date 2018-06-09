/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKTombstonePolicy : NSObject {
    NSPredicate * _eventPredicateForEventsRequiredToBeTombstoned;
    NSPredicate * _predicateForEventsRequiredToBeTombstoned;
    NSArray * _propertiesToFetchForTombstones;
    NSArray * _requirements;
}

@property (nonatomic, retain) NSPredicate *eventPredicateForEventsRequiredToBeTombstoned;
@property (nonatomic, retain) NSPredicate *predicateForEventsRequiredToBeTombstoned;
@property (nonatomic, retain) NSArray *propertiesToFetchForTombstones;
@property (nonatomic, retain) NSArray *requirements;

+ (id)defaultPolicy;

- (void).cxx_destruct;
- (id)eventPredicateForEventsRequiredToBeTombstoned;
- (id)init;
- (id)initWithRequirements:(id)arg1;
- (id)predicateForEventsRequiredToBeTombstoned;
- (id)propertiesToFetchForTombstones;
- (id)requirements;
- (void)setEventPredicateForEventsRequiredToBeTombstoned:(id)arg1;
- (void)setPredicateForEventsRequiredToBeTombstoned:(id)arg1;
- (void)setPropertiesToFetchForTombstones:(id)arg1;
- (void)setRequirements:(id)arg1;
- (id)tombstonesForEvents:(id)arg1 resultingFromRequirementsWithIdentifiers:(id*)arg2;
- (id)tombstonesForPartialEvents:(id)arg1 resultingFromRequirementsWithIdentifiers:(id*)arg2;

@end
