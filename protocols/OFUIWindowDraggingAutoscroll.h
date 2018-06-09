/* made by EzioChiu.
 */

@protocol OFUIWindowDraggingAutoscroll <NSObject>

@required

- (void)autoscroll:(float)arg1;
- (float)autoscrollDistance:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@optional

- (bool)canAutoscroll;

@end