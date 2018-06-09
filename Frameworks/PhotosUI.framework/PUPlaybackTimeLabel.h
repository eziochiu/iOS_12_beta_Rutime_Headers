/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPlaybackTimeLabel : UIView {
    UIView * __backgroundView;
    UILabel * __label;
    bool  __needsUpdateBackground;
    bool  __needsUpdateLabel;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _currentPlaybackTime;
    long long  _format;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _playbackDuration;
}

@property (nonatomic, readonly) UIView *_backgroundView;
@property (nonatomic, readonly) UILabel *_label;
@property (setter=_setNeedsUpdateBackground:, nonatomic) bool _needsUpdateBackground;
@property (setter=_setNeedsUpdateLabel:, nonatomic) bool _needsUpdateLabel;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } currentPlaybackTime;
@property (nonatomic) long long format;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } playbackDuration;

- (void).cxx_destruct;
- (id)_backgroundView;
- (void)_invalidateBackground;
- (void)_invalidateLabel;
- (id)_label;
- (id)_labelTextWithFormat:(long long)arg1 elapsedInterval:(double)arg2 remainingInterval:(double)arg3;
- (struct CGSize { double x1; double x2; })_maximumLabelSizeWithDuration:(double)arg1;
- (bool)_needsUpdate;
- (bool)_needsUpdateBackground;
- (bool)_needsUpdateLabel;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateBackground:(bool)arg1;
- (void)_setNeedsUpdateLabel:(bool)arg1;
- (id)_stringFromTimeInterval:(double)arg1;
- (void)_updateBackgroundIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateLabelIfNeeded;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentPlaybackTime;
- (long long)format;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })playbackDuration;
- (void)setCurrentPlaybackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setFormat:(long long)arg1;
- (void)setPlaybackDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
