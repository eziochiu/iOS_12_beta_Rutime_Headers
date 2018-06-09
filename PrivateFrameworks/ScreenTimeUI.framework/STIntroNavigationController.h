/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STIntroNavigationController : UINavigationController {
    id /* block */  _dismissHandler;
}

@property (copy) id /* block */ dismissHandler;

- (void).cxx_destruct;
- (void)addDismissButtonWithHandler:(id /* block */)arg1;
- (void)dismissButtonPressed;
- (id /* block */)dismissHandler;
- (void)setDismissHandler:(id /* block */)arg1;
- (void)viewDidLoad;

@end
