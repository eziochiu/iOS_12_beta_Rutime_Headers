/* made by EzioChiu.
 */

@protocol AXIDCRemoteControllerDelegate <NSObject>

@required

- (void)controller:(AXIDCRemoteController *)arg1 didCloseConnectionWithError:(NSError *)arg2;
- (void)controller:(AXIDCRemoteController *)arg1 didFinishSendingData:(AXIDCMessage *)arg2;
- (void)controller:(AXIDCRemoteController *)arg1 didReceiveData:(AXIDCMessage *)arg2;
- (void)controllerDidFinishConnecting:(AXIDCRemoteController *)arg1;
- (<AXIDCManagerSecurityDelegate> *)securityDelegate;
- (void)setSecurityDelegate:(id <AXIDCManagerSecurityDelegate>)arg1;

@end
