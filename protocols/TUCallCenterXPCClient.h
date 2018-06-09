/* made by EzioChiu.
 */

@protocol TUCallCenterXPCClient <NSObject>

@required

- (oneway void)handleCurrentCallsChanged:(NSArray *)arg1 callDisconnected:(TUCall *)arg2;
- (oneway void)handleFrequencyChangedTo:(NSData *)arg1 inDirection:(int)arg2 forCallsWithUniqueProxyIdentifiers:(NSArray *)arg3;
- (oneway void)handleMeterLevelChangedTo:(float)arg1 inDirection:(int)arg2 forCallsWithUniqueProxyIdentifiers:(NSArray *)arg3;
- (oneway void)handleNotificationName:(NSString *)arg1 forCallWithUniqueProxyIdentifier:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (oneway void)resetCallProvisionalStates;

@end