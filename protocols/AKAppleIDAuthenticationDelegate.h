/* made by EzioChiu.
 */

@protocol AKAppleIDAuthenticationDelegate <NSObject>

@optional

- (bool)authenticationController:(AKAppleIDAuthenticationController *)arg1 shouldContinueWithAuthenticationResults:(NSMutableDictionary *)arg2 error:(NSError *)arg3 forContext:(AKAppleIDAuthenticationContext *)arg4;
- (void)authenticationController:(void *)arg1 shouldContinueWithAuthenticationResults:(void *)arg2 error:(void *)arg3 forContext:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: AKAppleIDAuthenticationController *, NSMutableDictionary *, NSError *, AKAppleIDAuthenticationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
