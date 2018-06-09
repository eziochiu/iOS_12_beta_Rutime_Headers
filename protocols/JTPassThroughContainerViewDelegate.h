/* made by EzioChiu.
 */

@protocol JTPassThroughContainerViewDelegate <NSObject>

@required

- (bool)passThroughContainerView:(JTPassThroughContainerView *)arg1 shouldHandleTouchWithinView:(UIView *)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3;

@end
