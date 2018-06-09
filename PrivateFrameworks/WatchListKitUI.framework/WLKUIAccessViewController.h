/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUIAccessViewController : UINavigationController <UIViewControllerTransitioningDelegate> {
    id /* block */  _completionHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)eligibleBundleIDs;
+ (bool)grantAccessToBundleIDs:(id)arg1;
+ (bool)grantAccessToBundleIDs:(id)arg1 shouldSuppressWelcomeVideoAddOnOptIn:(bool)arg2;
+ (void)resolveBundleIDs:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)initWithBundleIDs:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setCompletionHandler:(id /* block */)arg1;
- (unsigned long long)supportedInterfaceOrientations;

@end
