/* made by EzioChiu.
 */

@protocol SKUIStorePageCollectionViewLayout <NSObject>

@required

- (NSString *)backdropGroupName;
- (NSArray *)indexPathsForGradientItems;
- (NSArray *)indexPathsForPinningItems;
- (UICollectionViewLayoutAttributes *)layoutAttributesForUnpinnedItemAtIndexPath:(NSIndexPath *)arg1;
- (NSArray *)pinnedLayoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)rendersWithParallax;
- (bool)rendersWithPerspective;
- (void)setBackdropGroupName:(NSString *)arg1;
- (void)setIndexPathsForGradientItems:(NSArray *)arg1;
- (void)setRendersWithParallax:(bool)arg1;
- (void)setRendersWithPerspective:(bool)arg1;

@end
