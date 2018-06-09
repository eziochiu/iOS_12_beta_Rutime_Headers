/* made by EzioChiu.
 */

@protocol UICollectionViewDropCoordinator <NSObject>

@required

- (NSIndexPath *)destinationIndexPath;
- (<UIDragAnimating> *)dropItem:(UIDragItem *)arg1 intoItemAtIndexPath:(NSIndexPath *)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (<UIDragAnimating> *)dropItem:(UIDragItem *)arg1 toItemAtIndexPath:(NSIndexPath *)arg2;
- (<UICollectionViewDropPlaceholderContext> *)dropItem:(UIDragItem *)arg1 toPlaceholder:(UICollectionViewDropPlaceholder *)arg2;
- (<UIDragAnimating> *)dropItem:(UIDragItem *)arg1 toTarget:(UIDragPreviewTarget *)arg2;
- (NSArray *)items;
- (UICollectionViewDropProposal *)proposal;
- (<UIDropSession> *)session;

@end
