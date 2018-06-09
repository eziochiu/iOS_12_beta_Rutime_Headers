/* made by EzioChiu.
 */

@protocol PLExpandedPlatter <PLPlatter>

@required

- (struct CGSize { double x1; double x2; })actionsSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })contentSizeExcludingActions;
- (struct CGSize { double x1; double x2; })customContentSize;
- (UIControl *)dismissControl;
- (NSArray *)interfaceActions;
- (bool)isActionsHidden;
- (UIScrollView *)scrollView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewFrame;
- (void)setActionsHidden:(bool)arg1;
- (void)setCustomContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setInterfaceActions:(NSArray *)arg1;
- (struct CGSize { double x1; double x2; })sizeExcludingActions;

@end
