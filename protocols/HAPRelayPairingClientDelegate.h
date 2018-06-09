/* made by EzioChiu.
 */

@protocol HAPRelayPairingClientDelegate <NSObject>

@required

- (void)relayPairingClient:(HAPRelayPairingClient *)arg1 didCloseWithError:(NSError *)arg2;
- (void)relayPairingClient:(HAPRelayPairingClient *)arg1 didReceiveAccessToken:(NSData *)arg2 accessoryIdentifier:(NSString *)arg3;
- (void)relayPairingClient:(HAPRelayPairingClient *)arg1 didReceiveControllerIdentifier:(NSString *)arg2;

@end
