/* made by EzioChiu.
 */

@protocol AKAppleIDAuthenticationClientProtocol <AKAnisetteProvisioningClientProtocol>

@required

- (void)dismissBasicLoginUIForContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AKAppleIDAuthenticationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)dismissKeepUsingUIForContext:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: AKAppleIDAuthenticationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)dismissNativeRecoveryUIForContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AKAppleIDAuthenticationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)dismissSecondFactorUIForContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AKAppleIDAuthenticationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)dismissServerProvidedUIForContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AKAppleIDAuthenticationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)presentBasicLoginUIForContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 10: AKAppleIDAuthenticationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSDictionary *, NSError *, void*
- (void)presentKeepUsingUIForContext:(void *)arg1 appleID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: AKAppleIDAuthenticationContext *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)presentLoginAlertForContext:(void *)arg1 withError:(void *)arg2 title:(void *)arg3 message:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 13: AKAppleIDAuthenticationContext *, NSError *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSDictionary *, NSError *, void*
- (void)presentNativeRecoveryUIForContext:(void *)arg1 recoveryContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: AKAppleIDAuthenticationContext *, AKAccountRecoveryContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)presentSecondFactorAlertForContext:(void *)arg1 withError:(void *)arg2 title:(void *)arg3 message:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: AKAppleIDAuthenticationContext *, NSError *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)presentSecondFactorUIForContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AKAppleIDAuthenticationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)presentServerProvidedUIForContext:(void *)arg1 withConfiguration:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: AKAppleIDAuthenticationContext *, AKServerRequestConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSHTTPURLResponse *, NSDictionary *, NSError *, void*
- (void)registerSurrogateForContext:(void *)arg1 identifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: AKAppleIDAuthenticationContext *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)shouldContinueWithAuthenticationResults:(void *)arg1 error:(void *)arg2 forContextID:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSDictionary *, NSError *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSDictionary *, void*

@end
