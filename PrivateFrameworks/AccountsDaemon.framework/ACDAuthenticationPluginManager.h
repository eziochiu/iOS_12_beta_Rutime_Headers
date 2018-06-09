/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDAuthenticationPluginManager : NSObject {
    NSObject<OS_dispatch_queue> * _authenticationPluginQueue;
    NSMutableDictionary * _authenticationPluginsByType;
    ACDQueueDictionary * _discoveryHandlerQueues;
    NSLock * _discoveryHandlersLock;
    NSMutableSet * _keysForRateExceededBugSent;
    ACDQueueDictionary * _renewalHandlerQueues;
    NSLock * _renewalHandlersLock;
    ACRateLimiter * _renewalRateLimiter;
    ACDQueueDictionary * _verificationHandlerQueues;
    NSLock * _verificationHandlersLock;
}

@property (retain) ACRateLimiter *renewalRateLimiter;

- (void).cxx_destruct;
- (id)_authCapableParentAccountForAccount:(id)arg1;
- (id)_authenticationTypeForAccount:(id)arg1;
- (id)_descriptionForRenewalResult:(long long)arg1;
- (void)_handleDiscoveryCompletionResult:(id)arg1 forAccount:(id)arg2 discoveryID:(id)arg3 accountStore:(id)arg4 shouldSave:(bool)arg5 error:(id)arg6;
- (void)_handleRenewalCompletionResult:(long long)arg1 forAccount:(id)arg2 renewalID:(id)arg3 accountStore:(id)arg4 error:(id)arg5;
- (void)_handleVerificationCompletionForAccount:(id)arg1 verifiedAccount:(id)arg2 error:(id)arg3 store:(id)arg4 shouldSave:(bool)arg5;
- (id)_pluginForAuthenticationType:(id)arg1;
- (id)_sanitizeError:(id)arg1;
- (id)_unsanitizeOptionsDictionary:(id)arg1;
- (void)credentialForAccount:(id)arg1 client:(id)arg2 store:(id)arg3 handler:(id /* block */)arg4;
- (void)discoverPropertiesForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (id)init;
- (bool)isPushSupportedForAccount:(id)arg1;
- (void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (id)renewalRateLimiter;
- (void)setRenewalRateLimiter:(id)arg1;
- (void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 handler:(id /* block */)arg4;

@end
