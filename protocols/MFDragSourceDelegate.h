/* made by EzioChiu.
 */

@protocol MFDragSourceDelegate <NSObject>

@required

- (NSArray *)dragSource:(MFDragSource *)arg1 draggableItemsAtPoint:(struct CGPoint { double x1; double x2; })arg2;

@optional

- (long long)dragSource:(MFDragSource *)arg1 dataOwnerForSession:(id <UIDragSession>)arg2;
- (id)dragSource:(MFDragSource *)arg1 localObjectForDraggableItem:(id <UIItemProviderWriting>)arg2;
- (UIView *)dragSource:(MFDragSource *)arg1 previewForDraggableItem:(id <UIItemProviderWriting>)arg2;
- (bool)dragSource:(MFDragSource *)arg1 sessionAllowsMoveOperation:(id <UIDragSession>)arg2;
- (bool)dragSource:(MFDragSource *)arg1 sessionIsRestrictedToMail:(id <UIDragSession>)arg2;
- (NSString *)dragSource:(MFDragSource *)arg1 suggestedNameForDraggableItem:(id <UIItemProviderWriting>)arg2;
- (UITargetedDragPreview *)dragSource:(MFDragSource *)arg1 targetedPreviewForDraggableItem:(id <UIItemProviderWriting>)arg2;
- (NSData *)dragSource:(MFDragSource *)arg1 teamDataForDraggableItem:(id <UIItemProviderWriting>)arg2;
- (void)dragSource:(MFDragSource *)arg1 willEndInteractionWithItems:(NSArray *)arg2 dropOperation:(unsigned long long)arg3;

@end
