/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKVibrationRecorderProgressDotImageView : UIImageView {
    double  _accessibilityFrameAdditionalHeight;
    double  _duration;
    double  _previousPauseDuration;
    double  _previousPauseTimeInterval;
    double  _timeInterval;
}

@property (nonatomic) double accessibilityFrameAdditionalHeight;
@property (nonatomic) double duration;
@property (nonatomic) double previousPauseDuration;
@property (nonatomic) double previousPauseTimeInterval;
@property (nonatomic) double timeInterval;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (double)accessibilityFrameAdditionalHeight;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (double)duration;
- (bool)isAccessibilityElement;
- (double)previousPauseDuration;
- (double)previousPauseTimeInterval;
- (void)setAccessibilityFrameAdditionalHeight:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setPreviousPauseDuration:(double)arg1;
- (void)setPreviousPauseTimeInterval:(double)arg1;
- (void)setTimeInterval:(double)arg1;
- (double)timeInterval;

@end
