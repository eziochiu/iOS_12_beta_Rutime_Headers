/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSAuthKitUpdateTask : AMSTask <AKAppleIDAuthenticationDelegate> {
    ACAccount * _account;
    ACDAccountStore * _accountStore;
    AMSAuthenticateOptions * _options;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) ACDAccountStore *accountStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AMSAuthenticateOptions *options;
@property (readonly) Class superclass;

+ (id)_createAuthenticationContextForAccount:(id)arg1 options:(id)arg2;
+ (id)_createAuthenticationController;

- (void).cxx_destruct;
- (id)_createUpdatedAccount:(id)arg1 usingAuthenticationResults:(id)arg2;
- (id)_performAuthKitUpdateByPromptingUserForAccount:(id)arg1 options:(id)arg2;
- (id)_performAuthKitUpdateSilentlyForAccount:(id)arg1 options:(id)arg2;
- (id)_performAuthKitUpdateUsingRawPasswordForAccount:(id)arg1 options:(id)arg2;
- (id)_performAuthKitUpdateUsingSecondaryPasswordForAccount:(id)arg1 options:(id)arg2;
- (id)account;
- (id)accountStore;
- (bool)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (id)initWithAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3;
- (id)initWithAccount:(id)arg1 options:(id)arg2;
- (id)options;
- (id)performAuthKitUpdate;
- (void)setAccount:(id)arg1;
- (void)setAccountStore:(id)arg1;
- (void)setOptions:(id)arg1;

@end
