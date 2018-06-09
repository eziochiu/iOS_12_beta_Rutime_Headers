/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKEditOptionPickerSideView : UIView {
    double  _breathingScale;
    double  _contentAlpha;
    UIView * _optionView;
}

@property (nonatomic, retain) UIView *optionView;

- (void).cxx_destruct;
- (void)_applyContentAlpha;
- (void)applyBreathingScale:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)optionView;
- (void)setOptionView:(id)arg1;
- (void)setRotationFromFront:(double)arg1;

@end
