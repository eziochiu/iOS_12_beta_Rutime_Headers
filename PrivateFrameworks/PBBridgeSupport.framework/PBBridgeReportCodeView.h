/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBridgeReportCodeView : UIView {
    NSTimer * _animationTimer;
    long long  _frameIndex;
    NSMutableArray * _frames;
}

@property (nonatomic, retain) NSTimer *animationTimer;
@property (nonatomic) long long frameIndex;
@property (nonatomic, retain) NSMutableArray *frames;

- (void).cxx_destruct;
- (void)_tick:(id)arg1;
- (void)addFrame:(id)arg1;
- (id)animationTimer;
- (long long)frameIndex;
- (id)frames;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)playAnimation;
- (void)setAnimationTimer:(id)arg1;
- (void)setFrameIndex:(long long)arg1;
- (void)setFrames:(id)arg1;
- (void)stopAnimation;

@end
