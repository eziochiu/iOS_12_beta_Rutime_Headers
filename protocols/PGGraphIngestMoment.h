/* made by EzioChiu.
 */

@protocol PGGraphIngestMoment <NSObject>

@required

- (double)contentScore;
- (bool)isInteresting;
- (bool)isSmartInteresting;
- (NSDate *)localEndDate;
- (NSString *)localIdentifier;
- (NSDate *)localStartDate;
- (unsigned long long)numberOfItems;
- (unsigned long long)numberOfItemsWithPeople;
- (unsigned long long)totalNumberOfPersons;
- (NSDate *)universalEndDate;
- (NSDate *)universalStartDate;

@end
