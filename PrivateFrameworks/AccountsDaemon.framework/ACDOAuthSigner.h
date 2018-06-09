/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDOAuthSigner : NSObject <ACDOAuthSignerProtocol> {
    ACDClientAuthorizationManager * _authorizationManager;
    ACDClient * _client;
    ACDDatabase * _database;
    bool  _shouldIncludeAppIdInRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_permissionGrantedForBundleID:(id)arg1 onAccountType:(id)arg2;
- (id)_signedRequest:(id)arg1 withAccountObject:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4;
- (id)ckForAccountType:(id)arg1;
- (id)csForAccountType:(id)arg1;
- (id)initWithClient:(id)arg1;
- (void)setClientBundleID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)setShouldIncludeAppIdInRequest:(bool)arg1;
- (void)signURLRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4 handler:(id /* block */)arg5;
- (void)signURLRequest:(id)arg1 withAccount:(id)arg2 callingPID:(id)arg3 timestamp:(id)arg4 handler:(id /* block */)arg5;
- (id)signedRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4;

@end
