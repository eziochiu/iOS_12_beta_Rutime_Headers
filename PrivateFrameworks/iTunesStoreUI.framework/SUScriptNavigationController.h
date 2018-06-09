/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptNavigationController : SUScriptViewController {
    UINavigationController * _navController;
}

@property (readonly) SUScriptNavigationBar *navigationBar;
@property bool navigationBarHidden;
@property (copy) id toolbarHidden;
@property (readonly) SUScriptViewController *topViewController;
@property (retain) id viewControllers;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)_copyNativeViewControllersFromScriptViewControllers:(id)arg1;
- (id)_filteredViewControllers;
- (id)_navigationController;
- (void)_popToRootViewControllerAnimated:(bool)arg1;
- (void)_popViewControllerAnimated:(bool)arg1;
- (void)_pushViewController:(id)arg1 animated:(bool)arg2;
- (void)_setViewControllers:(id)arg1 animated:(bool)arg2;
- (id)attributeKeys;
- (void)dealloc;
- (void)didPerformBatchedInvocations;
- (id)initWithRootScriptViewController:(id)arg1 clientInterface:(id)arg2;
- (id)navigationBar;
- (bool)navigationBarHidden;
- (id)newNativeViewController;
- (void)popToRootViewControllerAnimated:(bool)arg1;
- (void)popViewControllerAnimated:(bool)arg1;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (id)scriptAttributeKeys;
- (void)setNavigationBar:(id)arg1;
- (void)setNavigationBarHidden:(bool)arg1;
- (void)setNavigationBarHidden:(bool)arg1 animated:(bool)arg2;
- (void)setToolbarHidden:(id)arg1;
- (void)setToolbarHidden:(bool)arg1 animated:(bool)arg2;
- (void)setTopViewController:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;
- (id)toolbarHidden;
- (id)topViewController;
- (id)viewControllers;
- (void)willPerformBatchedInvocations;

@end
