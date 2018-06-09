/* made by EzioChiu.
 */

@protocol PUPhotosSharingCollectionViewLayoutDelegate <PUHorizontalTiledCollectionViewLayoutDelegate>

@required

- (double)layout:(PUPhotosSharingCollectionViewLayout *)arg1 collectionView:(UICollectionView *)arg2 bottomBadgeInsetforItemAtIndexPath:(NSIndexPath *)arg3;
- (void)layout:(PUPhotosSharingCollectionViewLayout *)arg1 collectionView:(UICollectionView *)arg2 itemAtIndexPath:(NSIndexPath *)arg3 didChangeToVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (struct CGSize { double x1; double x2; })layout:(PUPhotosSharingCollectionViewLayout *)arg1 collectionView:(UICollectionView *)arg2 sizeForBadgeViewOfKind:(NSString *)arg3 forItemAtIndexPath:(NSIndexPath *)arg4;

@end
