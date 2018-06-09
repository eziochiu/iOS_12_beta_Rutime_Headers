/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTUConversationBalloonView : CKColoredBalloonView {
    bool  _animating;
    UILabel * _durationLabel;
    UIImageView * _iconImageView;
    UIButton * _joinButton;
    unsigned long long  _state;
    UILabel * _statusLabel;
    UILabel * _titleLabel;
    NSUUID * _tuConversationUUID;
}

@property (nonatomic) bool animating;
@property (nonatomic, retain) UILabel *durationLabel;
@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic, retain) UIButton *joinButton;
@property (nonatomic) unsigned long long state;
@property (nonatomic, retain) UILabel *statusLabel;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSUUID *tuConversationUUID;

+ (struct CGSize { double x1; double x2; })facetimeIconSize;
+ (id)facetimeImageForSize:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (id)_currentCall;
- (void)_joinButtonTapped:(id)arg1;
- (id)_joinStateStatusString;
- (void)_updateStatusLabelForDuration;
- (bool)animating;
- (BOOL)color;
- (void)configureForCurrentState;
- (void)configureForTUConversationChatItem:(id)arg1;
- (id)durationLabel;
- (id)iconImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)joinButton;
- (void)layoutSubviews;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setAnimating:(bool)arg1;
- (void)setDurationLabel:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setJoinButton:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setStatusLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTuConversationUUID:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (unsigned long long)state;
- (id)statusLabel;
- (id)titleLabel;
- (id)tuConversation;
- (id)tuConversationUUID;
- (bool)wantsGradient;

@end
