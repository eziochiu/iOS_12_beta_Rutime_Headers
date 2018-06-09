/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FACirclePresenter : NSObject <FACircleRemoteUIDelegateDelegate> {
    id /* block */  _completion;
    UIViewController * _presenter;
    RemoteUIController * _remoteUIController;
    FACircleRemoteUIDelegate * _remoteUIDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController *presenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)FACircleRemoteUIDelegate:(id)arg1 completedWithSuccess:(bool)arg2 error:(id)arg3;
- (id)_serverHookHandlerWithRemoteUIController:(id)arg1;
- (id)init;
- (id)initWithPresenter:(id)arg1 context:(id)arg2;
- (void)loadRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)presenter;
- (void)setPresenter:(id)arg1;

@end
