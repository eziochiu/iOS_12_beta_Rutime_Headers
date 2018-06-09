/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUStackedAlbumTransitionLayout : UICollectionViewTransitionLayout {
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentCollapsedStackCenter;
    PUCollectionViewLayoutCache * _currentLayoutCache;
    bool  _didPrepareLayout;
    struct CGPoint { 
        double x; 
        double y; 
    }  _expandedStackDelta;
    struct CGPoint { 
        double x; 
        double y; 
    }  _expandedStackFinalDelta;
    struct CGPoint { 
        double x; 
        double y; 
    }  _finalCollapsedStackCenter;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialCollapsedStackCenter;
    struct CGPoint { 
        double x; 
        double y; 
    }  _interactionOffset;
    bool  _isExpanding;
    PUCollectionViewLayoutCache * _nextLayoutCache;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } currentCollapsedStackCenter;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } expandedStackFinalDelta;
@property (nonatomic) struct CGPoint { double x1; double x2; } finalCollapsedStackCenter;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialCollapsedStackCenter;
@property (nonatomic) struct CGPoint { double x1; double x2; } interactionOffset;
@property (nonatomic, readonly) bool isExpanding;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_centerOfLayoutAttributes:(id)arg1;
- (struct CGPoint { double x1; double x2; })_newCenterForLayoutAttributes:(id)arg1 transitionProgress:(double)arg2;
- (struct CGPoint { double x1; double x2; })currentCollapsedStackCenter;
- (struct CGPoint { double x1; double x2; })expandedStackFinalDelta;
- (struct CGPoint { double x1; double x2; })finalCollapsedStackCenter;
- (id)initWithCurrentLayout:(id)arg1 nextLayout:(id)arg2 isExpanding:(bool)arg3;
- (struct CGPoint { double x1; double x2; })initialCollapsedStackCenter;
- (struct CGPoint { double x1; double x2; })interactionOffset;
- (bool)isExpanding;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareLayout;
- (void)setCurrentCollapsedStackCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFinalCollapsedStackCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitialCollapsedStackCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInteractionOffset:(struct CGPoint { double x1; double x2; })arg1;

@end
