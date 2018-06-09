/* made by EzioChiu.
 */

@protocol PDScheduledActivityClient <NSObject>

@optional

- (void)performScheduledActivityWithIdentifier:(NSString *)arg1 activityCriteria:(PDScheduledActivityCriteria *)arg2;
- (void)performScheduledActivityWithIdentifier:(NSString *)arg1 activityCriteria:(PDScheduledActivityCriteria *)arg2 activityContext:(id <NSObject><NSSecureCoding>)arg3;

@end
