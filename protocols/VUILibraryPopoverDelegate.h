/* made by EzioChiu.
 */

@protocol VUILibraryPopoverDelegate <NSObject>

@required

- (void)popoverView:(UICollectionView *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (struct CGSize { double x1; double x2; })popoverView:(UICollectionView *)arg1 sizeForItemAtIndexPath:(NSIndexPath *)arg2;

@end
