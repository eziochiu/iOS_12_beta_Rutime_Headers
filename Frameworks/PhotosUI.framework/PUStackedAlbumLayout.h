/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUStackedAlbumLayout : UICollectionViewLayout {
    PUAlbumListTransitionContext * _albumListTransitionContext;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSizeAdjust;
    NSMutableDictionary * _derivedLayoutAttributesByIndexPath;
    UICollectionViewLayoutAttributes * _globalHeaderAttributes;
    bool  _isInteractive;
    struct CGPoint { 
        double x; 
        double y; 
    }  _referenceCenter;
    UICollectionViewLayoutAttributes * _referenceItemLayoutAttributes;
    NSMutableDictionary * _visibleLayoutAttributesByIndexPath;
    NSArray * _visibleStackedItemLayoutAttributes;
    double  _yAdjust;
    NSMutableDictionary * _zIndexByIndexPath;
}

@property (nonatomic, retain) PUAlbumListTransitionContext *albumListTransitionContext;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSizeAdjust;
@property (nonatomic, retain) UICollectionViewLayoutAttributes *globalHeaderAttributes;
@property (setter=setInteractive:, nonatomic) bool isInteractive;
@property (nonatomic) struct CGPoint { double x1; double x2; } referenceCenter;
@property (nonatomic, copy) UICollectionViewLayoutAttributes *referenceItemLayoutAttributes;
@property (nonatomic, copy) NSArray *visibleStackedItemLayoutAttributes;
@property (nonatomic) double yAdjust;

- (void).cxx_destruct;
- (id /* block */)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;
- (id)_newAdjustedLayoutAttributes:(id)arg1 indexPath:(id)arg2;
- (id)albumListTransitionContext;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (struct CGSize { double x1; double x2; })contentSizeAdjust;
- (id)globalHeaderAttributes;
- (bool)isInteractive;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareLayout;
- (struct CGPoint { double x1; double x2; })referenceCenter;
- (id)referenceItemLayoutAttributes;
- (void)setAlbumListTransitionContext:(id)arg1;
- (void)setContentSizeAdjust:(struct CGSize { double x1; double x2; })arg1;
- (void)setGlobalHeaderAttributes:(id)arg1;
- (void)setInteractive:(bool)arg1;
- (void)setReferenceCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setReferenceItemLayoutAttributes:(id)arg1;
- (void)setVisibleStackedItemLayoutAttributes:(id)arg1;
- (void)setYAdjust:(double)arg1;
- (id)visibleStackedItemLayoutAttributes;
- (double)yAdjust;
- (long long)zIndexForItemAtIndexPath:(id)arg1;

@end
