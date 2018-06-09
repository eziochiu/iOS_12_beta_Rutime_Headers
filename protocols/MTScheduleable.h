/* made by EzioChiu.
 */

@protocol MTScheduleable <NAEquatable, NSCopying>

@required

- (NSString *)identifier;
- (bool)shouldBeScheduled;
- (NSArray *)upcomingTriggersAfterDate:(NSDate *)arg1;

@end
