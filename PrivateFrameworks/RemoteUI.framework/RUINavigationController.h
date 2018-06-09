/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUINavigationController : UINavigationController {
    id /* block */  _menuDismissalHandler;
    unsigned long long  _ruiSupportedInterfaceOrientations;
}

@property (nonatomic, copy) id /* block */ menuDismissalHandler;

- (void).cxx_destruct;
- (void)_menuButtonPressed:(id)arg1;
- (bool)canBeShownFromSuspendedState;
- (void)loadView;
- (id /* block */)menuDismissalHandler;
- (void)setMenuDismissalHandler:(id /* block */)arg1;
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
