/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UICollectionViewTableLayout : UICollectionViewLayout <UICollectionViewTableAttributes, UIGestureRecognizerDelegate, UISwipeActionHost, UITable_Internal> {
    UIColor * _accessoryBaseColor;
    double  _backgroundInset;
    double  _bottomPadding;
    bool  _cellLayoutMarginsFollowReadableWidth;
    <UITableConstants> * _constants;
    UIColor * _darkenedSeparatorColor;
    NSMutableArray * _deleteIndexPaths;
    UISwipeActionDeleteScanlineView * _deleteScanLineView;
    NSIndexPath * _deletedIndexPath;
    double  _estimatedRowHeight;
    double  _estimatedSectionFooterHeight;
    double  _estimatedSectionHeaderHeight;
    NSSet * _floatingElementKinds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _indexFrame;
    NSMutableArray * _insertIndexPaths;
    bool  _insetsContentViewsToSafeArea;
    UIColor * _multiselectCheckmarkColor;
    bool  _overlapsSectionHeaderViews;
    UITableViewRowData * _rowData;
    double  _rowHeight;
    double  _rowSpacing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionContentInset;
    double  _sectionFooterHeight;
    double  _sectionHeaderHeight;
    UIColor * _separatorColor;
    UIVisualEffect * _separatorEffect;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _separatorInset;
    bool  _separatorInsetIsRelativeToCellEdges;
    long long  _separatorStyle;
    bool  _showingIndex;
    UISwipeActionController * _swipeActionController;
    double  _swipedItemHeight;
    double  _topPadding;
    bool  _usesVariableMargins;
}

@property (getter=_contentInset, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _contentInset;
@property (getter=_accessoryBaseColor, nonatomic, readonly) UIColor *accessoryBaseColor;
@property (nonatomic, readonly) bool allowsMultipleSelection;
@property (nonatomic, readonly) bool allowsMultipleSelectionDuringEditing;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (getter=_backgroundInset, nonatomic, readonly) double backgroundInset;
@property (getter=_bottomPadding, nonatomic, readonly) double bottomPadding;
@property (nonatomic, readonly) bool canBeEdited;
@property (nonatomic) bool cellLayoutMarginsFollowReadableWidth;
@property (getter=_constants, nonatomic, retain) <UITableConstants> *constants;
@property (getter=_dataSourceActual, nonatomic, readonly) <UICollectionViewDataSourceTableLayout> *dataSourceActual;
@property (readonly, copy) NSString *debugDescription;
@property (getter=_defaultSectionFooterHeight, nonatomic, readonly) double defaultSectionFooterHeight;
@property (getter=_defaultSectionHeaderHeight, nonatomic, readonly) double defaultSectionHeaderHeight;
@property (getter=_delegateActual, nonatomic, readonly) <UICollectionViewDelegateTableLayout> *delegateActual;
@property (getter=_delegateProxy, nonatomic, readonly) <UICollectionViewDelegateTableLayout> *delegateProxy;
@property (nonatomic, retain) NSMutableArray *deleteIndexPaths;
@property (nonatomic, retain) UISwipeActionDeleteScanlineView *deleteScanLineView;
@property (nonatomic, retain) NSIndexPath *deletedIndexPath;
@property (readonly, copy) NSString *description;
@property (getter=isEditing, nonatomic) bool editing;
@property (nonatomic, readonly) double estimatedRowHeight;
@property (nonatomic, readonly) double estimatedSectionFooterHeight;
@property (nonatomic, readonly) double estimatedSectionHeaderHeight;
@property (getter=_estimatesHeights, nonatomic, readonly) bool estimatesHeights;
@property (getter=_estimatesRowHeights, nonatomic, readonly) bool estimatesRowHeights;
@property (getter=_estimatesSectionFooterHeights, nonatomic, readonly) bool estimatesSectionFooterHeights;
@property (getter=_estimatesSectionHeaderHeights, nonatomic, readonly) bool estimatesSectionHeaderHeights;
@property (readonly) unsigned long long hash;
@property (getter=_headerFooterLeadingMarginWidth, nonatomic, readonly) double headerFooterLeadingMarginWidth;
@property (getter=_headerFooterTrailingMarginWidth, nonatomic, readonly) double headerFooterTrailingMarginWidth;
@property (getter=_heightForTableFooter, nonatomic, readonly) double heightForTableFooter;
@property (getter=_heightForTableHeader, nonatomic, readonly) double heightForTableHeader;
@property (getter=_indexBarExtentFromEdge, nonatomic, readonly) double indexBarExtentFromEdge;
@property (getter=_indexFrame, nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } indexFrame;
@property (nonatomic, retain) NSMutableArray *insertIndexPaths;
@property (nonatomic) bool insetsContentViewsToSafeArea;
@property (getter=_isTableHeaderAutohiding, nonatomic, readonly) bool isTableHeaderAutohiding;
@property (nonatomic, readonly) UIColor *multiselectCheckmarkColor;
@property (getter=_numberOfSections, nonatomic, readonly) long long numberOfSections;
@property (nonatomic, readonly) bool overlapsSectionHeaderViews;
@property (getter=_providesRowHeights, nonatomic, readonly) bool providesRowHeights;
@property (getter=_rawSectionContentInset, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } rawSectionContentInset;
@property (getter=_rawSeparatorInset, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } rawSeparatorInset;
@property (nonatomic, retain) UITableViewRowData *rowData;
@property (nonatomic) double rowHeight;
@property (getter=_rowSpacing, nonatomic, readonly) double rowSpacing;
@property (getter=_scrollView, nonatomic, readonly) UIScrollView *scrollView;
@property (getter=_sectionBorderWidth, nonatomic, readonly) double sectionBorderWidth;
@property (getter=_sectionContentInset, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionContentInset;
@property (getter=_sectionContentInsetFollowsLayoutMargins, nonatomic, readonly) bool sectionContentInsetFollowsLayoutMargins;
@property (getter=_sectionCornerRadius, nonatomic, readonly) double sectionCornerRadius;
@property (nonatomic) double sectionFooterHeight;
@property (nonatomic) double sectionHeaderHeight;
@property (nonatomic, copy) UIColor *separatorColor;
@property (nonatomic, retain) UIVisualEffect *separatorEffect;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } separatorInset;
@property (nonatomic) bool separatorInsetIsRelativeToCellEdges;
@property (nonatomic) long long separatorStyle;
@property (getter=_shouldUseNewHeaderFooterBehavior, nonatomic, readonly) bool shouldUseNewHeaderFooterBehavior;
@property (getter=_shouldUseSearchBarHeaderBehavior, nonatomic, readonly) bool shouldUseSearchBarHeaderBehavior;
@property (getter=_isShowingIndex, nonatomic, readonly) bool showingIndex;
@property (getter=_sidePadding, nonatomic, readonly) double sidePadding;
@property (getter=_style, nonatomic, readonly) long long style;
@property (readonly) Class superclass;
@property (getter=_swipeActionController, setter=_setSwipeActionController:, nonatomic, retain) UISwipeActionController *swipeActionController;
@property (nonatomic) double swipedItemHeight;
@property (getter=_tableContentInset, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tableContentInset;
@property (getter=_tableFooterView, nonatomic, readonly) UIView *tableFooterView;
@property (getter=_tableHeaderView, nonatomic, readonly) UIView *tableHeaderView;
@property (getter=_topPadding, nonatomic, readonly) double topPadding;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) bool usesVariableMargins;

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (id)_accessoryBaseColor;
- (long long)_accessoryTypeForCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)_applyContentSizeDeltaForEstimatedHeightAdjustments:(double)arg1;
- (double)_backgroundInset;
- (double)_bottomPadding;
- (bool)_canReorderRowAtIndexPath:(id)arg1;
- (void)_cellAccessoryButtonTappedAtIndexPath:(id)arg1;
- (void)_coalesceContentSizeUpdateWithDelta:(double)arg1;
- (id)_constants;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInset;
- (struct CGPoint { double x1; double x2; })_contentOffsetFromProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 forScrollingToItemAtIndexPath:(id)arg2 atScrollPosition:(unsigned long long)arg3;
- (void)_darkenedColorsChanged:(id)arg1;
- (id)_dataSourceActual;
- (double)_dataSourceHeightForFooterInSection:(long long)arg1;
- (double)_dataSourceHeightForHeaderInSection:(long long)arg1;
- (double)_dataSourceHeightForRowAtIndexPath:(id)arg1;
- (double)_defaultCellHeight;
- (double)_defaultSectionFooterHeight;
- (double)_defaultSectionHeaderHeight;
- (id)_delegateActual;
- (id)_delegateProxy;
- (id)_detailTextForHeaderInSection:(long long)arg1;
- (long long)_editingStyleForRowAtIndexPath:(id)arg1;
- (double)_estimatedHeightForFooterInSection:(long long)arg1;
- (double)_estimatedHeightForHeaderInSection:(long long)arg1;
- (double)_estimatedHeightForRowAtIndexPath:(id)arg1;
- (bool)_estimatesHeights;
- (bool)_estimatesRowHeights;
- (bool)_estimatesSectionFooterHeights;
- (bool)_estimatesSectionHeaderHeights;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_extraSeparatorFrameForIndexPath:(id)arg1 offset:(double)arg2;
- (id)_floatingElementKinds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForSectionElementKind:(id)arg1 atSection:(long long)arg2 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 floating:(bool*)arg4;
- (bool)_hasHeaderFooterBelowRowAtIndexPath:(id)arg1;
- (double)_headerFooterLeadingMarginWidth;
- (double)_headerFooterTrailingMarginWidth;
- (double)_heightForFooterInSection:(long long)arg1;
- (double)_heightForHeaderInSection:(long long)arg1;
- (double)_heightForRowAtIndexPath:(id)arg1;
- (double)_heightForTableFooter;
- (double)_heightForTableHeader;
- (long long)_indentationLevelForRowAtIndexPath:(id)arg1;
- (double)_indexBarExtentFromEdge;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_indexFrame;
- (id)_invalidationContextForUpdatedLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)_isShowingIndex;
- (bool)_isTableHeaderAutohiding;
- (id)_layoutAttributesForCellWithIndexPath:(id)arg1;
- (id)_layoutAttributesForSectionElementKind:(id)arg1 atSection:(long long)arg2;
- (id)_layoutAttributesForSeparatorWithIndexPath:(id)arg1;
- (id)_layoutAttributesForViewElementKind:(id)arg1;
- (double)_maxTitleWidthForFooterInSection:(long long)arg1;
- (double)_maxTitleWidthForHeaderInSection:(long long)arg1;
- (long long)_numberOfRowsInSection:(long long)arg1;
- (long long)_numberOfSections;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_preferredLayoutMargins;
- (bool)_providesRowHeights;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_rawSectionContentInset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_rawSeparatorInset;
- (double)_rowSpacing;
- (id)_scrollView;
- (double)_sectionBorderWidth;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_sectionContentInset;
- (bool)_sectionContentInsetFollowsLayoutMargins;
- (double)_sectionCornerRadius;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_sectionRangeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_separatorColorChanged;
- (bool)_separatorInsetIsRelativeToCellEdges;
- (void)_setCollectionView:(id)arg1;
- (void)_setFloatingElementKinds:(id)arg1;
- (void)_setHeight:(double)arg1 forRowAtIndexPath:(id)arg2 usingPresentationValues:(bool)arg3;
- (void)_setSectionContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setSwipeActionController:(id)arg1;
- (bool)_shouldApplyReadableWidthInsets;
- (bool)_shouldDisplayExtraSeparatorsAtOffset:(double*)arg1;
- (bool)_shouldDrawSeparatorAtTop:(bool)arg1 ofSection:(long long)arg2;
- (bool)_shouldDrawThickSeparators;
- (bool)_shouldHaveFooterViewForSection:(long long)arg1;
- (bool)_shouldHaveGlobalViewForElementOfKind:(id)arg1;
- (bool)_shouldHaveHeaderViewForSection:(long long)arg1;
- (bool)_shouldHaveViewForElementOfKind:(id)arg1 atSection:(long long)arg2 useRowData:(bool)arg3;
- (bool)_shouldIndentWhileEditingForRowAtIndexPath:(id)arg1;
- (bool)_shouldStripHeaderTopPaddingForSection:(long long)arg1;
- (bool)_shouldUseNewHeaderFooterBehavior;
- (bool)_shouldUseSearchBarHeaderBehavior;
- (double)_sidePadding;
- (long long)_style;
- (id)_swipeActionController;
- (void)_swipeToDeleteCell:(id)arg1;
- (double)_swipeToDeleteOffsetForRow:(long long)arg1 inSection:(long long)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_tableContentInset;
- (id)_tableFooterView;
- (id)_tableHeaderView;
- (long long)_titleAlignmentForFooterInSection:(long long)arg1;
- (long long)_titleAlignmentForHeaderInSection:(long long)arg1;
- (id)_titleForFooterInSection:(long long)arg1;
- (id)_titleForHeaderInSection:(long long)arg1;
- (double)_topPadding;
- (bool)_usesModernSwipeActions;
- (id)_viewForFooterInSection:(long long)arg1;
- (id)_viewForHeaderInSection:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleRect;
- (bool)_wantsSwipes;
- (bool)allowsMultipleSelection;
- (bool)allowsMultipleSelectionDuringEditing;
- (id)backgroundColor;
- (bool)canBeEdited;
- (bool)cellLayoutMarginsFollowReadableWidth;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)contextualActionForDeletingRowAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)deleteIndexPaths;
- (id)deleteScanLineView;
- (id)deletedIndexPath;
- (double)estimatedRowHeight;
- (double)estimatedSectionFooterHeight;
- (double)estimatedSectionHeaderHeight;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (id)gestureRecognizerViewForSwipeActionController:(id)arg1;
- (id)init;
- (id)insertIndexPaths;
- (bool)insetsContentViewsToSafeArea;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)invalidationContextForInteractivelyMovingItems:(id)arg1 withTargetPosition:(struct CGPoint { double x1; double x2; })arg2 previousIndexPaths:(id)arg3 previousPosition:(struct CGPoint { double x1; double x2; })arg4;
- (bool)isEditing;
- (id)itemContainerViewForSwipeActionController:(id)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint { double x1; double x2; })arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)multiselectCheckmarkColor;
- (bool)overlapsSectionHeaderViews;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareForTransitionFromLayout:(id)arg1;
- (void)prepareForTransitionToLayout:(id)arg1;
- (void)prepareLayout;
- (void)resetSwipedRowWithCompletion:(id /* block */)arg1;
- (id)rowData;
- (double)rowHeight;
- (double)sectionFooterHeight;
- (double)sectionHeaderHeight;
- (id)separatorColor;
- (id)separatorEffect;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInset;
- (bool)separatorInsetIsRelativeToCellEdges;
- (long long)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setCellLayoutMarginsFollowReadableWidth:(bool)arg1;
- (void)setConstants:(id)arg1;
- (void)setDeleteIndexPaths:(id)arg1;
- (void)setDeleteScanLineView:(id)arg1;
- (void)setDeletedIndexPath:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setInsertIndexPaths:(id)arg1;
- (void)setInsetsContentViewsToSafeArea:(bool)arg1;
- (void)setRowData:(id)arg1;
- (void)setRowHeight:(double)arg1;
- (void)setSectionFooterHeight:(double)arg1;
- (void)setSectionHeaderHeight:(double)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setSeparatorEffect:(id)arg1;
- (void)setSeparatorInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSeparatorInsetIsRelativeToCellEdges:(bool)arg1;
- (void)setSeparatorStyle:(long long)arg1;
- (void)setSwipedItemHeight:(double)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)swipeActionController:(id)arg1 animateView:(id)arg2 actionsView:(id)arg3 forDestructiveAction:(id)arg4 atIndexPath:(id)arg5 withSwipeInfo:(struct { unsigned long long x1; unsigned long long x2; bool x3; double x4; double x5; double x6; })arg6 completion:(id /* block */)arg7;
- (void)swipeActionController:(id)arg1 didEndSwipeForItemAtIndexPath:(id)arg2;
- (id)swipeActionController:(id)arg1 indexPathForTouchLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)swipeActionController:(id)arg1 leadingSwipeConfigurationForItemAtIndexPath:(id)arg2;
- (bool)swipeActionController:(id)arg1 mayBeginSwipeForItemAtIndexPath:(id)arg2;
- (id)swipeActionController:(id)arg1 trailingSwipeConfigurationForItemAtIndexPath:(id)arg2;
- (id)swipeActionController:(id)arg1 viewForItemAtIndexPath:(id)arg2;
- (void)swipeActionController:(id)arg1 willBeginSwipeForItemAtIndexPath:(id)arg2;
- (id)swipeActionForDeletingRowAtIndexPath:(id)arg1;
- (double)swipedItemHeight;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)usesVariableMargins;

@end
