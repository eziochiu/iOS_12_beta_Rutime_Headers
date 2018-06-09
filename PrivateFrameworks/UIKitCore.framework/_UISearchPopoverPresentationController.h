/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISearchPopoverPresentationController : UIPopoverPresentationController <_UISearchControllerPresenting> {
    _UISearchPresentationAssistant * _assistant;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  finalFrameForContainerView;
}

@property (nonatomic, readonly) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property (nonatomic, readonly) bool animatorShouldLayoutPresentationViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long edgeForHidingNavigationBar;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } finalFrameForContainerView;
@property (nonatomic, readonly) bool forceObeyNavigationBarInsets;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double resultsControllerContentOffset;
@property (nonatomic, readonly) bool resultsUnderlapsSearchBar;
@property (nonatomic, readonly) bool searchBarCanContainScopeBar;
@property (nonatomic, readonly, retain) UIView *searchBarContainerView;
@property (nonatomic, readonly) bool searchBarShouldClipToBounds;
@property (nonatomic, readonly) bool searchBarToBecomeTopAttached;
@property (nonatomic, readonly) bool shouldAccountForStatusBar;
@property (nonatomic, readonly) double statusBarAdjustment;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_popoverHostingWindow;
- (id)_presentationControllerForTraitCollection:(id)arg1;
- (id)_presentedViewControllerForSizeClassPair:(struct { long long x1; long long x2; })arg1;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToWillBegin;
- (id)adaptivePresentationController;
- (long long)adaptivePresentationStyle;
- (bool)animatorShouldLayoutPresentationViews;
- (unsigned long long)edgeForHidingNavigationBar;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalFrameForContainerView;
- (bool)forceObeyNavigationBarInsets;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)presentationTransitionWillBegin;
- (double)resultsControllerContentOffset;
- (bool)resultsUnderlapsSearchBar;
- (bool)searchBarCanContainScopeBar;
- (id)searchBarContainerView;
- (bool)searchBarShouldClipToBounds;
- (bool)searchBarToBecomeTopAttached;
- (void)setContentVisible:(bool)arg1;
- (bool)shouldAccountForStatusBar;
- (double)statusBarAdjustment;

@end
