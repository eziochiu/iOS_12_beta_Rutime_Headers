/* made by EzioChiu.
 */

@protocol PXContextualNotificationDelegate <NSObject>

@optional

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contextualNotification:(PXContextualNotification *)arg1 containingFrameInCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (bool)contextualNotification:(PXContextualNotification *)arg1 shouldPassthroughPoint:(struct CGPoint { double x1; double x2; })arg2 inCoordinateSpace:(id <UICoordinateSpace>)arg3;
- (void)contextualNotificationDidDisappear:(PXContextualNotification *)arg1;
- (void)contextualNotificationWasDiscarded:(PXContextualNotification *)arg1;
- (void)contextualNotificationWasTapped:(PXContextualNotification *)arg1;
- (long long)preferredAnimationForContextualNotification:(PXContextualNotification *)arg1;
- (UIView *)preferredContainerViewForContextualNotification:(PXContextualNotification *)arg1;

@end
