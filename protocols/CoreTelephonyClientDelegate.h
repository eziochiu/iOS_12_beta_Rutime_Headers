/* made by EzioChiu.
 */

@protocol CoreTelephonyClientDelegate <NSObject>

@optional

- (void)activeSubscriptionsDidChange;
- (void)simLessSubscriptionsDidChange;
- (void)subscriptionInfoDidChange;

@end
