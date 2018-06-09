/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroEditorFlowLayout : UICollectionViewFlowLayout {
    double  _abscissa;
    NSIndexPath * _currentIndexPath;
    NSMapTable * _initalIndexPathToCGRectMap;
    NSMapTable * _layoutIndexPathToCGRectMap;
    double  _maximumCenterItemLoupeSpacing;
    NSIndexPath * _neighboringIndexPath;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionInsets;
    NSIndexPath * _snappedIndexPath;
    double  _transitionProgress;
}

@property (nonatomic) double abscissa;
@property (nonatomic, readonly) NSIndexPath *centerCellIndexPath;
@property (nonatomic) NSIndexPath *currentIndexPath;
@property (nonatomic, retain) NSMapTable *initalIndexPathToCGRectMap;
@property (nonatomic, retain) NSMapTable *layoutIndexPathToCGRectMap;
@property (nonatomic) double maximumCenterItemLoupeSpacing;
@property (nonatomic) NSIndexPath *neighboringIndexPath;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionInsets;
@property (nonatomic, retain) NSIndexPath *snappedIndexPath;
@property (nonatomic) double transitionProgress;

- (void).cxx_destruct;
- (double)_horizontalOffsetForIndexPath:(id)arg1;
- (double)_loupeAmountForIndexPath:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForItemAtIndexPath:(id)arg1 withLoupe:(bool)arg2;
- (struct CGSize { double x1; double x2; })_sizeForItemAtIndexPath:(id)arg1;
- (struct CGPoint { double x1; double x2; })_snappedContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 chosenLayoutAttributes:(id*)arg2;
- (double)_transitionProgressFrom:(id)arg1 abscissa:(double)arg2 outNeighborIndexPath:(id*)arg3;
- (double)abscissa;
- (id)centerCellIndexPath;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (struct CGPoint { double x1; double x2; })contentOffsetForScrollingToIndexPath:(id)arg1 transitionProgress:(double)arg2;
- (id)currentIndexPath;
- (id)initalIndexPathToCGRectMap;
- (void)invalidateLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutIndexPathToCGRectMap;
- (double)maximumCenterItemLoupeSpacing;
- (id)neighboringIndexPath;
- (void)prepareLayout;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInsets;
- (void)setAbscissa:(double)arg1;
- (void)setCurrentIndexPath:(id)arg1;
- (void)setInitalIndexPathToCGRectMap:(id)arg1;
- (void)setLayoutIndexPathToCGRectMap:(id)arg1;
- (void)setMaximumCenterItemLoupeSpacing:(double)arg1;
- (void)setNeighboringIndexPath:(id)arg1;
- (void)setSectionInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSnappedIndexPath:(id)arg1;
- (void)setTransitionProgress:(double)arg1;
- (id)snappedIndexPath;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 withScrollingVelocity:(struct CGPoint { double x1; double x2; })arg2;
- (double)transitionProgress;
- (bool)wantsLoupe;

@end
