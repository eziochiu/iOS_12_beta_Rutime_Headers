/* made by EzioChiu.
 */

@protocol CKPhotoPickerCollectionViewLayoutDelegate <NSObject>

@required

- (void)layout:(CKPhotoPickerCollectionViewLayout *)arg1 collectionView:(UICollectionView *)arg2 didUpdateVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 indexPath:(NSIndexPath *)arg4;

@end
