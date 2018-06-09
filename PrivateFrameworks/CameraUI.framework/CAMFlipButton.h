/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMFlipButton : UIButton <CAMAccessibilityHUDImageProvider> {
    UIImageView * __backgroundView;
    UIImageView * __imageView;
    long long  _backgroundStyle;
    long long  _layoutStyle;
    long long  _orientation;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _tappableEdgeInsets;
}

@property (nonatomic, retain) UIImageView *_backgroundView;
@property (nonatomic, readonly) UIImageView *_imageView;
@property (nonatomic) long long backgroundStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long orientation;
@property (readonly) Class superclass;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tappableEdgeInsets;

+ (id)flipButtonWithLayoutStyle:(long long)arg1;

- (void).cxx_destruct;
- (id)_backgroundView;
- (void)_commonCAMFlipButtonInitializationWithStyle:(long long)arg1;
- (id)_imageView;
- (void)_updateImages;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)animateFlipClockwise:(bool)arg1;
- (long long)backgroundStyle;
- (id)imageForAccessibilityHUD;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (id)mainImageNameForAccessibilityHUD:(bool)arg1;
- (long long)orientation;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setBackgroundStyle:(long long)arg1 animated:(bool)arg2;
- (void)setHighlighted:(bool)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)set_backgroundView:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tappableEdgeInsets;

@end
