/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMessagesCMMSuggestionsCollectionGadgetLayout : PXGadgetCollectionViewLayout {
    struct CGSize { 
        double width; 
        double height; 
    }  _containerSizeOverride;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _interitemSpacing;
    double  _itemAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _margins;
    long long  _numberOfColumns;
    long long  _numberOfItems;
}

@property (nonatomic) struct CGSize { double x1; double x2; } containerSizeOverride;
@property (nonatomic) double itemAspectRatio;

- (void)_fetchItemsInfoForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForItemAtIndex:(long long)arg1;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (struct CGSize { double x1; double x2; })containerSizeOverride;
- (bool)flipsHorizontallyInOppositeLayoutDirection;
- (id)init;
- (double)itemAspectRatio;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareLayout;
- (long long)scrollDirection;
- (void)setContainerSizeOverride:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemAspectRatio:(double)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
