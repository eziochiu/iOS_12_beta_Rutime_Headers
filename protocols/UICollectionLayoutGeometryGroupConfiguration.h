/* made by EzioChiu.
 */

@protocol UICollectionLayoutGeometryGroupConfiguration <NSObject, NSCopying>

@required

- (bool)alignJustified;
- (bool)alignOrthogonallyCentered;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (long long)gridColumns;
- (long long)gridRows;
- (double)height;
- (bool)heightSizedToContainerHeight;
- (double)heightSizedToContainerHeightFactor;
- (bool)heightSizedToContentHeight;
- (double)interitemSpacing;
- (bool)isGridGroup;
- (bool)isHorizontalGroup;
- (bool)isVerticalGroup;
- (NSArray *)itemConfigurations;
- (double)lineSpacing;
- (long long)maximumNumberOfItems;
- (long long)repeatCount;
- (double)width;
- (bool)widthSizedToContainerWidth;
- (double)widthSizedToContainerWidthFactor;
- (bool)widthSizedToContentWidth;

@end
