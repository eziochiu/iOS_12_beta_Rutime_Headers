/* made by EzioChiu.
 */

@protocol NUFeedHeadlineCollectionViewCellRenderer <NUFeedCollectionViewCellRenderer>

@required

- (UICollectionViewCell *)renderCollectionView:(UICollectionView *)arg1 renderedCellForHeadline:(id <FCHeadlineProviding>)arg2 atIndexPath:(NSIndexPath *)arg3;

@end
