/* made by EzioChiu.
 */

@protocol _UIViewDraggingSourceDelegatePrivate <_UIViewDraggingSourceDelegate>

@optional

- (NSArray *)_requiredContextIDsForDragSessionInView:(UIView *)arg1;
- (bool)_shouldPerformHitTestingForDragSessionInView:(UIView *)arg1;
- (long long)_view:(UIView *)arg1 dataOwnerOfDragSourceWithIndex:(unsigned long long)arg2;

@end
