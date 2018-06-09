/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMSetupRemoteViewController : _UIRemoteViewController <HMSetupRemoteHost> {
    <HMSetupRemoteHost> * _delegate;
}

@property (nonatomic) <HMSetupRemoteHost> *delegate;

+ (id)exportedInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)accessorySetupDidBeginPairing;
- (void)accessorySetupDidFinishPairing;
- (void)accessorySetupDidFinishWithError:(id)arg1;
- (void)accessorySetupDidFinishWithInfo:(id)arg1 error:(id)arg2;
- (void)accessorySetupDidLoad;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
