/* made by EzioChiu.
 */

@protocol HMDWatchSystemStateDelegate <NSObject>

@optional

- (void)didReceiveNewIncomingMessage;
- (void)didUpdateReachabilityChangeForCompanion:(bool)arg1;

@end
