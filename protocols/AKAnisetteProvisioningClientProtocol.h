/* made by EzioChiu.
 */

@protocol AKAnisetteProvisioningClientProtocol <NSObject>

@required

- (void)eraseAnisetteForContext:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: AKAppleIDAuthenticationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)fetchAnisetteDataForContext:(void *)arg1 provisionIfNecessary:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: AKAppleIDAuthenticationContext *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AKAnisetteData *, NSError *, void*
- (void)legacyAnisetteDataForContext:(void *)arg1 DSID:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: AKAppleIDAuthenticationContext *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AKAnisetteData *, NSError *, void*
- (void)provisionAnisetteForContext:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: AKAppleIDAuthenticationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)syncAnisetteForContext:(void *)arg1 withSIMData:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: AKAppleIDAuthenticationContext *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
