/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicTableView : MusicBasicTableView {
    long long  _highlightedSectionHeaderViewIndex;
    bool  _isUpdatingSeparatorInsets;
    long long  _selectedSectionHeaderViewIndex;
    bool  _shouldTreatContentOffsetChangesAsDeltas;
    bool  _trailingSeparatorInsetFollowsLayoutInsets;
}

@property (nonatomic) <MusicTableViewDelegate> *delegate;
@property (nonatomic, readonly) long long indexForSelectedSectionHeader;
@property (nonatomic) bool shouldTreatContentOffsetChangesAsDeltas;
@property (nonatomic) bool trailingSeparatorInsetFollowsLayoutInsets;
@property (nonatomic, readonly, copy) NSArray *visibleHeaderFooterViews;

- (void)_clearHeaderViewHighlightAnimated:(bool)arg1;
- (void)_clearHeaderViewSelectionAnimated:(bool)arg1;
- (void)_rebuildGeometry;
- (long long)_sectionForSelectableHeaderView:(id)arg1;
- (bool)_shouldDrawSeparatorAtBottomOfSection:(long long)arg1;
- (void)_touchesBegan:(id)arg1 withEvent:(id)arg2 onSelectableHeaderFooterView:(id)arg3;
- (void)_touchesCancelled:(id)arg1 withEvent:(id)arg2 onSelectableHeaderFooterView:(id)arg3;
- (void)_touchesEnded:(id)arg1 withEvent:(id)arg2 onSelectableHeaderFooterView:(id)arg3;
- (void)_touchesMoved:(id)arg1 withEvent:(id)arg2 onSelectableHeaderFooterView:(id)arg3;
- (void)_updateChildSeparatorInsets;
- (void)_updateSeparatorInset;
- (void)deselectHeaderForSection:(long long)arg1 animated:(bool)arg2;
- (long long)indexForSelectedSectionHeader;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (void)layoutSubviews;
- (void)music_inheritedLayoutInsetsDidChange;
- (void)selectHeaderForSection:(long long)arg1 animated:(bool)arg2;
- (void)setShouldTreatContentOffsetChangesAsDeltas:(bool)arg1;
- (void)setTrailingSeparatorInsetFollowsLayoutInsets:(bool)arg1;
- (bool)shouldTreatContentOffsetChangesAsDeltas;
- (void)tintColorDidChange;
- (bool)trailingSeparatorInsetFollowsLayoutInsets;
- (id)visibleHeaderFooterViews;

@end
