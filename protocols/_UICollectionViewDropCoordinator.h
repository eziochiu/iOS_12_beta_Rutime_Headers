/* made by EzioChiu.
 */

@protocol _UICollectionViewDropCoordinator <UICollectionViewDropCoordinator>

@required

- (UICollectionViewDropProposal *)dropProposal;
- (<UIDropSession> *)dropSession;
- (void)dropToItemAtIndexPath:(NSIndexPath *)arg1 forDragItem:(UIDragItem *)arg2;
- (<_UICollectionViewDropPlaceholderContext> *)dropToPlaceholderInsertedAtIndexPath:(void *)arg1 reuseIdentifier:(void *)arg2 forDragItem:(void *)arg3 cellUpdateHandler:(void *)arg4; // needs 4 arg types, found 9: NSIndexPath *, NSString *, UIDragItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UICollectionViewCell *, void*
- (void)dropToTarget:(UIDragPreviewTarget *)arg1 forDragItem:(UIDragItem *)arg2;

@end
