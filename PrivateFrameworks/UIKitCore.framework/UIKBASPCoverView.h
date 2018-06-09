/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBASPCoverView : UIView {
    CAGradientLayer * _gradientLayer;
}

@property (nonatomic, retain) CAGradientLayer *gradientLayer;

+ (id)ASPCoverView:(bool)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 isRightToLeft:(bool)arg3;
+ (id)ASPCoverViewColor;

- (void).cxx_destruct;
- (id)gradientLayer;
- (id)initCoverBackgroundViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isRightToLeft:(bool)arg2;
- (id)initCoverViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isRightToLeft:(bool)arg2;
- (void)layoutSubviews;
- (void)setGradientLayer:(id)arg1;

@end
