/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPopoverBackgroundView : UIView <UIPopoverBackgroundViewMethods> {
    bool  __chromeHidden;
}

@property (setter=_setChromeHidden:, nonatomic) bool _chromeHidden;
@property (nonatomic) unsigned long long arrowDirection;
@property (nonatomic) double arrowOffset;

+ (double)_contentViewCornerRadiusForArrowDirection:(unsigned long long)arg1;
+ (double)arrowBase;
+ (double)arrowHeight;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentViewInsets;
+ (double)cornerRadius;
+ (bool)wantsDefaultContentAppearance;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_backgroundContentViewFrame;
- (bool)_chromeHidden;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentViewFrame;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentViewInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentViewInsetsForArrowDirection:(unsigned long long)arg1;
- (bool)_needsSeperateBlending;
- (void)_setChromeHidden:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_shadowInsets;
- (struct CGSize { double x1; double x2; })_shadowOffset;
- (double)_shadowOpacity;
- (id)_shadowPath;
- (id)_shadowPathForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 arrowDirection:(unsigned long long)arg2;
- (double)_shadowRadius;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateChrome;
- (void)_updateShadow;
- (bool)_wantsDefaultContentAppearance;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (unsigned long long)arrowDirection;
- (double)arrowOffset;
- (long long)backgroundStyle;
- (void)layoutSubviews;
- (void)setArrowDirection:(unsigned long long)arg1;
- (void)setArrowOffset:(double)arg1;

@end
