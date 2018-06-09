/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface CNKStagingAreaViewController : UIViewController <CNKFaceTimeInCallControlsViewControllerDelegate> {
    void audioVisualizationView;
    void call;
    void constraintController;
    void controlsDragController;
    void controlsViewController;
    void conversationController;
    void delegate;
    void deviceOrientation;
    void hasJoined;
    void isWaitingToConnect;
    void localPreviewBackView;
    void localPreviewFrontView;
    void numberFormatter;
    void participantLabel;
    void scheduledUpdateTimer;
    void secondaryParticipantLabel;
    void stagingAreaDelegate;
    void videoDeviceController;
}

@property (nonatomic, retain) TUCall *call;
@property (nonatomic) <CNKFaceTimeMultiwayConversationViewControllerDelegate> *delegate;
@property (nonatomic) long long deviceOrientation;
@property (nonatomic) <CNKStagingAreaViewControllerDelegate> *stagingAreaDelegate;

- (id /* block */).cxx_destruct;
- (id)call;
- (id)delegate;
- (long long)deviceOrientation;
- (void)didTapJoinButton;
- (void)didTapLeaveButton;
- (void)didTapSwapLocalParticipantCamera;
- (void)didTapToggleVideoMute;
- (void)handleToggleInCallControlsGesture:(id)arg1;
- (void)inCallControlsViewController:(id)arg1 didTap:(long long)arg2;
- (id)initWithActiveCall:(id)arg1;
- (id)initWithActiveCall:(id)arg1 hasJoined:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setCall:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setStagingAreaDelegate:(id)arg1;
- (id)stagingAreaDelegate;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
