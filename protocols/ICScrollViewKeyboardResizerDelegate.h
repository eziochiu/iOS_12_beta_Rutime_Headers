/* made by EzioChiu.
 */

@protocol ICScrollViewKeyboardResizerDelegate <NSObject>

@required

- (double)consumedBottomAreaForResizer:(ICScrollViewKeyboardResizer *)arg1;
- (UIScrollView *)keyboardResizerScrollView;

@optional

- (void)keyboardResizerAdjustInsetsWithKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scrollAboveHeight:(double)arg2 duration:(double)arg3;
- (bool)keyboardResizerAutoscrollAboveKeyboard;
- (double)topInsetForResizer:(ICScrollViewKeyboardResizer *)arg1;

@end
