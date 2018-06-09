/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPAVPlayerView : UIView {
    _MPAVPlayerViewPlayerLayerView * _playerLayerView;
    NSString * _targetVideoGravity;
    UIViewPropertyAnimator * _videoGravityAnimator;
}

@property (nonatomic, retain) AVPlayer *player;
@property (nonatomic, readonly) _MPAVPlayerViewPlayerLayerView *playerLayerView;
@property (nonatomic, copy) NSString *targetVideoGravity;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } videoBounds;
@property (nonatomic, copy) NSString *videoGravity;
@property (nonatomic, retain) UIViewPropertyAnimator *videoGravityAnimator;

- (void).cxx_destruct;
- (bool)_isDescendantOfScrollView;
- (id)_mediaTimingFunctionForCurrentAnimationCurve;
- (void)_updatePlayerLayerViewFrame;
- (void)_updatePlayerLayerViewFrame:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)player;
- (id)playerLayerView;
- (void)setPlayer:(id)arg1;
- (void)setTargetVideoGravity:(id)arg1;
- (void)setVideoGravity:(id)arg1;
- (void)setVideoGravity:(id)arg1 duration:(float)arg2;
- (void)setVideoGravityAnimator:(id)arg1;
- (id)targetVideoGravity;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoBounds;
- (id)videoGravity;
- (id)videoGravityAnimator;
- (void)willMoveToWindow:(id)arg1;

@end