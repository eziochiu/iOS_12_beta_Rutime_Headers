/* made by EzioChiu.
 */

@protocol DNDRemoteServiceConnectionEventListener <NSObject>

@required

- (NSString *)clientIdentifier;

@optional

- (void)didReceiveConnectionInterruptedEventForRemoteService:(DNDRemoteServiceConnection *)arg1;
- (void)didReceiveConnectionInvalidatedEventForRemoteService:(DNDRemoteServiceConnection *)arg1;
- (void)remoteService:(DNDRemoteServiceConnection *)arg1 didReceiveDoNotDisturbStateUpdate:(DNDStateUpdate *)arg2;
- (void)remoteService:(DNDRemoteServiceConnection *)arg1 didReceiveModeAssertionInvalidation:(DNDModeAssertionInvalidation *)arg2;
- (void)remoteService:(DNDRemoteServiceConnection *)arg1 didReceiveUpdatedBehaviorSettings:(DNDBehaviorSettings *)arg2;
- (void)remoteService:(DNDRemoteServiceConnection *)arg1 didReceiveUpdatedPhoneCallBypassSettings:(DNDBypassSettings *)arg2;
- (void)remoteService:(DNDRemoteServiceConnection *)arg1 didReceiveUpdatedScheduleSettings:(DNDScheduleSettings *)arg2;

@end
