/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIOnboardingAffiliationCirclesViewController : UIViewController <SKUIPhysicalCirclesDataSource, SKUIPhysicalCirclesDelegate> {
    NSMutableArray * _affiliationItems;
    SKUIPhysicalCirclesView * _circlesView;
    SKUIClientContext * _clientContext;
    <SKUIOnboardingAffiliationCirclesDelegate> * _delegate;
    NSObject<OS_dispatch_source> * _deletionTimer;
    bool  _didPerformFinishAnimation;
    UIView * _footerView;
    NSMapTable * _images;
    SKUIOnboardingInstructionsView * _instructionsView;
    bool  _needsReloadOnDidAppear;
}

@property (nonatomic, copy) NSArray *affiliationItems;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIOnboardingAffiliationCirclesDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *footerView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SKUIOnboardingInstructionsView *instructionsView;
@property (nonatomic, readonly) double maximumCircleDiameter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelDeletionTimer;
- (double)_circleImageAlphaForAffinityCount:(long long)arg1;
- (struct CGSize { double x1; double x2; })_circleSizeForAffinityCount:(long long)arg1;
- (void)_completeDeletionForCircleAtIndex:(long long)arg1;
- (void)_reloadRepellors;
- (void)_sendAffilationItemsDidChange;
- (long long)_titlePositionForAffinityCount:(long long)arg1;
- (double)_topLayoutMargin;
- (void)addAffiliationItems:(id)arg1;
- (id)affiliationItems;
- (void)circleView:(id)arg1 didBeginLongPressForCircleAtIndex:(long long)arg2;
- (void)circleView:(id)arg1 didEndLongPressForCircleAtIndex:(long long)arg2;
- (void)circleView:(id)arg1 didTapCircleAtIndex:(long long)arg2;
- (id)circlesView:(id)arg1 circleForIndex:(long long)arg2;
- (id)clientContext;
- (void)dealloc;
- (id)delegate;
- (id)footerView;
- (id)instructionsView;
- (void)loadView;
- (double)maximumCircleDiameter;
- (long long)numberOfCirclesInCircleView:(id)arg1;
- (void)performFinishAnimationWithCompletionBlock:(id /* block */)arg1;
- (void)removeAffiliationItemsInIndexSet:(id)arg1 animated:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)resetWithAffiliationItems:(id)arg1 animated:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)setAffiliationItems:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setFooterView:(id)arg1 animated:(bool)arg2;
- (void)setImage:(id)arg1 forAffiliationItem:(id)arg2;
- (void)setUserAffinityCount:(long long)arg1 forAffiliationItemAtIndex:(long long)arg2 animated:(bool)arg3 completionBlock:(id /* block */)arg4;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
