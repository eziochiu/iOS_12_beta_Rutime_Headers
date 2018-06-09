/* made by EzioChiu
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPBroadcastActivityHostViewController : _UIRemoteViewController <RPBroadcastActivityCommunicationHostProtocol> {
    RPBroadcastActivityViewController * _broadcastActivityViewController;
}

@property (nonatomic) RPBroadcastActivityViewController *broadcastActivityViewController;

- (void).cxx_destruct;
- (id)broadcastActivityViewController;
- (oneway void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 broadcastConfigurationData:(id)arg4 userInfo:(id)arg5 cancelled:(bool)arg6;
- (oneway void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 cancelled:(bool)arg4;
- (long long)modalPresentationStyle;
- (unsigned long long)popoverArrowDirection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })popoverControllerSourceRect;
- (oneway void)presentationInfoWithCompletion:(id /* block */)arg1;
- (void)setBroadcastActivityViewController:(id)arg1;
- (void)viewDidLoad;

@end
