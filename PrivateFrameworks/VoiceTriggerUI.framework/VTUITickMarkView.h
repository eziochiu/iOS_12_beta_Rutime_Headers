/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUITickMarkView : UIView {
    int  _animState;
    id /* block */  _completionBlock;
    bool  _completionCalled;
    NSLock * _completionLock;
    long long  _currentFrame;
    long long  _currentPreferredFrameRate;
    CADisplayLink * _displayLink;
    long long  _fadeInFrames;
    long long  _fadeOutFrames;
    long long  _pauseFrames;
    NSTimer * _safetyTimer;
    bool  _shown;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)handleSafetyTimer:(id)arg1;
- (struct CGImage { }*)imageMask:(bool)arg1;
- (id)init;
- (void)layoutSubviews;
- (void)setHidden:(bool)arg1;
- (void)setUpDisplayLink;
- (void)startAnimationsForTickMark:(bool)arg1 fadeInFrames:(long long)arg2 pauseFrames:(long long)arg3 fadeOutFrames:(long long)arg4 completion:(id /* block */)arg5;
- (void)tearDownDisplayLink;

@end
