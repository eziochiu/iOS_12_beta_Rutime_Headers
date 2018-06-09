/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSectionedTilingLayout : PUTilingLayout {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _computedSections;
    struct CGSize { 
        double width; 
        double height; 
    }  _interSectionSpacing;
    bool  _leftToRight;
    long long  _numberOfSections;
    struct _PUSectionedTilingLayoutSectionInfo { bool x1; long long x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; } * _sectionInfos;
    long long  _seedSection;
    struct CGPoint { 
        double x; 
        double y; 
    }  _seedSectionOrigin;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } computedSections;
@property (nonatomic) struct CGSize { double x1; double x2; } interSectionSpacing;
@property (nonatomic) bool leftToRight;

- (void)_computeSeedSectionIfNeeded;
- (void)_ensureComputedSectionsHaveBeenSeeded;
- (void)_invalidateNumberOfSections;
- (void)_markAllSectionInfosInvalid;
- (long long)_numberOfSections;
- (bool)_scrollsHorizontallyNotVertically;
- (struct _PUSectionedTilingLayoutSectionInfo { bool x1; long long x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; }*)_sectionInfoForSection:(long long)arg1;
- (void)addLayoutInfosForTilesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 section:(long long)arg2 toSet:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForSection:(long long)arg1;
- (void)computeSectionsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })computedSections;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (void)dealloc;
- (id)init;
- (struct CGSize { double x1; double x2; })interSectionSpacing;
- (void)invalidateLayoutForUpdateWithItems:(id)arg1;
- (void)invalidateSectionInfos;
- (id)layoutInfosForTilesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)leftToRight;
- (long long)numberOfItemsInSection:(long long)arg1;
- (void)prepareLayout;
- (void)setInterSectionSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setLeftToRight:(bool)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeForSection:(long long)arg1 numberOfItems:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRectForScrollingToItemAtIndexPath:(id)arg1 scrollPosition:(long long)arg2;

@end
