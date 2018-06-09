/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKNativeAccountRecoveryController : NSObject <CDPAuthProvider> {
    <CDPStateUIProvider> * _cdpUiProvider;
    AKAccountRecoveryContext * _recoveryContext;
    CDPRecoveryController * _recoveryController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)postBodyForiCSCServerUIResponseWithContext:(id)arg1 recoveryError:(id)arg2;
+ (id)requestForRecoveryCompletionWithContext:(id)arg1 recoveredInfo:(id)arg2 recoveryError:(id)arg3;
+ (bool)shouldSendServerResponseForRecoveredInfo:(id)arg1 withRecoveryError:(id)arg2;

- (void).cxx_destruct;
- (id)_mapICSCRecoveryResultsToAuthKit:(id)arg1;
- (void)cdpContext:(id)arg1 performSilentRecoveryTokenRenewal:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 verifyMasterKey:(id)arg2 completion:(id /* block */)arg3;
- (void)dismissNativeRecoveryUIWithCompletion:(id /* block */)arg1;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2;
- (void)presentNativeRecoveryUIWithCompletion:(id /* block */)arg1;

@end
