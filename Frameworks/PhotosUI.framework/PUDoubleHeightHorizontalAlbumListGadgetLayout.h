/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUDoubleHeightHorizontalAlbumListGadgetLayout : PUSingleHeightHorizontalAlbumListGadgetLayout {
    NSArray * _adjustedLayoutAttributes;
}

@property (nonatomic, retain) NSArray *adjustedLayoutAttributes;

- (void).cxx_destruct;
- (void)_adjustLayoutAttributes:(id)arg1;
- (id)adjustedLayoutAttributes;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (void)invalidateLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (void)setAdjustedLayoutAttributes:(id)arg1;

@end
