/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMCollectionViewOverlappingLayout : UICollectionViewLayout <PXCMMCollectionViewLayoutProtocol> {
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    NSMutableDictionary * _layoutAttributesForIndexPath;
    double  _relativeNegativeScale;
    double  _relativeOverlap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } itemSize;
@property (nonatomic) double relativeNegativeScale;
@property (nonatomic) double relativeOverlap;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (double)contentHeight;
- (id)init;
- (void)invalidateLayout;
- (struct CGSize { double x1; double x2; })itemSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (double)relativeNegativeScale;
- (double)relativeOverlap;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRelativeNegativeScale:(double)arg1;
- (void)setRelativeOverlap:(double)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end