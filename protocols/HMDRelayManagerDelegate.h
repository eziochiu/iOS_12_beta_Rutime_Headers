/* made by EzioChiu.
 */

@protocol HMDRelayManagerDelegate <NSObject>

@required

- (void)relayManager:(HMDRelayManager *)arg1 didUpdateControllerIdentifier:(NSString *)arg2;

@end
