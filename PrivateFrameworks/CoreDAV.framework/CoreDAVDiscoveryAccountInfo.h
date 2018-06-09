/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVDiscoveryAccountInfo : NSObject <CoreDAVAccountInfoProvider> {
    NSString * _accountID;
    <CoreDAVAccountInfoProvider> * _backingAccountInfoProvider;
    NSError * _error;
    NSString * _host;
    NSData * _identityPersist;
    NSString * _password;
    long long  _port;
    NSURL * _principalURL;
    NSString * _scheme;
    NSSet * _serverComplianceClasses;
    NSDictionary * _serverHeaders;
    NSString * _serverRoot;
    bool  _shouldFailAllTasks;
    bool  _started;
    bool  _success;
    NSString * _user;
    NSString * _userAgentHeader;
}

@property (nonatomic, retain) NSString *accountID;
@property (nonatomic, retain) <CoreDAVAccountInfoProvider> *backingAccountInfoProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *host;
@property (nonatomic, retain) NSData *identityPersist;
@property (nonatomic, retain) NSString *password;
@property (nonatomic) long long port;
@property (nonatomic, retain) NSURL *principalURL;
@property (nonatomic, retain) NSString *scheme;
@property (nonatomic, retain) NSSet *serverComplianceClasses;
@property (nonatomic, retain) NSDictionary *serverHeaders;
@property (nonatomic, retain) NSString *serverRoot;
@property (nonatomic) bool shouldFailAllTasks;
@property (nonatomic) bool started;
@property (nonatomic) bool success;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *user;
@property (nonatomic, retain) NSString *userAgentHeader;

- (void).cxx_destruct;
- (id)accountID;
- (id)additionalHeaderValues;
- (id)backingAccountInfoProvider;
- (id)clientCertificateInfoProvider;
- (id)clientToken;
- (void)clientTokenRequestedByServer;
- (struct __CFURLStorageSession { }*)copyStorageSession;
- (id)description;
- (id)error;
- (id)getAppleIDSession;
- (bool)handleAuthenticateAgainstProtectionSpace:(id)arg1;
- (bool)handleAuthenticateAgainstProtectionSpace:(id)arg1 withConnection:(id)arg2;
- (bool)handleCertificateError:(id)arg1;
- (bool)handleShouldUseCredentialStorage;
- (bool)handleTrustChallenge:(id)arg1;
- (bool)handleTrustChallenge:(id)arg1 withConnection:(id)arg2;
- (id)host;
- (id)identityPersist;
- (id)initWithAccountInfoProvider:(id)arg1;
- (id)oauthInfoProvider;
- (id)password;
- (long long)port;
- (id)principalURL;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id /* block */)arg1;
- (bool)renewCredential;
- (id)scheme;
- (id)serverComplianceClasses;
- (id)serverHeaders;
- (id)serverRoot;
- (void)setAccountID:(id)arg1;
- (void)setBackingAccountInfoProvider:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setIdentityPersist:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPort:(long long)arg1;
- (void)setPrincipalURL:(id)arg1;
- (void)setScheme:(id)arg1;
- (void)setServerComplianceClasses:(id)arg1;
- (void)setServerHeaders:(id)arg1;
- (void)setServerRoot:(id)arg1;
- (void)setShouldFailAllTasks:(bool)arg1;
- (void)setStarted:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (void)setUser:(id)arg1;
- (void)setUserAgentHeader:(id)arg1;
- (bool)shouldFailAllTasks;
- (bool)shouldHandleHTTPCookiesForURL:(id)arg1;
- (bool)shouldRetryUnauthorizedConnection:(id)arg1;
- (bool)shouldSendClientInfoHeaderForURL:(id)arg1;
- (bool)shouldTryRenewingCredential;
- (bool)shouldTurnModalOnBadPassword;
- (bool)shouldUseOpportunisticSockets;
- (bool)started;
- (bool)success;
- (id)url;
- (id)user;
- (id)userAgentHeader;

@end
