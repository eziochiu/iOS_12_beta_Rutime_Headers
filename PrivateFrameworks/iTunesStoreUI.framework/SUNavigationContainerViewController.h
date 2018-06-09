/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUNavigationContainerViewController : SUViewController {
    bool  _bridgedNavigation;
    id /* block */  _popHandler;
    bool  _shouldRunPopHandler;
}

@property (nonatomic) bool bridgedNavigation;
@property (nonatomic, readonly) UIViewController *embeddedViewController;
@property (nonatomic, copy) id /* block */ popHandler;
@property (nonatomic) bool shouldRunPopHandler;

- (void).cxx_destruct;
- (bool)bridgedNavigation;
- (id)embeddedViewController;
- (id)initWithChildViewController:(id)arg1;
- (id /* block */)popHandler;
- (void)setBridgedNavigation:(bool)arg1;
- (void)setEmbeddedViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setPopHandler:(id /* block */)arg1;
- (void)setShouldRunPopHandler:(bool)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldRunPopHandler;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
