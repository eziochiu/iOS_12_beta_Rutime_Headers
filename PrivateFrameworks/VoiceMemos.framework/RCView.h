/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCView : UIView {
    RCWaveformDataSource * _delegate;
    bool  _isCreatingSnapshot;
    RCNoAnimateLayerHelper * _noAnimationHelper;
    CAShapeLayer * _waveformLayer;
    CAShapeLayer * _whiteWaveformLayer;
}

@property (nonatomic) RCWaveformDataSource *delegate;
@property (nonatomic, readonly) bool isCreatingSnapshot;
@property (nonatomic, retain) RCNoAnimateLayerHelper *noAnimationHelper;
@property (nonatomic, readonly) CAShapeLayer *waveformLayer;
@property (nonatomic, readonly) CAShapeLayer *whiteWaveformLayer;

- (void).cxx_destruct;
- (void)_setNeedsVisibleTimeRangeRendering;
- (id)delegate;
- (id)init;
- (bool)isCreatingSnapshot;
- (id)noAnimationHelper;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNoAnimationHelper:(id)arg1;
- (id)snapshot;
- (id)waveformLayer;
- (id)whiteWaveformLayer;

@end
