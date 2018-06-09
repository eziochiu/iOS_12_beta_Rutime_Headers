/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface CNKFaceTimeInCallControlsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void audioIsEnabled;
    void delegate;
    void effectsButtonIsSelected;
    void isExpanded;
    void joinLeaveButtonTopConstraintConstant;
    void localParticipant;
    void mode;
    void participantDelegate;
    void participants;
    void participantsViewControllerDelegate;
    void shouldShowEffects;
    void shouldShowJoinButton;
    void videoIsEnabled;
    void viewContent;
}

@property (nonatomic) bool audioIsEnabled;
@property (nonatomic) <CNKFaceTimeInCallControlsViewControllerDelegate> *delegate;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) bool effectsButtonIsSelected;
@property (nonatomic) bool isExpanded;
@property (nonatomic) bool shouldShowJoinButton;
@property (nonatomic) bool videoIsEnabled;

- (id /* block */).cxx_destruct;
- (id)accessibilityCameraButton;
- (id)accessibilityCameraLabel;
- (id)accessibilityDisableVideoButton;
- (id)accessibilityDisableVideoLabel;
- (id)accessibilityEffectsButton;
- (id)accessibilityEffectsLabel;
- (id)accessibilityExpandButton;
- (id)accessibilityHotdog;
- (id)accessibilityJoinLeaveButton;
- (id)accessibilityMuteAudioButton;
- (id)accessibilityMuteAudioLabel;
- (id)accessibilityRouteButton;
- (id)accessibilityRouteLabel;
- (bool)audioIsEnabled;
- (id)delegate;
- (id)description;
- (void)didTapEffects;
- (void)didTapExpand;
- (void)didTapFlipCamera;
- (void)didTapJoinConversation;
- (void)didTapLeaveConversation;
- (void)didTapOpenMessages;
- (void)didTapRoutePicker;
- (void)didTapToggleMuteAudio;
- (void)didToggleMuteCamera;
- (bool)effectsButtonIsSelected;
- (id)initWithActiveCall:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isExpanded;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setAudioIsEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEffectsButtonIsSelected:(bool)arg1;
- (void)setIsExpanded:(bool)arg1;
- (void)setShouldShowJoinButton:(bool)arg1;
- (void)setVideoIsEnabled:(bool)arg1;
- (bool)shouldShowJoinButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateControlsVisibilityForExpandedState:(bool)arg1;
- (void)updateViewConstraints;
- (bool)videoIsEnabled;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
