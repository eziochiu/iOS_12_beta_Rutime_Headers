/* made by EzioChiu.
 */

@protocol MusicCollectionViewDelegate <UICollectionViewDelegate>

@optional

- (void)collectionView:(UICollectionView *)arg1 didSelectAddButtonForCell:(UICollectionViewCell *)arg2;
- (void)collectionViewTintColorDidChange:(UICollectionView *)arg1;

@end
