/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPreviewPresentationEffectView : UIView {
    UIColor * _shadowColor;
    bool  _shouldRasterizeForTransition;
}

@property (nonatomic) double blurRadius;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double shadowAlpha;
@property (nonatomic, copy) UIColor *shadowColor;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowOffset;
@property (nonatomic) double shadowRadius;
@property (nonatomic) bool shouldRasterizeForTransition;

- (void).cxx_destruct;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (double)blurRadius;
- (double)cornerRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBlurRadius:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setShadowAlpha:(double)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowRadius:(double)arg1;
- (void)setShouldRasterizeForTransition:(bool)arg1;
- (double)shadowAlpha;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (double)shadowRadius;
- (bool)shouldRasterizeForTransition;

@end
