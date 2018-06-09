/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMExposureBiasSliderThumb : UIView {
    float  _normalizedExposureValue;
}

@property (nonatomic, readonly) double maxRadius;
@property (nonatomic) float normalizedExposureValue;

- (double)_interpolatedValueWithMin:(double)arg1 mid:(double)arg2 max:(double)arg3;
- (double)_sunRadius;
- (double)_sunRayLength;
- (double)_sunRaySpacing;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)maxRadius;
- (float)normalizedExposureValue;
- (void)setNormalizedExposureValue:(float)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;

@end
