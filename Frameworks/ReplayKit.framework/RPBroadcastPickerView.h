/* made by EzioChiu
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPBroadcastPickerView : UIView <NSCoding, RPBroadcastPickerViewControllerDelegate> {
    UIButton * _broadcastPickerButton;
    RPBroadcastPickerStandaloneViewController * _broadcastPickerViewController;
    NSString * _preferredExtension;
    bool  _showsMicrophoneButton;
}

@property (nonatomic, retain) UIButton *broadcastPickerButton;
@property (nonatomic, retain) RPBroadcastPickerStandaloneViewController *broadcastPickerViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *preferredExtension;
@property (nonatomic) bool showsMicrophoneButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)broadcastPickerButton;
- (id)broadcastPickerViewController;
- (void)buttonPressed:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)preferredExtension;
- (void)screenCaptureChanged;
- (void)setBroadcastPickerButton:(id)arg1;
- (void)setBroadcastPickerViewController:(id)arg1;
- (void)setPreferredExtension:(id)arg1;
- (void)setShowsMicrophoneButton:(bool)arg1;
- (bool)showsMicrophoneButton;
- (void)viewControllerDidFinish;

@end
