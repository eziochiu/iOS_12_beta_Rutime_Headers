/* made by EzioChiu.
 */

@protocol UICollectionViewDragSource <NSObject>

@optional

- (void)_collectionView:(UICollectionView *)arg1 dragSessionDidEnd:(id <UIDragSession>)arg2;
- (void)_collectionView:(UICollectionView *)arg1 dragSessionWillBegin:(id <UIDragSession>)arg2;
- (NSArray *)_collectionView:(UICollectionView *)arg1 itemsForAddingToDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3 point:(struct CGPoint { double x1; double x2; })arg4;
- (NSArray *)_collectionView:(UICollectionView *)arg1 itemsForBeginningDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3;
- (UIDragPreviewParameters *)_collectionView:(UICollectionView *)arg1 liftingPreviewParametersForItemAtIndexPath:(NSIndexPath *)arg2;

@end
