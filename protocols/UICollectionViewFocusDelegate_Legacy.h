/* made by EzioChiu.
 */

@protocol UICollectionViewFocusDelegate_Legacy <UICollectionViewDelegate>

@optional

- (bool)_collectionView:(UICollectionView *)arg1 canFocusItemAtIndexPath:(NSIndexPath *)arg2;
- (void)_collectionView:(UICollectionView *)arg1 didFocusItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 didFocusItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 didUnfocusItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)collectionView:(UICollectionView *)arg1 shouldUpdateFocusFromItemAtIndexPath:(NSIndexPath *)arg2 toView:(UIView *)arg3 heading:(unsigned long long)arg4;
- (NSIndexPath *)indexPathForPreferredFocusedItemForCollectionView:(UICollectionView *)arg1;

@end
