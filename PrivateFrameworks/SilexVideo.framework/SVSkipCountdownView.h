/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVSkipCountdownView : UIView {
    SVAutoLayoutLabel * _skipInLabel;
    double  _threshold;
    SVAutoLayoutLabel * _thresholdLabel;
}

@property (nonatomic, retain) SVAutoLayoutLabel *skipInLabel;
@property (nonatomic) double threshold;
@property (nonatomic, retain) SVAutoLayoutLabel *thresholdLabel;

- (void).cxx_destruct;
- (id)accessibilityElements;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (void)setSkipInLabel:(id)arg1;
- (void)setThreshold:(double)arg1;
- (void)setThresholdLabel:(id)arg1;
- (id)skipInLabel;
- (double)threshold;
- (id)thresholdLabel;
- (void)updateConstraints;

@end
