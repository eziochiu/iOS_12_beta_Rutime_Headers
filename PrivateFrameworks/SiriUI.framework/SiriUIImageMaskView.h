/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIImageMaskView : UIView {
    UIImage * _maskImage;
}

@property (nonatomic, retain) UIImage *maskImage;

+ (id)imageMaskViewWithDefaultChevron;
+ (id)imageMaskViewWithImage:(id)arg1;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)maskImage;
- (void)setMaskColor:(id)arg1;
- (void)setMaskImage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
