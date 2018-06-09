/* made by EzioChiu.
 */

@protocol ITIdleTimerStateServerDelegate <NSObject>

@required

- (void)client:(id <FBSServiceFacilityClientHandle>)arg1 setIdleTimerDisabled:(bool)arg2 forReason:(NSString *)arg3;
- (void)clientDidDisconnect:(id <FBSServiceFacilityClientHandle>)arg1;
- (bool)isIdleTimerServiceAvailable;

@end
