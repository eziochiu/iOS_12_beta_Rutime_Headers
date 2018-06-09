/* made by EzioChiu.
 */

@protocol MiroCollectionViewDelegate <UICollectionViewDelegate>

@optional

- (void)miroCollectionView:(MiroInteractiveCollectionView *)arg1 willBeginInteractiveMovementForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)miroCollectionViewDidCancelInteractiveMovement:(MiroInteractiveCollectionView *)arg1;
- (void)miroCollectionViewDidEndInteractiveMovement:(MiroInteractiveCollectionView *)arg1;

@end
