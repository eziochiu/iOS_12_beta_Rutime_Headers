/* made by EzioChiu.
 */

@protocol HAPRelayActivationClientDelegate <NSObject>

@required

- (void)relayActivationClient:(HAPRelayActivationClient *)arg1 didCloseWithError:(NSError *)arg2;
- (void)relayActivationClient:(HAPRelayActivationClient *)arg1 didReceiveChallenge:(NSData *)arg2;
- (void)relayActivationClient:(HAPRelayActivationClient *)arg1 didReceiveRelayCertificate:(NSData *)arg2;

@end
