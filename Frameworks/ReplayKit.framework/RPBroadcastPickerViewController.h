/* made by EzioChiu
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPBroadcastPickerViewController : UIViewController <RPBroadcastPickerViewControllerDelegate> {
    RPBroadcastPickerHostViewController * _hostViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RPBroadcastPickerHostViewController *hostViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)hostViewController;
- (id)initWithBundleIdentifier:(id)arg1 showsMicrophoneButton:(bool)arg2;
- (void)setHostViewController:(id)arg1;
- (void)viewControllerDidFinish;

@end
