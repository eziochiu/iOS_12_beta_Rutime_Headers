/* made by EzioChiu.
 */

@protocol STScrollViewDelegate <NSObject>

@required

- (void)didTouchScrollView:(STScrollView *)arg1 withEvent:(UIEvent *)arg2;
- (bool)shouldPreventDraggingForScrollView:(STScrollView *)arg1;

@end
