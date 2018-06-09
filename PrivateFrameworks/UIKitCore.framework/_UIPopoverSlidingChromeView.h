/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPopoverSlidingChromeView : UIPopoverBackgroundView

+ (double)arrowBase;
+ (double)arrowHeight;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentViewInsets;
+ (double)cornerRadius;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentViewInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_shadowInsets;
- (struct CGSize { double x1; double x2; })_shadowOffset;
- (double)_shadowOpacity;
- (id)_shadowPathForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 arrowDirection:(unsigned long long)arg2;
- (double)_shadowRadius;
- (unsigned long long)arrowDirection;
- (double)arrowOffset;
- (void)layoutSubviews;
- (void)setArrowDirection:(unsigned long long)arg1;
- (void)setArrowOffset:(double)arg1;

@end
