/* made by EzioChiu
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPBroadcastPickerHostViewController : _UIRemoteViewController <RPBroadcastPickerExtensionHostProtocol> {
    RPBroadcastPickerViewController * _broadcastPickerViewController;
    RPBroadcastPickerExtensionHostContext * _hostContext;
}

@property (nonatomic) RPBroadcastPickerViewController *broadcastPickerViewController;
@property (nonatomic, retain) RPBroadcastPickerExtensionHostContext *hostContext;

- (void).cxx_destruct;
- (id)broadcastPickerViewController;
- (id)hostContext;
- (void)sendMessageToExtension;
- (void)setBroadcastPickerViewController:(id)arg1;
- (void)setHostContext:(id)arg1;
- (oneway void)viewControllerDidFinish;

@end
