/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSStoreAuthenticationNotificationOperation : VSAsyncOperation {
    VSAuthenticationBulletinOperation * _authenticationBulletinOperation;
    VSIdentityProvider * _identityProvider;
    NSURL * _logoCacheURL;
}

@property (nonatomic, retain) VSAuthenticationBulletinOperation *authenticationBulletinOperation;
@property (nonatomic, readonly, copy) VSIdentityProvider *identityProvider;
@property (nonatomic, copy) NSURL *logoCacheURL;

- (void).cxx_destruct;
- (id)authenticationBulletinOperation;
- (void)cancel;
- (void)executionDidBegin;
- (id)identityProvider;
- (id)init;
- (id)initWithIdentityProvider:(id)arg1;
- (id)logoCacheURL;
- (void)setAuthenticationBulletinOperation:(id)arg1;
- (void)setLogoCacheURL:(id)arg1;

@end
