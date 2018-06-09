/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFAccountRegistrar : NSObject {
    IMAccount * _account;
    id /* block */  _completionBlock;
    UIViewController * _presentationViewController;
    NSTimer * _registrationTimer;
    long long  _serviceType;
}

@property (retain) IMAccount *account;
@property (copy) id /* block */ completionBlock;
@property (retain) UIViewController *presentationViewController;
@property (retain) NSTimer *registrationTimer;
@property long long serviceType;

- (void).cxx_destruct;
- (void)_accountRegistrationStatusChanged:(id)arg1;
- (void)_configureAliasesForAccount:(id)arg1;
- (void)_continueRegisteringAuthenticatedAccount:(id)arg1;
- (void)_registrationTimerFired:(id)arg1;
- (void)_startTimer;
- (void)_stopTimer;
- (id)account;
- (id /* block */)completionBlock;
- (void)continueRegistrationForAccount:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)dealloc;
- (id)initWithServiceType:(long long)arg1 presentationViewController:(id)arg2;
- (id)presentationViewController;
- (void)registerAccountWithUsername:(id)arg1 password:(id)arg2 service:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)registrationTimer;
- (long long)serviceType;
- (void)setAccount:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setPresentationViewController:(id)arg1;
- (void)setRegistrationTimer:(id)arg1;
- (void)setServiceType:(long long)arg1;

@end
