/* made by EzioChiu.
 */

@protocol CoreDAVAccountInfoProvider <NSObject>

@required

- (NSString *)accountID;
- (bool)handleCertificateError:(NSError *)arg1;
- (NSString *)host;
- (NSData *)identityPersist;
- (NSString *)password;
- (long long)port;
- (NSURL *)principalURL;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (NSString *)scheme;
- (NSSet *)serverComplianceClasses;
- (NSString *)serverRoot;
- (bool)shouldFailAllTasks;
- (NSString *)user;
- (NSString *)userAgentHeader;

@optional

- (NSDictionary *)additionalHeaderValues;
- (<CoreDAVClientCertificateInfoProvider> *)clientCertificateInfoProvider;
- (NSString *)clientToken;
- (void)clientTokenRequestedByServer;
- (struct __CFURLStorageSession { }*)copyStorageSession;
- (NSDictionary *)customConnectionProperties;
- (AKAppleIDSession *)getAppleIDSession;
- (bool)handleAuthenticateAgainstProtectionSpace:(NSURLProtectionSpace *)arg1;
- (bool)handleAuthenticateAgainstProtectionSpace:(NSURLProtectionSpace *)arg1 withConnection:(NSURLConnection *)arg2;
- (bool)handleShouldUseCredentialStorage;
- (bool)handleTrustChallenge:(NSURLAuthenticationChallenge *)arg1;
- (bool)handleTrustChallenge:(NSURLAuthenticationChallenge *)arg1 withConnection:(NSURLConnection *)arg2;
- (void)noteFailedNetworkRequest;
- (void)noteFailedNetworkRequestForTask:(CoreDAVTask *)arg1;
- (void)noteFailedProtocolRequest;
- (void)noteFailedProtocolRequestForTask:(CoreDAVTask *)arg1;
- (void)noteHomeSetOnDifferentHost:(NSURL *)arg1;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1 forTask:(CoreDAVTask *)arg2;
- (void)noteTimeSpentInNetworking:(double)arg1;
- (void)noteTimeSpentInNetworking:(double)arg1 forTask:(CoreDAVTask *)arg2;
- (<CoreDAVOAuthInfoProvider> *)oauthInfoProvider;
- (bool)renewCredential;
- (bool)shouldCompressRequests;
- (bool)shouldHandleHTTPCookiesForURL:(NSURL *)arg1;
- (bool)shouldRetryUnauthorizedConnection:(NSURLConnection *)arg1;
- (bool)shouldSendClientInfoHeaderForURL:(NSURL *)arg1;
- (bool)shouldTryRenewingCredential;
- (bool)shouldTurnModalOnBadPassword;
- (bool)shouldUseOpportunisticSockets;
- (void)webLoginRequestedAtURL:(void *)arg1 reasonString:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*

@end
