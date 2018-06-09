/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface CNKFaceTimeMultiwayConversationViewController : UIViewController <AVCEffectsDelegate, CFXCameraViewControllerDelegate, CFXEffectBrowserContentPresenterDelegate, CNKFaceTimeInCallControlsViewControllerDelegate> {
    void avcEffects;
    void conversationController;
    void delegate;
    void deviceOrientation;
    void gridSingleTapGestureRecognizer;
    void inCallControlsDismissTimer;
    void localSingleTapGestureRecognizer;
    void mostActiveParticipantsController;
    void scheduledUpdateTimer;
    void viewContent;
}

@property (nonatomic, readonly) TUCall *call;
@property (nonatomic) <CNKFaceTimeMultiwayConversationViewControllerDelegate> *delegate;
@property (nonatomic) long long deviceOrientation;

- (id /* block */).cxx_destruct;
- (id)accessibilityConstraintController;
- (id)call;
- (void)cameraViewController:(id)arg1 didRenderFrame:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (long long)deviceOrientation;
- (void)didCaptureVideoFrame:(id)arg1;
- (void)didTapLeaveConversation:(id)arg1;
- (void)effectBrowserViewController:(id)arg1 willChangeDockHeight:(double)arg2;
- (void)handleToggleInCallControlsGesture:(id)arg1;
- (void)inCallControlsViewController:(id)arg1 didTap:(long long)arg2;
- (id)initWithActiveCall:(id)arg1;
- (id)initWithActiveCall:(id)arg1 stagingAreaViewController:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setControlsState:(long long)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (void)updateViewConstraints;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
