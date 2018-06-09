/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKHSA2EnrollmentController : NSObject <AAUIDeviceToDeviceEncryptionHelperDelegate> {
    AKAppleIDAuthenticationContext * _authContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)displayableErrorForErrorCode:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_createAuthContext;
- (void)deviceToDeviceEncryptionHelper:(id)arg1 shouldContinueUpgradingUserToHSA2WithCompletion:(id /* block */)arg2;
- (id)init;
- (bool)isHSA2Enabled;
- (void)presentHSA2SetupFlow:(id)arg1 withContext:(long long)arg2 completion:(id /* block */)arg3;

@end
