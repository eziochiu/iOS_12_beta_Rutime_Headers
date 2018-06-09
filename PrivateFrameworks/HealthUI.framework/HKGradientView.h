/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKGradientView : UIView {
    HKGradient * _gradient;
}

@property (nonatomic, retain) HKGradient *gradient;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_updateGradientLayer;
- (id)gradient;
- (id)initWithGradient:(id)arg1;
- (void)maskAllCornersWithRadius:(double)arg1;
- (void)maskCorners:(unsigned long long)arg1 radius:(double)arg2;
- (void)setGradient:(id)arg1;

@end