/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMCollectionViewStaggeredLayout : UICollectionViewLayout <PXCMMCollectionViewLayoutProtocol> {
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    NSMutableDictionary * _layoutAttributesForIndexPath;
    struct { 
        double vertical; 
        double horizontal; 
    }  _relativeStaggerOffset;
    long long  _staggerDirection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } itemSize;
@property (nonatomic) struct { double x1; double x2; } relativeStaggerOffset;
@property (nonatomic) long long staggerDirection;
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
- (struct { double x1; double x2; })relativeStaggerOffset;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRelativeStaggerOffset:(struct { double x1; double x2; })arg1;
- (void)setStaggerDirection:(long long)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)staggerDirection;

@end
