/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebApp.framework/WebApp
 */

@interface WebAppViewController : UIViewController <_SFWebAppViewControllerDelegate> {
    _UIAsyncInvocation * _cancelViewServiceRequest;
    _SFWebAppViewController * _contentViewController;
    bool  _hasShownLoadingViewController;
    NSTimer * _hideSnapshotTimer;
    LoadingViewController * _loadingViewController;
    long long  _orientation;
    UIWebClip * _webClip;
    UIWindow * _window;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIWebClip *webClip;

- (void).cxx_destruct;
- (void)_cancelHideSnapshotTimer;
- (void)_setUpContentViewController:(id)arg1;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (void)dealloc;
- (void)hideLoadingView;
- (id)initWithWebClip:(id)arg1;
- (void)timeLimitForLoadCompletionExpired;
- (void)viewDidAppear:(bool)arg1;
- (void)webAppViewController:(id)arg1 didChangeLoadingState:(bool)arg2;
- (void)webAppViewControllerDidFinishInitialLoad:(id)arg1;
- (id)webClip;

@end
