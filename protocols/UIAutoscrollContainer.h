/* made by EzioChiu.
 */

@protocol UIAutoscrollContainer

@required

- (struct CGPoint { double x1; double x2; })autoscrollContentOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrameForView:(UIView *)arg1;
- (void)setAutoscrollContentOffset:(struct CGPoint { double x1; double x2; })arg1;

@optional

- (void)setShouldAutoscroll:(bool)arg1;
- (bool)shouldAutoscroll;

@end