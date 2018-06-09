/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardDicationBackground : UIView {
    UIKeyboardDicationBackgroundGradientView * _gradient;
    NSArray * _shadows;
}

@property (nonatomic, retain) UIKeyboardDicationBackgroundGradientView *gradient;

- (void)dealloc;
- (id)gradient;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setGradient:(id)arg1;
- (id)shadows;

@end
