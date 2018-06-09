/* made by EzioChiu.
 */

@protocol AKAppleIDAuthenticationUIProvider <AKAppleIDAuthenticationLimitedUIProvider, AKAppleIDServerAuthenticationUIProvider>

@required

- (void)dismissNativeRecoveryUIWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)presentNativeRecoveryUIWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AKAccountRecoveryContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@optional

- (void)dismissKeepUsingUIWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)presentKeepUsingUIForAppleID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
