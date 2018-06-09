/* made by EzioChiu.
 */

@protocol AXIDCControllerBrowserDelegateProtocol <NSObject>

@required

- (void)availableRemoteControllersDidChange;

@optional

- (void)controller:(AXIDCRemoteController *)arg1 didFinishSendingData:(AXIDCMessage *)arg2;
- (void)controller:(AXIDCRemoteController *)arg1 didReceiveData:(AXIDCMessage *)arg2;

@end
