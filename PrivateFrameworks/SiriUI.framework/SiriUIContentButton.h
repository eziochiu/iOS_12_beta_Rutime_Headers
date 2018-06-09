/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIContentButton : UIButton {
    UIColor * _defaultColorForTemplate;
    UIColor * _highlightColorForTemplate;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hitTestEdgeInsets;
    bool  _isRenderingImageTemplate;
    bool  _usePlatterStyle;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitTestEdgeInsets;
@property (nonatomic) bool usePlatterStyle;

+ (id)button;
+ (id)buttonWithImageMask:(id)arg1;
+ (id)buttonWithImageMask:(id)arg1 style:(long long)arg2;
+ (id)buttonWithImageTemplate:(id)arg1;
+ (id)buttonWithImageTemplate:(id)arg1 style:(long long)arg2;
+ (id)buttonWithLightWeightFont;
+ (id)buttonWithMediumWeightFont;

- (void).cxx_destruct;
- (void)_setIsRenderingImageTemplate:(bool)arg1;
- (void)_updateStyling;
- (void)_updateTintColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitTestEdgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setDefaultColorForTemplate:(id)arg1;
- (void)setHighlightColorForTemplate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHitTestEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setUsePlatterStyle:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)usePlatterStyle;

@end
