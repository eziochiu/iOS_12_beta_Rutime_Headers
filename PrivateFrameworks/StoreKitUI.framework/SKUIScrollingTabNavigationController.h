/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIScrollingTabNavigationController : SKUINavigationController <SKUIObservableNavigationStack, SKUIScrollingTabBarBottomInsetAwareContent> {
    <SKUINavigationStackObserver> * _navigationStackObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SKUINavigationStackObserver> *navigationStackObserver;
@property (getter=isShowingNavigationStackRootContent, nonatomic) bool showingNavigationStackRootContent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_observedNavigationStackDidChange;
- (double)_scrollViewBottomContentInsetForViewController:(id)arg1;
- (void)didShowViewController:(id)arg1 animated:(bool)arg2;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isShowingNavigationStackRootContent;
- (id)navigationStackObserver;
- (void)popToNavigationStackRootContentAnimated:(bool)arg1 withBehavior:(long long)arg2;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)scrollingTabBarBottomInsetAdjustmentDidChange;
- (void)setNavigationStackObserver:(id)arg1;
- (void)viewDidAppear:(bool)arg1;

@end
