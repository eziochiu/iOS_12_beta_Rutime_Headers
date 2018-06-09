/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKCollectionViewCell : UICollectionViewCell {
    GKHairlineView * _bottomHairline;
    NSLayoutConstraint * _contentLeftConstraint;
    double  _contentOriginX;
    GKStaticRenderContentView * _contentRenderView;
    bool  _doesAbutLeftEdge;
    NSArray * _editActions;
    NSArray * _editActionsConstraints;
    GKEditActionsView * _editActionsView;
    NSArray * _hairlineConstraints;
    double  _leadingMargin;
    CALayer * _leftGradientMask;
    id  _representedItem;
    bool  _shouldDisplaySwipeToEditAccessories;
    UIView * _staticContentView;
    GKHairlineView * _topHairline;
    double  _trailingMargin;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } alignmentRectForText;
@property (nonatomic, retain) GKHairlineView *bottomHairline;
@property (nonatomic, retain) NSLayoutConstraint *contentLeftConstraint;
@property (nonatomic, retain) GKStaticRenderContentView *contentRenderView;
@property (nonatomic) bool doesAbutLeftEdge;
@property (nonatomic, retain) NSArray *editActions;
@property (nonatomic, retain) NSArray *editActionsConstraints;
@property (nonatomic, readonly) GKEditActionsView *editActionsView;
@property (nonatomic) double editingContentOriginX;
@property (nonatomic, retain) NSArray *hairlineConstraints;
@property (nonatomic, readonly) UIView *interactiveContentView;
@property (nonatomic) double leadingMargin;
@property (nonatomic, retain) CALayer *leftGradientMask;
@property (nonatomic, retain) id representedItem;
@property (nonatomic, retain) UIView *staticContentView;
@property (nonatomic, retain) GKHairlineView *topHairline;
@property (nonatomic) double trailingMargin;

+ (void)registerCellClassesWithCollectionView:(id)arg1;

- (void)_gkEnumerateSubviewsUsingBlock:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRectForText;
- (void)animateOutSwipeToEditAccessories;
- (void)applyGradientMaskIfNeeded;
- (void)applyLayoutAttributes:(id)arg1;
- (void)beginEditing;
- (id)bottomHairline;
- (void)closeForDelete;
- (id)contentLeftConstraint;
- (id)contentRenderView;
- (double)contentViewOriginXWhileEditing;
- (void)dealloc;
- (void)didUpdateModel;
- (bool)doesAbutLeftEdge;
- (id)editActions;
- (id)editActionsConstraints;
- (id)editActionsView;
- (double)editActionsVisibleWidth;
- (double)editingContentOriginX;
- (void)finishEditing;
- (id)hairlineConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)interactiveContentView;
- (void)layoutSubviews;
- (double)leadingMargin;
- (id)leftGradientMask;
- (id)popoverSourceView;
- (void)prepareEditActionsConstraintsIfNeeded;
- (void)prepareForReuse;
- (void)prepareHairlineConstraintsIfNeeded;
- (id)representedItem;
- (void)resetEditingContentOrigin;
- (void)setBottomHairline:(id)arg1;
- (void)setContentLeftConstraint:(id)arg1;
- (void)setContentRenderView:(id)arg1;
- (void)setDoesAbutLeftEdge:(bool)arg1;
- (void)setEditActions:(id)arg1;
- (void)setEditActionsConstraints:(id)arg1;
- (void)setEditActionsVisibleWidth:(double)arg1;
- (void)setEditingContentOriginX:(double)arg1;
- (void)setHairlineConstraints:(id)arg1;
- (void)setLeadingMargin:(double)arg1;
- (void)setLeftGradientMask:(id)arg1;
- (void)setNeedsDisplay;
- (void)setRepresentedItem:(id)arg1;
- (void)setShouldDisplaySwipeToEditAccessories:(bool)arg1;
- (void)setStaticContentView:(id)arg1;
- (void)setTopHairline:(id)arg1;
- (void)setTrailingMargin:(double)arg1;
- (void)setUserInteractionEnabledForEditing:(bool)arg1;
- (void)shutActionPaneAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)staticContentView;
- (id)topHairline;
- (bool)touchWithinEditActions:(id)arg1;
- (double)trailingMargin;
- (void)updateConstraints;
- (bool)userInteractionEnabledForEditing;

@end
