/* made by EzioChiu.
 */

@protocol UIDragInteractionDelegate <NSObject>

@required

- (NSArray *)dragInteraction:(UIDragInteraction *)arg1 itemsForBeginningSession:(id <UIDragSession>)arg2;

@optional

- (void)dragInteraction:(UIDragInteraction *)arg1 item:(UIDragItem *)arg2 willAnimateCancelWithAnimator:(id <UIDragAnimating>)arg3;
- (NSArray *)dragInteraction:(UIDragInteraction *)arg1 itemsForAddingToSession:(id <UIDragSession>)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (bool)dragInteraction:(UIDragInteraction *)arg1 prefersFullSizePreviewsForSession:(id <UIDragSession>)arg2;
- (UITargetedDragPreview *)dragInteraction:(UIDragInteraction *)arg1 previewForCancellingItem:(UIDragItem *)arg2 withDefault:(UITargetedDragPreview *)arg3;
- (UITargetedDragPreview *)dragInteraction:(UIDragInteraction *)arg1 previewForLiftingItem:(UIDragItem *)arg2 session:(id <UIDragSession>)arg3;
- (void)dragInteraction:(UIDragInteraction *)arg1 session:(id <UIDragSession>)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(UIDragInteraction *)arg1 session:(id <UIDragSession>)arg2 willAddItems:(NSArray *)arg3 forInteraction:(UIDragInteraction *)arg4;
- (void)dragInteraction:(UIDragInteraction *)arg1 session:(id <UIDragSession>)arg2 willEndWithOperation:(unsigned long long)arg3;
- (bool)dragInteraction:(UIDragInteraction *)arg1 sessionAllowsMoveOperation:(id <UIDragSession>)arg2;
- (void)dragInteraction:(UIDragInteraction *)arg1 sessionDidMove:(id <UIDragSession>)arg2;
- (void)dragInteraction:(UIDragInteraction *)arg1 sessionDidTransferItems:(id <UIDragSession>)arg2;
- (<UIDragSession> *)dragInteraction:(UIDragInteraction *)arg1 sessionForAddingItems:(NSArray *)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (bool)dragInteraction:(UIDragInteraction *)arg1 sessionIsRestrictedToDraggingApplication:(id <UIDragSession>)arg2;
- (void)dragInteraction:(UIDragInteraction *)arg1 sessionWillBegin:(id <UIDragSession>)arg2;
- (void)dragInteraction:(UIDragInteraction *)arg1 willAnimateLiftWithAnimator:(id <UIDragAnimating>)arg2 session:(id <UIDragSession>)arg3;

@end
