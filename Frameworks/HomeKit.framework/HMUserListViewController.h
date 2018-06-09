/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMUserListViewController : UIViewController <HMUserManagementRemoteHost> {
    _UIAsyncInvocation * _cancelServiceInvocation;
    id /* block */  _completionHandler;
    HMHome * _home;
    id /* block */  _loadHandler;
    HMUserListRemoteViewController * _remoteViewController;
    bool  _shouldPresentWhenLoaded;
}

@property (nonatomic, retain) _UIAsyncInvocation *cancelServiceInvocation;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, copy) id /* block */ loadHandler;
@property (nonatomic, retain) HMUserListRemoteViewController *remoteViewController;
@property (nonatomic) bool shouldPresentWhenLoaded;

- (void).cxx_destruct;
- (void)_configureAndAddRemoteViewController;
- (void)_finishSetupWithError:(id)arg1;
- (void)_presentAsTopmostViewController;
- (void)_requestRemoteViewController;
- (id)cancelServiceInvocation;
- (id /* block */)completionHandler;
- (id)home;
- (id)initWithHome:(id)arg1 loadHandler:(id /* block */)arg2;
- (id /* block */)loadHandler;
- (void)presentWhenLoaded;
- (id)remoteViewController;
- (void)setCancelServiceInvocation:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setHome:(id)arg1;
- (void)setLoadHandler:(id /* block */)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setShouldPresentWhenLoaded:(bool)arg1;
- (bool)shouldAutorotate;
- (bool)shouldPresentWhenLoaded;
- (unsigned long long)supportedInterfaceOrientations;
- (void)userManagementDidFinishWithError:(id)arg1;
- (void)userManagementDidLoad;
- (void)viewDidLoad;

@end
