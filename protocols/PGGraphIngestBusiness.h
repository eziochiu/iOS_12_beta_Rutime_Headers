/* made by EzioChiu.
 */

@protocol PGGraphIngestBusiness <NSObject>

@required

- (NSArray *)businessCategories;
- (NSDateInterval *)dateInterval;
- (bool)hasRoutineVisit;
- (unsigned long long)muid;
- (NSString *)name;
- (double)routineVisitConfidence;
- (long long)venueCapacity;

@end
