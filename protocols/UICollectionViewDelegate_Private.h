/* made by EzioChiu.
 */

@protocol UICollectionViewDelegate_Private <UICollectionViewDelegate, UICollectionViewFocusDelegate_Legacy>

@optional

- (bool)_collectionView:(UICollectionView *)arg1 shouldApplyTransitionContentOffset:(struct CGPoint { double x1; double x2; })arg2 contentSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)_collectionView:(UICollectionView *)arg1 shouldSpringLoadItemAtIndexPath:(NSIndexPath *)arg2 withContext:(id <UISpringLoadedInteractionContext>)arg3;
- (struct CGPoint { double x1; double x2; })_collectionView:(UICollectionView *)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (NSIndexPath *)_collectionView:(UICollectionView *)arg1 targetIndexPathForMoveFromItemAtIndexPath:(NSIndexPath *)arg2 toProposedIndexPath:(NSIndexPath *)arg3;
- (UICollectionViewCell *)_collectionView:(UICollectionView *)arg1 templateLayoutCellForCellsWithReuseIdentifier:(NSString *)arg2;
- (void)_collectionView:(UICollectionView *)arg1 willLayoutCell:(UICollectionViewCell *)arg2 usingTemplateLayoutCell:(UICollectionViewCell *)arg3 forItemAtIndexPath:(NSIndexPath *)arg4;
- (NSIndexPath *)_indexPathOfReferenceItemForLayoutTransitionInCollectionView:(UICollectionView *)arg1;

@end
