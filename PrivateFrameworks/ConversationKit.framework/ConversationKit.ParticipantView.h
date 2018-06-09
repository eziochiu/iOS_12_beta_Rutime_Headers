/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface ConversationKit.ParticipantView : UIView {
    void associatedVideoProvider;
    void audioVisualizationView;
    void backgroundBackdropView;
    void bottomBar;
    void bottomBarButton;
    void bottomBarHideTimer;
    void bottomBarLabel;
    void buzzButton;
    void contactGlowView;
    void contactView;
    void contentView;
    void debugProminenceLabel;
    void delegate;
    void doubleTapGestureRecognizer;
    void fakeVideoPlayer;
    void labelState;
    void lastConfigurationHashValue;
    void overlayBackdropView;
    void overlayConstraints;
    void overlayIconView;
    void overlaySpinner;
    void overlaySubtitleLabel;
    void overlayTitleLabel;
    void overlayTitleLabelBaselineConstraint;
    void overlayViewBottomLayoutGuide;
    void overlayViewTopLayoutGuide;
    void pausedVideoView;
    void shouldEnableDoubleTapGestureRecognizer;
    void singleTapGestureRecognizer;
    void sizeState;
    void squareLayoutGuide;
    void style;
    void videoView;
}

@property (nonatomic, readonly) UIVisualEffectView *bottomBar;
@property (nonatomic, readonly) UILabel *bottomBarLabel;
@property (nonatomic, readonly) _TtC15ConversationKit10BuzzButton *buzzButton;
@property (nonatomic, readonly) UIVisualEffectView *overlayBackdropView;
@property (nonatomic, readonly) UIImageView *overlayIconView;
@property (nonatomic, readonly) FTLabel *overlaySubtitleLabel;
@property (nonatomic, readonly) FTLabel *overlayTitleLabel;

- (id /* block */).cxx_destruct;
- (id)accessibilityDelegate;
- (bool)accessibilityInGrid;
- (bool)accessibilityInRoster;
- (bool)accessibilityIsFloating;
- (bool)accessibilityIsShowingVideo;
- (id)bottomBar;
- (id)bottomBarLabel;
- (id)buzzButton;
- (void)didTapBuzzButton;
- (void)didTapExpandButton;
- (void)handleDoubleTap:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)overlayBackdropView;
- (id)overlayIconView;
- (id)overlaySubtitleLabel;
- (id)overlayTitleLabel;

@end
