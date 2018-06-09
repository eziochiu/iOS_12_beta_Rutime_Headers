/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUPreviewOverlayViewController : SUViewController {
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    id /* block */  _loadBlock;
    bool  _loaded;
    double  _paddingRight;
    double  _paddingTop;
    SUPreviewOverlayStorePageViewController * _storePageViewController;
    NSString * _userInfoString;
    bool  _visible;
}

@property (getter=isContentLoaded, nonatomic, readonly) bool contentLoaded;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic) double paddingRight;
@property (nonatomic) double paddingTop;
@property (nonatomic, copy) NSString *userInfoString;

+ (void)_setContentInsetsForScrollView:(id)arg1 viewController:(id)arg2;
+ (double)defaultAnimationDuration;
+ (id)defaultRequestProperties;
+ (void)offsetScrollView:(id)arg1 forViewController:(id)arg2;

- (id)_previewOverlayContainerForViewController:(id)arg1;
- (id)_scrollViewForViewController:(id)arg1;
- (id)_storePageViewController;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)dealloc;
- (void)hideInNavigationController:(id)arg1 animated:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)hideInViewController:(id)arg1 animated:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)invalidateForMemoryPurge;
- (bool)isContentLoaded;
- (void)loadView;
- (void)loadWithCompletionBlock:(id /* block */)arg1;
- (void)loadWithRequestProperties:(id)arg1 completionBlock:(id /* block */)arg2;
- (double)paddingRight;
- (double)paddingTop;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPaddingRight:(double)arg1;
- (void)setPaddingTop:(double)arg1;
- (void)setUserInfoString:(id)arg1;
- (void)showInNavigationController:(id)arg1 animated:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)showInViewController:(id)arg1 animated:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)storePage:(id)arg1 finishedWithSuccess:(bool)arg2;
- (id)userInfoString;

@end
