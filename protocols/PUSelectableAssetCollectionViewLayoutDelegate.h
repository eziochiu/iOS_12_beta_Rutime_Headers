/* made by EzioChiu.
 */

@protocol PUSelectableAssetCollectionViewLayoutDelegate <PUHorizontalCollectionViewLayoutDelegate>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layout:(PUSelectableAssetCollectionViewLayout *)arg1 collectionView:(UICollectionView *)arg2 selectionBadgeFrameForItemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 atIndexPath:(NSIndexPath *)arg4;

@end
