/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKHostedViewController : UIViewController {
    GKGame * _game;
    bool  _gkIsDisappearing;
    bool  _isRequestingRemoteViewController;
    bool  _presentingRemoteViewController;
    GKRemoteViewController * _remoteViewController;
    id /* block */  _remoteViewReadyHandler;
    bool  _shouldPresentRemoteViewController;
}

@property (nonatomic, retain) GKGame *game;
@property (nonatomic) bool gkIsDisappearing;
@property (nonatomic) bool isRequestingRemoteViewController;
@property (nonatomic) bool presentingRemoteViewController;
@property (nonatomic, retain) GKRemoteViewController *remoteViewController;
@property (nonatomic, copy) id /* block */ remoteViewReadyHandler;
@property (nonatomic) bool shouldPresentRemoteViewController;

- (id)_presentingViewController;
- (bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)dealloc;
- (void)didGetRemoteViewController;
- (void)didReceiveMemoryWarning;
- (void)dismissModalViewControllerAnimated:(bool)arg1;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)donePressed:(id)arg1;
- (id)game;
- (bool)gkIsDisappearing;
- (id)hostSideViewControllerClassName;
- (id)init;
- (bool)isRequestingRemoteViewController;
- (void)presentRemoteViewControllerIfNeeded;
- (bool)presentingRemoteViewController;
- (id)remoteViewController;
- (id /* block */)remoteViewReadyHandler;
- (void)requestRemoteViewControllerIfNeeded;
- (void)resetRemoteViewController;
- (id)serviceSideViewControllerClassName;
- (void)setGame:(id)arg1;
- (void)setGkIsDisappearing:(bool)arg1;
- (void)setIsRequestingRemoteViewController:(bool)arg1;
- (void)setPresentingRemoteViewController:(bool)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setRemoteViewReadyHandler:(id /* block */)arg1;
- (void)setShouldPresentRemoteViewController:(bool)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutomaticallyForwardRotationMethods;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldPresentRemoteViewController;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
