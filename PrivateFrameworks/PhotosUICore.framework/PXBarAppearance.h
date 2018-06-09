/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXBarAppearance : PXObservable <PXChangeObserver, PXMutableBarAppearance> {
    PXBarAnimationOptions * __animationOptions;
    bool  __hasViewAppeared;
    <PXBarAppearanceImplementationDelegate> * __implementationDelegate;
    long long  __preferredStatusBarUpdateAnimation;
    bool  _enabled;
    <PXBarAppearanceImplementationDelegate> * _implementationDelegate;
    struct { 
        bool respondsToWillUpdateBarAppearanceOnViewWillAppear; 
        bool respondsToIsStatusBarVisible; 
    }  _implementationDelegateFlags;
    bool  _prefersNavigationBarVisible;
    bool  _prefersStatusBarVisible;
    bool  _prefersTabBarVisible;
    bool  _prefersToolbarVisible;
    UIViewController * _viewController;
}

@property (setter=_setAnimationOptions:, nonatomic, copy) PXBarAnimationOptions *_animationOptions;
@property (setter=_setHasViewAppeared:, nonatomic) bool _hasViewAppeared;
@property (setter=_setImplementationDelegate:, nonatomic) <PXBarAppearanceImplementationDelegate> *_implementationDelegate;
@property (setter=_setPreferredStatusBarUpdateAnimation:, nonatomic) long long _preferredStatusBarUpdateAnimation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXBarAppearanceImplementationDelegate> *implementationDelegate;
@property (nonatomic, readonly) bool prefersNavigationBarVisible;
@property (nonatomic, readonly) bool prefersStatusBarVisible;
@property (nonatomic, readonly) bool prefersTabBarVisible;
@property (nonatomic, readonly) bool prefersToolbarVisible;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIViewController *viewController;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void).cxx_destruct;
- (id)_animationOptions;
- (bool)_hasViewAppeared;
- (id)_implementationDelegate;
- (long long)_preferredStatusBarUpdateAnimation;
- (void)_setAnimationOptions:(id)arg1;
- (void)_setHasViewAppeared:(bool)arg1;
- (void)_setImplementationDelegate:(id)arg1;
- (void)_setNavigationBarVisible:(bool)arg1 withAnimationOptions:(id)arg2;
- (void)_setPreferredStatusBarUpdateAnimation:(long long)arg1;
- (void)_setTabBarVisible:(bool)arg1 withAnimationOptions:(id)arg2;
- (void)_setToolbarVisible:(bool)arg1 withAnimationOptions:(id)arg2;
- (void)_update;
- (void)_updateImplementationDelegate;
- (void)_updateOnViewWillAppear:(bool)arg1;
- (void)_updateStatusBarVisibilityWithAnimationOptions:(id)arg1;
- (void)_updateWithAnimationOptions:(id)arg1 isStatusBarHidden:(bool)arg2;
- (long long)adjustedPreferredStatusBarUpdateAnimation:(long long)arg1;
- (bool)adjustedPrefersStatusBarHidden:(bool)arg1;
- (id)implementationDelegate;
- (id)init;
- (id)initWithViewController:(id)arg1;
- (bool)isEnabled;
- (id)mutableChangeObject;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)performChanges:(id /* block */)arg1;
- (void)performChangesWithAnimationOptions:(id)arg1 changes:(id /* block */)arg2;
- (bool)prefersNavigationBarVisible;
- (bool)prefersStatusBarVisible;
- (bool)prefersTabBarVisible;
- (bool)prefersToolbarVisible;
- (void)setEnabled:(bool)arg1;
- (void)setImplementationDelegate:(id)arg1;
- (void)setPrefersNavigationBarVisible:(bool)arg1;
- (void)setPrefersStatusBarVisible:(bool)arg1;
- (void)setPrefersTabBarVisible:(bool)arg1;
- (void)setPrefersToolbarVisible:(bool)arg1;
- (id)viewController;
- (void)viewControllerViewDidDisappear:(bool)arg1;
- (void)viewControllerViewWillAppear:(bool)arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)defaultImplementationDelegate;

@end
