/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDRemoteActionViewController : _UIRemoteViewController <DDRemoteActionPresenter> {
    DDAction * _action;
    DDActionController * _actionController;
    bool  _proxyConfigured;
    bool  _receivedActionDidFinish;
    bool  _waitingForRemoteConfiguration;
}

@property (nonatomic) DDAction *action;
@property (nonatomic) DDActionController *actionController;

+ (id)exportedInterface;
+ (id)prepareViewController:(id)arg1 forAction:(id)arg2 actionController:(id)arg3;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)_prepareForAction:(id)arg1 inActionController:(id)arg2;
- (id)action;
- (void)actionBecameCancellable:(bool)arg1;
- (id)actionController;
- (void)actionDidFinish;
- (void)adaptForPresentationInPopover:(bool)arg1;
- (void)getIsBeingPresentedInPopover:(id /* block */)arg1;
- (void)setAction:(id)arg1;
- (void)setActionController:(id)arg1;
- (void)viewControllerReady;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
