/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BYManagedAppleIDBootstrap : NSObject <AKAppleIDAuthenticationDelegate> {
    AKAppleIDAuthenticationContext * _authContext;
    UMUserSwitchContext * _userSwitchContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool passwordChangeFlowNeedsToRun;
@property (nonatomic, readonly, copy) NSString *shortLivedToken;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UMUserSwitchContext *userSwitchContext;

+ (id)delegateBundleIDsForManagedAccount;
+ (bool)isMultiUser;
+ (bool)isSettingUpMultiUser;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_createAppleAccountWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 completion:(id /* block */)arg4;
- (id)_languageConfigurationDictionary;
- (void)_runSilentLoginUpgradeWithCompletion:(id /* block */)arg1;
- (void)_upgradeShortLivedTokenCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)ingestManagedBuddyData;
- (id)init;
- (bool)isLoginUser;
- (bool)needsToUpgradeShortLivedToken;
- (bool)passwordChangeFlowNeedsToRun;
- (void)postUserSwitchContextHasBeenUsed;
- (void)recoverEMCSWithCompletion:(id /* block */)arg1;
- (void)runSilentLoginUpgradeIfNeededWithCompletion:(id /* block */)arg1;
- (id)shortLivedToken;
- (void)switchToLoginWindowDueToError:(id)arg1 completion:(id /* block */)arg2;
- (id)userSwitchContext;
- (void)userSwitchContextHasBeenUsed;
- (void)writeAccountConfigurationIfNeededWithCompletion:(id /* block */)arg1;

@end
