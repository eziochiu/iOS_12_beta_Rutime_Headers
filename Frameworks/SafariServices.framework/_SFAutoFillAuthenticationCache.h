/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFAutoFillAuthenticationCache : NSObject {
    NSMutableDictionary * _domainsFailedToAuthenticateDueToTimeout;
    NSMutableSet * _domainsSucceededToAuthenticateForAutoFill;
}

- (void).cxx_destruct;
- (bool)authenticationShouldFailOnDomain:(id)arg1;
- (bool)authenticationShouldSucceedOnDomain:(id)arg1;
- (void)clearAllDomains;
- (void)didFinishAuthenticationOnDomain:(id)arg1 withSuccess:(bool)arg2 error:(id)arg3;
- (id)init;
- (bool)timeoutCausedFailureOnDomain:(id)arg1;

@end
