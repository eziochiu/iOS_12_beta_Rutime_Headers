/* made by EzioChiu.
 */

@protocol CAMFilterScrubberCollectionViewLayoutDelegate <NSObject>

@required

- (double)filterScrubberCollectionViewLayout:(CAMFilterScrubberCollectionViewLayout *)arg1 alphaForItemAtIndexPath:(NSIndexPath *)arg2;
- (struct CGSize { double x1; double x2; })filterScrubberCollectionViewLayout:(CAMFilterScrubberCollectionViewLayout *)arg1 sizeForItemAtIndexPath:(NSIndexPath *)arg2;

@end
