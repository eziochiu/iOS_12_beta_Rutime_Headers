/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface ConversationKit.InCallControlsParticipantTableViewCell : UITableViewCell {
    void avatarView;
    void callDelegate;
    void cameraIcon;
    void constraintsForCameraIconVisibleState;
    void constraintsForRingButtonVisibleState;
    void delegate;
    void isAccessiblityConstraintsEnabled;
    void nameLabel;
    void nameLabelFirstBaselineLayoutConstraint;
    void ringButton;
    void subtitleLabel;
    void subtitleLabelFirstBaselineLayoutConstraint;
    void subtitleLabelLastBaselineLayoutConstraint;
}

@property (nonatomic, readonly) UIButton *ringButton;

- (id /* block */).cxx_destruct;
- (void)didTapRing;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)ringButton;
- (void)traitCollectionDidChange:(id)arg1;

@end
