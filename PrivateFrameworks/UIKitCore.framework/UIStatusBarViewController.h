/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIStatusBarViewController : UIViewController {
    bool  _iPhoneWS;
    bool  _keyboardVisible;
    UIView * _statusBar;
    UIClassicStatusBarView * _statusBarBackgroundView;
    UIWindow * _window;
}

+ (double)statusBarOrientationAnimationDurationFrom:(long long)arg1 to:(long long)arg2;

- (void).cxx_destruct;
- (void)_changeStatusBarOrientationFinished:(id)arg1 finished:(bool)arg2 context:(void*)arg3;
- (void)_changeStatusBarOrientationFrom:(long long)arg1 toOrientation:(long long)arg2;
- (void)_finishStatusBarOrientationChange;
- (void)_prepareForZoom:(bool)arg1;
- (void)_statusBarHideAnimationFinished:(id)arg1 finished:(bool)arg2 hidden:(id)arg3;
- (struct CGSize { double x1; double x2; })_statusBarSizeForOrientation:(long long)arg1;
- (void)_statusBarViewControllerKeyboardDidHide:(id)arg1;
- (void)_statusBarViewControllerKeyboardWillShow:(id)arg1;
- (void)_updateStatusBarForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 style:(long long)arg3 hidden:(bool)arg4 slideUp:(bool)arg5;
- (void)_updateStatusBarGeometryForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 hidden:(bool)arg3 slideUp:(bool)arg4;
- (id)_window;
- (void)_zoom:(bool)arg1 animated:(bool)arg2;
- (void)dealloc;
- (id)init;
- (bool)isClassicControlWindow:(id)arg1;
- (void)loadView;
- (void)setStatusBarHidden:(bool)arg1 animationParameters:(id)arg2;
- (void)setStatusBarOrientation:(long long)arg1 animationParameters:(id)arg2;
- (void)setStatusBarStyle:(long long)arg1 animationParameters:(id)arg2;
- (void)viewDidLoad;

@end