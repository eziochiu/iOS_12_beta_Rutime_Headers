/* made by EzioChiu.
 */

@protocol ACHEarnedInstanceAwarding <NSObject>

@required

- (NSSet *)earnedInstancesForHistoricalInterval:(NSDateInterval *)arg1;
- (NSString *)uniqueName;

@end
