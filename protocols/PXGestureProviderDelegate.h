/* made by EzioChiu.
 */

@protocol PXGestureProviderDelegate <NSObject>

@required

- (void)gestureProvider:(PXGestureProvider *)arg1 didTriggerEvent:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })gestureProviderCurrentAssetRect:(PXGestureProvider *)arg1;

@end
