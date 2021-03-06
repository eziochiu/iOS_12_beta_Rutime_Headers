/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsParentContainerView : UIView {
    MediaControlsContainerView * _mediaControlsContainerView;
    UIView * _mediaControlsRoutingPickerView;
    UIView * _routingView;
    long long  _routingViewControllerAnimationCount;
    long long  _selectedMode;
    long long  _style;
}

@property (nonatomic, retain) MediaControlsContainerView *mediaControlsContainerView;
@property (nonatomic, retain) UIView *mediaControlsRoutingPickerView;
@property (nonatomic, retain) UIView *routingView;
@property (nonatomic) long long routingViewControllerAnimationCount;
@property (nonatomic) long long selectedMode;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (void)_setInitialFrameForRoutingView:(id)arg1;
- (void)_toggleRoutingPickerAnimated:(bool)arg1;
- (void)_updateRoutingPickerVisibilityAnimated:(bool)arg1;
- (void)_updateTimeControlVisibility:(id)arg1;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)mediaControlsContainerView;
- (id)mediaControlsRoutingPickerView;
- (id)routingView;
- (long long)routingViewControllerAnimationCount;
- (long long)selectedMode;
- (void)setMediaControlsContainerView:(id)arg1;
- (void)setMediaControlsRoutingPickerView:(id)arg1;
- (void)setRoutingView:(id)arg1;
- (void)setRoutingViewControllerAnimationCount:(long long)arg1;
- (void)setSelectedMode:(long long)arg1;
- (void)setSelectedMode:(long long)arg1 animated:(bool)arg2;
- (void)setStyle:(long long)arg1;
- (long long)style;

@end
