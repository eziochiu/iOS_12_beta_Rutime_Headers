/* made by EzioChiu.
 */

@protocol FCSubscriptionListObserving <NSObject>

@required

- (void)subscriptionList:(FCSubscriptionList *)arg1 didAddSubscriptions:(NSSet *)arg2 changeSubscriptions:(NSSet *)arg3 moveSubscriptions:(NSSet *)arg4 removeSubscriptions:(NSSet *)arg5 eventInitiationLevel:(long long)arg6;

@end
