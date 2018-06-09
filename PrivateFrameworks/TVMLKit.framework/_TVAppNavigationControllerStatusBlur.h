/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVAppNavigationControllerStatusBlur : UIView {
    UIView * _dimmingView;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, retain) UIColor *backgroundTintColor;
@property (nonatomic, retain) UIVisualEffect *visualEffect;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)backgroundTintColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBackgroundTintColor:(id)arg1;
- (void)setVisualEffect:(id)arg1;
- (id)visualEffect;

@end
