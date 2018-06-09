/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface FTRegAccountServiceDelegate : NSObject <AAAppleIDLoginPlugin, AASetupAssistantDelegateService> {
    IDSAccountController * _accountController;
    id /* block */  _completionHandler;
    CNFRegController * _regController;
    NSDictionary * _responseDictionary;
}

@property (nonatomic, retain) IDSAccountController *accountController;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNFRegController *regController;
@property (nonatomic, copy) NSDictionary *responseDictionary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_account:(id)arg1 matchesSetupParameters:(id)arg2;
- (void)_cleanup;
- (id)_defaultSetupRequestParameters;
- (id)_existingAccountForSetupParameters:(id)arg1;
- (id)_existingOperationalAccount;
- (void)_handleFailureWithErrorCode:(long long)arg1;
- (void)_handleSuccess:(bool)arg1 error:(id)arg2;
- (bool)_hasAccount;
- (bool)_hasOperationalAccount;
- (id)_logName;
- (bool)_shouldSkipAccountSetup:(id)arg1;
- (id)accountController;
- (id)accountSetupRequestParameters;
- (void)completeSetupWithResponseParameters:(id)arg1 handler:(id /* block */)arg2;
- (id /* block */)completionHandler;
- (id)delegateServiceIdentifier;
- (id)displayName;
- (void)handleLoginResponse:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithRegController:(id)arg1;
- (id)name;
- (id)parametersForIdentityEstablishmentRequest;
- (id)parametersForLoginRequest;
- (id)regController;
- (id)responseDictionary;
- (id)serviceIdentifier;
- (bool)serviceIsAvailable;
- (long long)serviceType;
- (void)setAccountController:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setRegController:(id)arg1;
- (void)setResponseDictionary:(id)arg1;
- (void)setupOperationFailed;

@end
