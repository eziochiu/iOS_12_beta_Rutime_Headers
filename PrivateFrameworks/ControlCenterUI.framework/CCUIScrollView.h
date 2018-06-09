/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIScrollView : UIScrollView

@property (nonatomic) <CCUIScrollViewDelegate> *delegate;

- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
