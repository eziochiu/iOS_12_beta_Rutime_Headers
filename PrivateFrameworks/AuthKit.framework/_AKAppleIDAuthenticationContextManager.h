/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface _AKAppleIDAuthenticationContextManager : NSObject <AKAppleIDAuthenticationClientProtocol> {
    NSMutableDictionary * _authContextsByUUID;
    NSObject<OS_dispatch_queue> * _authContextsQueue;
    AKAppleIDAuthenticationController * _authController;
    <AKAppleIDAuthenticationDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AKAppleIDAuthenticationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_clientSideContextForServerContext:(id)arg1;
- (id)delegate;
- (void)dismissBasicLoginUIForContext:(id)arg1 completion:(id /* block */)arg2;
- (void)dismissKeepUsingUIForContext:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)dismissNativeRecoveryUIForContext:(id)arg1 completion:(id /* block */)arg2;
- (void)dismissSecondFactorUIForContext:(id)arg1 completion:(id /* block */)arg2;
- (void)dismissServerProvidedUIForContext:(id)arg1 completion:(id /* block */)arg2;
- (void)eraseAnisetteForContext:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)fetchAnisetteDataForContext:(id)arg1 provisionIfNecessary:(bool)arg2 withCompletion:(id /* block */)arg3;
- (id)initWithAuthenticationController:(id)arg1;
- (void)legacyAnisetteDataForContext:(id)arg1 DSID:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)presentBasicLoginUIForContext:(id)arg1 completion:(id /* block */)arg2;
- (void)presentKeepUsingUIForContext:(id)arg1 appleID:(id)arg2 completion:(id /* block */)arg3;
- (void)presentLoginAlertForContext:(id)arg1 withError:(id)arg2 title:(id)arg3 message:(id)arg4 completion:(id /* block */)arg5;
- (void)presentNativeRecoveryUIForContext:(id)arg1 recoveryContext:(id)arg2 completion:(id /* block */)arg3;
- (void)presentSecondFactorAlertForContext:(id)arg1 withError:(id)arg2 title:(id)arg3 message:(id)arg4 completion:(id /* block */)arg5;
- (void)presentSecondFactorUIForContext:(id)arg1 completion:(id /* block */)arg2;
- (void)presentServerProvidedUIForContext:(id)arg1 withConfiguration:(id)arg2 completion:(id /* block */)arg3;
- (void)provisionAnisetteForContext:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)registerContext:(id)arg1;
- (void)registerSurrogateForContext:(id)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)shouldContinueWithAuthenticationResults:(id)arg1 error:(id)arg2 forContextID:(id)arg3 completion:(id /* block */)arg4;
- (void)syncAnisetteForContext:(id)arg1 withSIMData:(id)arg2 completion:(id /* block */)arg3;
- (void)unregisterContext:(id)arg1;

@end
