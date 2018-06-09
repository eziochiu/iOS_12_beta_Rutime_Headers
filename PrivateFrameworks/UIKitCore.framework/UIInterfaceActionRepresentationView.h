/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInterfaceActionRepresentationView : UIView <UIFocusEnvironment, UIInterfaceActionDisplayPropertyObserver, UISpringLoadedInteractionSupporting> {
    UIInterfaceAction * _action;
    id  _actionViewStateContext;
    UIView<UIInterfaceActionVisualBackgroundDisplaying> * _backgroundHighlightView;
    bool  _canKeepContentsInHierarchy;
    bool  _canRemoveContentFromHierarchyWhenNotVisible;
    bool  _contentsInsertedIntoViewHierarchy;
    bool  _enforcedCanRemoveContentFromHierarchyWhenNotVisible;
    bool  _enforcedCanRemoveContentFromHierarchyWhenNotVisibleValue;
    bool  _hasLoadedBackgroundView;
    bool  _hasLoadedContentFirstTime;
    bool  _highlighted;
    UISpringLoadedInteraction * _interactionForSpringLoading;
    NSLayoutConstraint * _minimumHeightConstraint;
    NSLayoutConstraint * _minimumWidthConstraint;
    bool  _ownsActionContent;
    bool  _pressed;
    NSString * _sectionID;
    NSArray * _viewsToDisappearWhenHighlighted;
    unsigned long long  _visualCornerPosition;
}

@property (setter=_setContentsInsertedIntoViewHierarchy:, nonatomic) bool _contentsInsertedIntoViewHierarchy;
@property (nonatomic, readonly) UIInterfaceAction *action;
@property (nonatomic, retain) id actionViewStateContext;
@property (nonatomic, readonly) UIView<UIInterfaceActionVisualBackgroundDisplaying> *backgroundHighlightView;
@property (nonatomic) bool canRemoveContentFromHierarchyWhenNotVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <UIFocusItemContainer> *focusItemContainer;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) UISpringLoadedInteraction *interactionForSpringLoading;
@property (nonatomic, readonly) NSLayoutConstraint *minimumHeightConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *minimumWidthConstraint;
@property (nonatomic) bool ownsActionContent;
@property (nonatomic, readonly) <UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic, readonly, copy) NSArray *preferredFocusEnvironments;
@property (nonatomic, readonly) UIView *preferredFocusedView;
@property (getter=isPressed, nonatomic) bool pressed;
@property (nonatomic, retain) NSString *sectionID;
@property (getter=isSpringLoaded, nonatomic) bool springLoaded;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *viewsToDisappearWhenHighlighted;
@property (nonatomic) unsigned long long visualCornerPosition;
@property (nonatomic, readonly) UIInterfaceActionVisualStyle *visualStyle;

- (void).cxx_destruct;
- (id)__fittingContentSizingViewAllowingSelf;
- (id)__fittingContentSizingViewIfNotSelf;
- (id)_actionViewState;
- (void)_addLoadedContentsToHierarchyFirstTime;
- (void)_addLoadedContentsToHierarchyIfAllowed;
- (void)_applyVisualStyle;
- (void)_applyVisualStyleToBackgroundViewAndHighlighting;
- (void)_applyVisualStyleToLayoutMargins;
- (void)_applyVisualStyleToMinimumSizeConstraints;
- (bool)_canLoadContentsIntoHierarchy;
- (void)_clearBackgroundPressedState;
- (bool)_contentsInsertedIntoViewHierarchy;
- (void)_didScroll;
- (void)_enforceActionRepresentationViewsCanRemoveContentFromHierarchyWhenNotVisible:(bool)arg1;
- (struct CGSize { double x1; double x2; })_fittingContentSizeWithFittingViewSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_fittingContentSizingView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_fittingContentSizingViewFrameInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_fittingContentSizingViewMargins;
- (bool)_fittingContentViewHasItsOwnActiveMinimumSizeConstraintsWithSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_handleVisualFeedbackForPress:(id)arg1 pressed:(bool)arg2;
- (void)_initializeHorizontalMarginsForAction;
- (bool)_isVisibleWithinContainmentAncestor;
- (void)_loadContentsIntoHierarchyAndPrepareIfNecessary;
- (void)_reloadBackgroundHighlightView;
- (void)_removeLoadedContentsFromHierarchyIfNotVisible;
- (void)_setContentsInsertedIntoViewHierarchy:(bool)arg1;
- (void)_setHorizontalMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 preservesSuperviewLayoutMargins:(bool)arg2;
- (bool)_shouldShowPressFeedbackForEventWithPresses:(id)arg1;
- (void)_showVisualFeedbackForPressed:(bool)arg1;
- (bool)_showsFocusForFocusedView:(id)arg1;
- (void)_updateFittingContentSizingViewToFitSize;
- (void)_updateHighlightAndPressedFeedback;
- (void)_updateLoadedContentsHierarchyByInsertingOrRemovingIfNecessary;
- (id)_viewDisplayingBackground;
- (id)action;
- (id)actionViewStateContext;
- (id)backgroundHighlightView;
- (bool)canBecomeFocused;
- (bool)canRemoveContentFromHierarchyWhenNotVisible;
- (void)dealloc;
- (id)description;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)hasLayoutHeightConstraintsIdenticalToRepresentationView:(id)arg1;
- (id)initWithAction:(id)arg1;
- (id)interactionForSpringLoading;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void)invokeInterfaceAction;
- (bool)isFocused;
- (bool)isHighlighted;
- (bool)isPressed;
- (bool)isSpringLoaded;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)loadContents;
- (id)minimumHeightConstraint;
- (id)minimumWidthConstraint;
- (bool)ownsActionContent;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (id)sectionID;
- (void)setActionViewStateContext:(id)arg1;
- (void)setCanRemoveContentFromHierarchyWhenNotVisible:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setInteractionForSpringLoading:(id)arg1;
- (void)setOwnsActionContent:(bool)arg1;
- (void)setPressed:(bool)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSpringLoaded:(bool)arg1;
- (void)setViewsToDisappearWhenHighlighted:(id)arg1;
- (void)setVisualCornerPosition:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateConstraints;
- (void)updateContentsInsertedIntoHierarchy;
- (id)viewsToDisappearWhenHighlighted;
- (unsigned long long)visualCornerPosition;
- (id)visualStyle;

@end
