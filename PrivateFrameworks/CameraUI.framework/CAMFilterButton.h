/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMFilterButton : UIButton <CAMAccessibilityHUDImageProvider> {
    long long  _layoutStyle;
    long long  _orientation;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _tappableEdgeInsets;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutStyle;
@property (getter=isOn, nonatomic) bool on;
@property (nonatomic) long long orientation;
@property (readonly) Class superclass;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tappableEdgeInsets;

+ (id)filterButtonWithLayoutStyle:(long long)arg1;

- (void)_commonCAMFilterButtonInitializationWithStyle:(long long)arg1;
- (id)_filterImage;
- (id)_filterOnImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)imageForAccessibilityHUD;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isOn;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (long long)orientation;
- (void)setHighlighted:(bool)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setOn:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tappableEdgeInsets;

@end
