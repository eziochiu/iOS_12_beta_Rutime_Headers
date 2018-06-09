/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassGroupStackView : UIScrollView <PKPassDeleteAnimationControllerDelegate, PKPassDeleteHandler, PKPassFooterViewDelegate, PKPassGroupViewDelegate, PKPaymentServiceDelegate> {
    NSMutableDictionary * _animatorsByGroupID;
    NSTimer * _autoscrollTimer;
    UIColor * _currentPageIndicatorTintColor;
    int  _currentTestReps;
    <PKPassGroupStackViewDatasource> * _datasource;
    bool  _delegateWantsBottomContentSeparation;
    bool  _delegateWantsTopContentSeparation;
    PKPassDeleteAnimationController * _deleteAnimationController;
    NSNumber * _featuredGroupID;
    UIImageView * _footerPocketBackgroundShadow;
    UIImageView * _footerPocketForegroundShadow;
    bool  _footerSuppressed;
    UIView * _footerView;
    double  _footerViewMinimumHeight;
    NSMutableDictionary * _groupViewsByGroupID;
    NSMutableDictionary * _groupViewsInFlightByGroupID;
    bool  _hasSuspendedTransition;
    PKPassthroughView * _headerContainerView;
    bool  _inPassthroughHitTest;
    unsigned long long  _initialIndexOfReorderedGroup;
    bool  _invalidated;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _lastBoundsInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastBoundsSize;
    double  _lastTopContentSeparatorHeight;
    struct { 
        unsigned long long numberOfGroups; 
        unsigned long long separatorIndex; 
        double separationPadding; 
        long long pilingMode; 
        double groupCellHeight; 
        unsigned int disableTableModalPresentation : 1; 
        unsigned int hasPaymentPasses : 1; 
        unsigned int hasPasses : 1; 
        unsigned int hasPaymentHeader : 1; 
        unsigned int hasPassHeader : 1; 
        unsigned int hasPaymentHeaderView : 1; 
        unsigned int hasPassHeaderView : 1; 
        unsigned int hasFooter : 1; 
        unsigned int isDeleting : 1; 
        unsigned int isCompactModalPresentation : 1; 
        unsigned int isContinuingModalPresentation : 1; 
        unsigned int forceSubheaderUpdate : 1; 
        unsigned int forceFooterUpdate : 1; 
        unsigned int preventFooterLayout : 1; 
        unsigned int mutatingForcePileOffscreen : 1; 
    }  _layoutState;
    unsigned long long  _modalGroupIndex;
    PKPassGroupView * _modallyPresentedGroupView;
    long long  _nextState;
    UIColor * _pageIndicatorTintColor;
    struct CGPoint { 
        double x; 
        double y; 
    }  _panningVelocity;
    PKPassthroughView * _passContainerView;
    PKPassFooterView * _passFooterView;
    PKPGSVSectionHeaderContext * _passHeaderContext;
    NSMutableArray * _passPileViews;
    NSMutableArray * _passthroughViews;
    PKPGSVSectionHeaderContext * _paymentHeaderContext;
    PKPaymentService * _paymentService;
    long long  _presentationState;
    unsigned long long  _previousIndexOfReorderedGroup;
    long long  _priorState;
    unsigned long long  _reorderActionTag;
    NSMutableArray * _reorderActions;
    PKPassGroupView * _reorderedGroupView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _reorderedGroupViewPositionInFrame;
    struct { 
        unsigned int isReordering : 1; 
        unsigned int isReorderPeekCompensated : 1; 
        unsigned int hasScrolledUp : 1; 
        unsigned int hasScrolledDown : 1; 
    }  _reorderingFlags;
    PKReusablePassViewQueue * _reusableCardViewQueue;
    long long  _scrollingTestState;
    PKSecureElement * _secureElement;
    bool  _showingFooter;
    bool  _staggerPileAnimations;
    PKPassthroughView * _subheaderContainerView;
    long long  _suspendedNextState;
    NSMutableArray * _suspendedTransitionCompletionHandlers;
    double  _topContentSeparatorHeight;
    id /* block */  _transitionCanceller;
    NSMutableArray * _transitionCompletionHandlers;
    unsigned int  _userInteractionCounter;
    bool  _wantsBacklightRamping;
}

@property (nonatomic, copy) UIColor *currentPageIndicatorTintColor;
@property (nonatomic) <PKPassGroupStackViewDatasource> *datasource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassGroupStackViewDelegate><UIScrollViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool footerSuppressed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isModallyPresentedPassAuthorized;
@property (nonatomic, readonly) bool isPresentingPassViewFront;
@property (nonatomic, readonly) bool isReordering;
@property (nonatomic, readonly) PKPass *modalGroupFrontmostPass;
@property (nonatomic) unsigned long long modalGroupIndex;
@property (nonatomic, copy) UIColor *pageIndicatorTintColor;
@property (nonatomic, readonly) double pileHeight;
@property (nonatomic) long long pilingMode;
@property (nonatomic) long long presentationState;
@property (nonatomic) bool staggerPileAnimations;
@property (readonly) Class superclass;
@property (nonatomic) double topContentSeparatorHeight;

+ (id)backgroundColor;

- (void).cxx_destruct;
- (void)_addGroupViewAsSubview:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)_addPanGestureRecognizerToGroupView:(id)arg1;
- (void)_adjustPassFooterViewOpacityForYOffset:(double)arg1;
- (void)_adjustSeparationGroupAndPassViewsForReordering;
- (void)_animateGroupViewAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 withAnchorView:(id)arg3 insertAbove:(bool)arg4;
- (void)_animateGroupViewForUndo:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)_animatorForGestureRecognizer:(id)arg1;
- (void)_arrangeGroups;
- (void)_autoscrollForReordering:(id)arg1;
- (void)_autoscrollIfNecessary;
- (void)_beginGroupPanWithGestureRecognizer:(id)arg1;
- (bool)_canShowPassFooter;
- (void)_cancelSuspendedTransition;
- (void)_cancelTransition;
- (void)_cleanUpAnimatorForGroupView:(id)arg1;
- (struct CGSize { double x1; double x2; })_contentSize;
- (void)_disableScrollingAndNormalizeContentOffset;
- (unsigned long long)_edgeStylesObscuredByTopCornersOfPassStyle:(long long)arg1;
- (unsigned long long)_edgeStylesObscuredByTopMiddleOfPassStyle:(long long)arg1;
- (void)_endGroupPanWithGestureRecognizer:(id)arg1;
- (void)_enumerateLoadedGroupViews:(id /* block */)arg1;
- (void)_executeCompletionHandlers:(id)arg1 cancelled:(bool)arg2;
- (id)_firstHeaderContext;
- (long long)_footerStateForPassView:(id)arg1 withContext:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForFooterViewForPassView:(id)arg1;
- (id)_frontmostPastViewForGroupIndex:(unsigned long long)arg1;
- (void)_generateModalGroupPileWithVisibleIndexes:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 reservePlaceForModalGroup:(bool)arg2;
- (id)_groupBeforeSeparatorGroup;
- (double)_groupCellHeight;
- (id)_groupViewAtIndex:(unsigned long long)arg1;
- (id)_groupViewAtIndexWhileEnsuringVisible:(unsigned long long)arg1 withContentMode:(long long)arg2;
- (id)_groupViewWithGroup:(id)arg1;
- (void)_handleModalGroupGesture:(id)arg1;
- (id)_headerContextForPassType:(unsigned long long)arg1;
- (unsigned long long)_indexForNativePositionInTable:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)_indexForNativePositionInTable:(struct CGPoint { double x1; double x2; })arg1 roundToClosestIndex:(bool)arg2;
- (unsigned long long)_indexOfGroupView:(id)arg1;
- (unsigned long long)_indexOfReorderedGroupView;
- (bool)_isGroupAtIndexInModalPile:(unsigned long long)arg1;
- (bool)_isIngestingPass;
- (bool)_isModalPresentationAllowed;
- (bool)_isModalPresentationAllowedForSingleGroup;
- (bool)_isTableModalPresentation;
- (double)_lastBarcodePassGroupCellHeight;
- (unsigned long long)_lastIndex;
- (void)_layoutContentFromOffset:(struct CGPoint { double x1; double x2; })arg1 toOffset:(struct CGPoint { double x1; double x2; })arg2 animated:(bool)arg3;
- (void)_layoutFooterAnimated:(bool)arg1 withAnimationDelay:(double)arg2;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; double x3; })_layoutStateForHeaderContextInTable:(id)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_loadGroupViewAtIndex:(unsigned long long)arg1 forState:(long long)arg2 presentationState:(long long)arg3 cached:(bool*)arg4;
- (void)_loadModalGroupView;
- (double)_maxYOfPassFrontFaceAtIndex:(unsigned long long)arg1;
- (unsigned long long)_maximumNumberOfVisiblePilePasses;
- (struct CGPoint { double x1; double x2; })_nativePositionForPositionInTable:(struct CGPoint { double x1; double x2; })arg1;
- (double)_nativeYForGroupInTableAtIndex:(unsigned long long)arg1;
- (void)_notifyDelegateOfStateChange:(bool)arg1;
- (double)_opacityForGroupAtIndex:(unsigned long long)arg1 forState:(long long)arg2;
- (bool)_passEligibleForFooter:(id)arg1;
- (double)_passFooterAlphaWhenVisible;
- (void)_paymentDidReceiveSuccessfulTransactionNotification:(id)arg1;
- (double)_pileAscenderHeight;
- (double)_pileAscenderHeightForGroupViewInPile:(id)arg1;
- (double)_pileBaseHeight;
- (double)_pileSeparationHeight;
- (struct CGPoint { double x1; double x2; })_positionForGroupView:(id)arg1 atIndex:(unsigned long long)arg2 forState:(long long)arg3;
- (void)_presentGroupStackViewWithAnimation:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_presentModalGroupView:(id)arg1 animated:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_presentModalGroupViewPostAnimationActions;
- (void)_presentOffscreenAnimated:(bool)arg1 split:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_presentPassIngestionWithAnimation:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_rampBacklightIfNecessary:(bool)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfEagerLoadedIndexes;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfVisibleIndexes;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfVisibleIndexesIgnoringBottomInset:(bool)arg1;
- (bool)_recomputeLayoutState;
- (void)_refreshBacklightForFrontmostPassGroup;
- (void)_removeGroupViewAsSubviewWithGroupID:(id)arg1;
- (void)_reorderPositionChangedForReorderedGroupViewWithVelocity:(struct CGPoint { double x1; double x2; })arg1;
- (void)_resetBrightness;
- (void)_resumeSuspendedTransition;
- (void)_reverseEnumerateLoadedGroupViews:(id /* block */)arg1;
- (double)_scaleForGroupView:(id)arg1 atIndex:(unsigned long long)arg2 forState:(long long)arg3;
- (id)_separatorGroup;
- (void)_setDefaultPaymentPassFromGroupView:(id)arg1 reorderedGroupView:(id)arg2;
- (void)_setModalGroupView:(id)arg1;
- (void)_setScrollEnabled:(bool)arg1;
- (double)_setupSpringFactory:(id)arg1 forPileAnimationFromPresentationState:(long long)arg2 toPresentationState:(long long)arg3 reverse:(bool)arg4;
- (double)_setupSpringFactory:(id)arg1 forPileAnimationToPresentationState:(long long)arg2 reverse:(bool)arg3;
- (double)_setupSpringFactoryForPileAnimations:(id)arg1 withMaximumAcceleration:(double)arg2 reverse:(bool)arg3;
- (bool)_shouldTablePresentationScroll;
- (void)_showPassFooterView:(bool)arg1 forPassView:(id)arg2 animated:(bool)arg3 delay:(double)arg4 completion:(id /* block */)arg5;
- (void)_showPassFooterView:(bool)arg1 forPassView:(id)arg2 context:(id)arg3 delay:(double)arg4 completion:(id /* block */)arg5;
- (id)_sortedAscendingGroupViewIndexes;
- (id)_sortedDescendingGroupViewIndexes;
- (id)_stackedIndices;
- (unsigned long long)_startVisibleIndex;
- (void)_stopAutoscrollTimer;
- (void)_suspendTransition;
- (unsigned long long)_tablePresentationNumberOfCellsBeforeHeaderHidden;
- (unsigned long long)_tablePresentationNumberOfCellsBeforeStacking;
- (void)_tileGroupsForState:(long long)arg1 eager:(bool)arg2;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_transformForGroupView:(id)arg1 atIndex:(unsigned long long)arg2 forState:(long long)arg3;
- (double)_transformedYForNativeYInTable:(double)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 index:(unsigned long long)arg3;
- (void)_transitionSuccessful:(bool)arg1;
- (void)_undoUserReorderWithReorderedGroupView:(id)arg1;
- (void)_updateBottomContentSeparatorVisibilityAnimated:(bool)arg1;
- (void)_updateContentSize;
- (void)_updateContentSizeAndLayout:(bool)arg1;
- (void)_updateContentSizeAndLayout:(bool)arg1 forceUpdate:(bool)arg2;
- (void)_updateGroupStateForGroupViewInModalPresentation:(id)arg1 animated:(bool)arg2;
- (void)_updateGroupStateForGroupViewInStackPresentation:(id)arg1 animated:(bool)arg2;
- (void)_updateGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3;
- (void)_updateGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3 atIndex:(unsigned long long)arg4;
- (bool)_updateHeaderContext:(id*)arg1 toContext:(id)arg2 animated:(bool)arg3;
- (void)_updateHeaderFooterState:(bool)arg1;
- (void)_updatePassFooterViewAnimated:(bool)arg1;
- (void)_updatePassFooterViewIfNecessaryAnimated:(bool)arg1 withBecomeVisibleDelay:(double)arg2;
- (void)_updatePassFooterViewIfNecessaryWithContext:(id)arg1 becomeVisibleDelay:(double)arg2;
- (void)_updatePassFooterViewWithContext:(id)arg1;
- (void)_updatePositionForGroupView:(id)arg1 toPosition:(struct CGPoint { double x1; double x2; })arg2 withSpringFactory:(id)arg3;
- (void)_updatePositionForGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3;
- (void)_updatePositionForGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)_updateTopContentSeparatorVisibilityAnimated:(bool)arg1;
- (void)_updateTransformForGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_xFrameForGroupViewInState:(long long)arg1;
- (double)_xPositionForGroupView:(id)arg1 forState:(long long)arg2;
- (double)_yForGroupInModalPileAtIndex:(unsigned long long)arg1;
- (double)_yForGroupInModalPileWithModalGroupY:(double)arg1;
- (double)_yForGroupInOffscreenPileAtIndex:(unsigned long long)arg1;
- (double)_yForGroupInPileAtIndex:(unsigned long long)arg1;
- (double)_yForGroupInTableAtIndex:(unsigned long long)arg1;
- (double)_yForModallyPresentedGroup;
- (double)_yForModallyPresentedGroupIgnoringCompactState:(bool)arg1;
- (double)_yForSingleGroupView:(id)arg1;
- (double)_yPositionForGroupAtIndex:(unsigned long long)arg1 forState:(long long)arg2;
- (void)beginScrollCardListTest;
- (void)beginSelectCardTest;
- (id)currentPageIndicatorTintColor;
- (id)datasource;
- (void)dealloc;
- (void)deleteAnimationController:(id)arg1 didComplete:(bool)arg2;
- (void)deleteAnimationControllerWillBeginDeleteAnimation:(id)arg1;
- (void)deleteGroup:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1;
- (void)evaluateBrightness;
- (bool)footerSuppressed;
- (void)gotoBaseTestState;
- (bool)groupView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
- (void)groupView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
- (void)groupView:(id)arg1 didUpdatePassView:(id)arg2;
- (void)groupView:(id)arg1 frontmostPassViewDidChange:(id)arg2;
- (void)groupView:(id)arg1 panned:(struct CGPoint { double x1; double x2; })arg2 withVelocity:(struct CGPoint { double x1; double x2; })arg3;
- (void)groupView:(id)arg1 resizeButtonPressedForPass:(id)arg2 withBarcode:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })groupView:(id)arg1 targetPageControlFrameForProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (long long)groupViewContentModeForFrontmostPassWhenPiled:(id)arg1 withDefaultContentMode:(long long)arg2;
- (long long)groupViewContentModeForFrontmostPassWhenStacked:(id)arg1;
- (void)groupViewDidUpdatePageControlVisibility:(id)arg1;
- (void)groupViewFrontPassDidResize:(id)arg1 animated:(bool)arg2;
- (void)groupViewPanDidBegin:(id)arg1;
- (void)groupViewPanDidEnd:(id)arg1;
- (unsigned long long)groupViewPassesSuppressedContent:(id)arg1;
- (id)groupViewReusablePassViewQueue:(id)arg1;
- (bool)groupViewShouldAllowPanning:(id)arg1;
- (bool)groupViewShouldAllowPassResize:(id)arg1;
- (void)groupViewTapped:(id)arg1;
- (bool)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2;
- (id)headerForPassType:(unsigned long long)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidate;
- (bool)isModallyPresentedPassAuthorized;
- (bool)isPassFooterViewInGroup:(id)arg1;
- (bool)isPresentingPassViewFront;
- (bool)isReordering;
- (void)layoutContentForCurrentPresentationState:(bool)arg1;
- (void)layoutHeaderFootersAnimated:(bool)arg1;
- (void)layoutSubviews;
- (id)modalGroupFrontmostPass;
- (unsigned long long)modalGroupIndex;
- (void)moveGroup:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)noteDidEndScrollingForTesting;
- (id)pageIndicatorTintColor;
- (void)passFooterViewDidChangeUserIntentRequirement:(id)arg1;
- (void)passFooterViewDidChangeUserIntentRequirement:(id)arg1 withContext:(id)arg2;
- (void)paymentDeviceDidBecomeAvailable;
- (void)paymentDeviceDidBecomeUnavailable;
- (void)paymentDeviceDidEnterRestrictedMode;
- (void)paymentDeviceDidLeaveRestrictedMode;
- (double)pileHeight;
- (long long)pilingMode;
- (void)presentDiff:(id)arg1 completion:(id /* block */)arg2;
- (void)presentPassWithUniqueID:(id)arg1;
- (long long)presentationState;
- (void)reloadData;
- (void)resetBrightness;
- (void)safeAreaInsetsDidChange;
- (void)scrollDownTest;
- (void)scrollNext;
- (void)scrollUpTest;
- (void)setCurrentPageIndicatorTintColor:(id)arg1;
- (void)setDatasource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFooterSuppressed:(bool)arg1;
- (void)setFooterSuppressed:(bool)arg1 withContext:(id)arg2;
- (void)setModalGroupIndex:(unsigned long long)arg1;
- (void)setPageIndicatorTintColor:(id)arg1;
- (void)setPilingMode:(long long)arg1;
- (void)setPresentationState:(long long)arg1;
- (void)setPresentationState:(long long)arg1 animated:(bool)arg2;
- (void)setPresentationState:(long long)arg1 animated:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setPresentationState:(long long)arg1 context:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setStaggerPileAnimations:(bool)arg1;
- (void)setTableModalPresentationEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setTopContentSeparatorHeight:(double)arg1;
- (void)stageGroupInPresentationState:(long long)arg1 atIndex:(unsigned long long)arg2;
- (bool)staggerPileAnimations;
- (id)subheaderForPassType:(unsigned long long)arg1;
- (void)testGoModal;
- (void)testGroupSelection;
- (void)tilePassesEagerly:(bool)arg1;
- (double)topContentSeparatorHeight;
- (void)updateHeaderAndSubheaderViewsIfNecessary;
- (void)updatePeerPaymentFooterViewIfNecessary;

@end
