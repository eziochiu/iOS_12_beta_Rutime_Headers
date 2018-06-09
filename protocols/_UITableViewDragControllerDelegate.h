/* made by EzioChiu.
 */

@protocol _UITableViewDragControllerDelegate <NSObject>

@required

- (void)_animateDragCancelForCell:(UITableViewCell *)arg1;
- (void)_animateLiftOfRowsAtIndexPaths:(NSOrderedSet *)arg1;
- (_UITableViewDropAnimationContainerView *)_beginAnimatingDropOfCell:(UITableViewCell *)arg1 isCanceling:(bool)arg2;
- (bool)_canBeginDragAtPoint:(struct CGPoint { double x1; double x2; })arg1 indexPath:(NSIndexPath *)arg2;
- (long long)_dataOwnerForDragSession:(id <UIDragSession>)arg1 atIndexPath:(NSIndexPath *)arg2;
- (UIDragPreviewParameters *)_dragPreviewParametersForIndexPath:(NSIndexPath *)arg1;
- (bool)_dragSessionAllowsMoveOperation:(id <UIDragSession>)arg1;
- (void)_dragSessionDidEnd:(id <UIDragSession>)arg1;
- (bool)_dragSessionIsRestrictedToDraggingApplication:(id <UIDragSession>)arg1;
- (void)_dragSessionWillBegin:(id <UIDragSession>)arg1;
- (void)_endAnimatingDropOfCell:(UITableViewCell *)arg1;
- (NSArray *)_itemsForAddingToDragSession:(id <UIDragSession>)arg1 atIndexPath:(NSIndexPath *)arg2 point:(struct CGPoint { double x1; double x2; })arg3 withDataOwner:(long long)arg4;
- (NSArray *)_itemsForBeginningDragSession:(id <UIDragSession>)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)_prepareToLiftRowsAtIndexPaths:(NSOrderedSet *)arg1;
- (NSOrderedSet *)_rowsToIncludeInDragSession:(id <UIDragSession>)arg1 atIndexPath:(NSIndexPath *)arg2 withDataOwner:(long long)arg3;
- (void)_updateAppearanceOfVisibleRowsForDragState;

@end
