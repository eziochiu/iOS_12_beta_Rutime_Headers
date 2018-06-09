/* made by EzioChiu.
 */

@protocol _UICollectionViewDragSourceControllerDelegate <NSObject>

@required

- (void)dragSourceController:(_UICollectionViewDragSourceController *)arg1 didCancelLiftForItemsAtIndexPaths:(NSArray *)arg2;
- (void)dragSourceController:(_UICollectionViewDragSourceController *)arg1 didCompleteAnimatingCancelForItemsAtIndexPaths:(NSArray *)arg2;
- (void)dragSourceController:(_UICollectionViewDragSourceController *)arg1 didCompleteLiftForItemsAtIndexPaths:(NSArray *)arg2;
- (void)dragSourceController:(_UICollectionViewDragSourceController *)arg1 didEndForItemsAtIndexPaths:(NSArray *)arg2;
- (void)dragSourceController:(_UICollectionViewDragSourceController *)arg1 didSupplyCancellationPreviewForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)dragSourceController:(_UICollectionViewDragSourceController *)arg1 didUpdateItemCountOfSelectedItems:(long long)arg2;
- (void)dragSourceController:(_UICollectionViewDragSourceController *)arg1 didUpdateItemsAtIndexPaths:(NSArray *)arg2;
- (void)dragSourceController:(_UICollectionViewDragSourceController *)arg1 willBeginAnimatingCancelForItemsAtIndexPaths:(NSArray *)arg2 withAnimator:(id <UIDragAnimating>)arg3;
- (void)dragSourceController:(_UICollectionViewDragSourceController *)arg1 willBeginLiftForItemsAtIndexPaths:(NSArray *)arg2;
- (void)dragSourceController:(_UICollectionViewDragSourceController *)arg1 willEndForItemsAtIndexPaths:(NSArray *)arg2 withDropOperation:(unsigned long long)arg3;
- (void)dragSourceControllerSessionWillBegin:(_UICollectionViewDragSourceController *)arg1;

@end
