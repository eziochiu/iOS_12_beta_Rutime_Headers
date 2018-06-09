/* made by EzioChiu.
 */

@protocol PUCollectionViewLayoutProvider <NSObject>

@required

- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (NSArray *)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (UICollectionViewLayoutAttributes *)layoutAttributesForItemAtIndexPath:(NSIndexPath *)arg1;

@optional

- (UICollectionViewLayoutAttributes *)layoutAttributesForDecorationViewOfKind:(NSString *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (UICollectionViewLayoutAttributes *)layoutAttributesForSupplementaryViewOfKind:(NSString *)arg1 atIndexPath:(NSIndexPath *)arg2;

@end
