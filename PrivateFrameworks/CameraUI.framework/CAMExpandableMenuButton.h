/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMExpandableMenuButton : UIControl <CAMAccessibilityHUDItemProvider> {
    UIView * __headerView;
    NSMutableIndexSet * __highlightedIndexesWhileCollapsed;
    NSMutableArray * __menuItems;
    UIImageView * __padBackgroundView;
    NSIndexSet * __shownIndexesWhileCollapsed;
    UIView * __trackingView;
    bool  __trackingViewHighlighted;
    <CAMExpandableMenuButtonDelegate> * _expandableMenuDelegate;
    bool  _expanded;
    long long  _layoutStyle;
    long long  _orientation;
    long long  _selectedIndex;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _tappableEdgeInsets;
    CAMTouchingGestureRecognizer * _touchingGestureRecognizer;
}

@property (nonatomic, readonly) UIView *_headerView;
@property (nonatomic, readonly, copy) NSMutableIndexSet *_highlightedIndexesWhileCollapsed;
@property (nonatomic, readonly) NSMutableArray *_menuItems;
@property (nonatomic, readonly) UIImageView *_padBackgroundView;
@property (nonatomic, readonly, copy) NSIndexSet *_shownIndexesWhileCollapsed;
@property (setter=_setTrackingView:, nonatomic, retain) UIView *_trackingView;
@property (getter=_isTrackingViewHighlighted, setter=_setTrackingViewHighlighted:, nonatomic) bool _trackingViewHighlighted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CAMExpandableMenuButtonDelegate> *expandableMenuDelegate;
@property (getter=isExpanded, nonatomic, readonly) bool expanded;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long orientation;
@property (nonatomic) long long selectedIndex;
@property (readonly) Class superclass;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tappableEdgeInsets;
@property (nonatomic, readonly) CAMTouchingGestureRecognizer *touchingGestureRecognizer;

+ (double)expansionDuration;

- (void).cxx_destruct;
- (void)_applyHeaderViewForCurrentExpansionState;
- (void)_applyMenuItemAlphaForCurrentExpansionState;
- (void)_applyMenuItemColorsForCurrentState;
- (void)_applyMenuItemTextAlignmentAndShadowForCurrentOrientation;
- (void)_convertAllSubviewsToProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_createPadBackgroundView;
- (void)_handleTouchGesture:(id)arg1;
- (id)_headerView;
- (id)_highlightedIndexesWhileCollapsed;
- (bool)_isTrackingViewHighlighted;
- (struct CGSize { double x1; double x2; })_layoutForPadCollapsedPortraitButton:(bool)arg1;
- (struct CGSize { double x1; double x2; })_layoutForPadExpandedPortraitButton:(bool)arg1;
- (struct CGSize { double x1; double x2; })_layoutForPadStyle:(bool)arg1 expanded:(bool)arg2;
- (struct CGSize { double x1; double x2; })_layoutForPhoneCollapsedLandscapeButton:(bool)arg1;
- (struct CGSize { double x1; double x2; })_layoutForPhoneCollapsedPortraitButton:(bool)arg1;
- (struct CGSize { double x1; double x2; })_layoutForPhoneExpandedLandscapeButton:(bool)arg1;
- (struct CGSize { double x1; double x2; })_layoutForPhoneExpandedPortraitButton:(bool)arg1;
- (struct CGSize { double x1; double x2; })_layoutForPhoneStyle:(bool)arg1 expanded:(bool)arg2;
- (struct CGSize { double x1; double x2; })_layoutMenuButton:(bool)arg1 expanded:(bool)arg2;
- (id)_menuItems;
- (id)_padBackgroundView;
- (id)_selectedLabel;
- (void)_setTrackingView:(id)arg1;
- (void)_setTrackingViewHighlighted:(bool)arg1;
- (id)_shownIndexesWhileCollapsed;
- (id)_trackingView;
- (void)_updateFromExpansionChangeAnimated:(bool)arg1;
- (void)_updateFromOrientationChangeAnimated:(bool)arg1;
- (void)_updateFromSelectedIndexChange;
- (id)_viewToTrackForTouchAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_wantsHeaderViewToBeVisible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRectForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 expanded:(bool)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)collapseMenuAnimated:(bool)arg1;
- (double)collapsedSelectedLabelHorizontalMargin;
- (void)completeExpansionToProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)expandMenuAnimated:(bool)arg1;
- (id)expandableMenuDelegate;
- (void)finishCollapsingAnimated:(bool)arg1;
- (void)finishExpansionAnimated:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 expanded:(bool)arg2;
- (id)headerView;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct CGSize { double x1; double x2; })intrinsicContentSizeForExpansion:(bool)arg1;
- (bool)isExpanded;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (long long)numberOfMenuItems;
- (long long)orientation;
- (double)padHeaderViewContentInsetLeft;
- (void)prepareHeaderViewForExpanding:(bool)arg1;
- (void)reloadData;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (long long)selectedIndex;
- (void)setExpandableMenuDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1 forIndex:(long long)arg2;
- (void)setLayoutStyle:(long long)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setSelectedIndex:(long long)arg1;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)shouldAllowExpansion;
- (bool)shouldIgnoreMenuInteraction;
- (id)shownIndexesWhileCollapsed;
- (void)startCollapsingWithProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)startExpansionWithProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tappableEdgeInsets;
- (id)titleForMenuItemAtIndex:(long long)arg1;
- (id)touchingGestureRecognizer;
- (void)updateToContentSize:(id)arg1;
- (bool)wantsSelectedItemToBeVisible;

@end
