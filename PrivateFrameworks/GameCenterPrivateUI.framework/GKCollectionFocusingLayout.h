/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKCollectionFocusingLayout : UICollectionViewFlowLayout {
    double  _focusHeaderOffset;
    double  _focusScaleFactor;
    NSIndexPath * _focusedIndexPath;
    UICollectionViewLayoutAttributes * _topHeaderAttributes;
    double  _topHeaderHeight;
}

@property (nonatomic) double focusHeaderOffset;
@property (nonatomic) double focusScaleFactor;
@property (nonatomic, retain) NSIndexPath *focusedIndexPath;
@property (nonatomic, retain) UICollectionViewLayoutAttributes *topHeaderAttributes;
@property (nonatomic) double topHeaderHeight;

- (void)_updateFocusFrameForCellAtIndexPath:(id)arg1;
- (void)_updateFocusOffsetsForSectionHeadersWithAnimationCoordinator:(id)arg1;
- (void)applyDefaults;
- (void)awakeFromNib;
- (void)dealloc;
- (id)focusAdjustedAttributesForItemAttributes:(id)arg1;
- (id)focusAdjustedAttributesForSupplementaryViewAttributes:(id)arg1;
- (double)focusHeaderOffset;
- (double)focusScaleFactor;
- (id)focusedIndexPath;
- (id)init;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (double)minimumInteritemSpacingForSectionAtIndex:(long long)arg1;
- (double)minimumLineSpacingForSectionAtIndex:(long long)arg1;
- (void)prepareLayout;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInset;
- (void)setFocusHeaderOffset:(double)arg1;
- (void)setFocusScaleFactor:(double)arg1;
- (void)setFocusedIndexPath:(id)arg1;
- (void)setTopHeaderAttributes:(id)arg1;
- (void)setTopHeaderHeight:(double)arg1;
- (bool)shouldUpdateVisibleCellLayoutAttributes;
- (struct CGSize { double x1; double x2; })sizeForHeaderInSection:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeForItemAtIndexPath:(id)arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 withScrollingVelocity:(struct CGPoint { double x1; double x2; })arg2;
- (id)topHeaderAttributes;
- (double)topHeaderHeight;

@end
