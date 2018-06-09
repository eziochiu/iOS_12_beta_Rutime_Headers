/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AARemoteServer : NSObject {
    AAURLSession * _absintheSession;
    AARemoteServerConfigurationCache * _configurationCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _configurationLock;
    NSObject<OS_dispatch_queue> * _configurationQueue;
    AAURLSession * _session;
}

+ (id)sharedServer;

- (void).cxx_destruct;
- (id)_bodyDictionaryWithProtocolVersion:(id)arg1;
- (void)_configurationAndResponseWithCompletion:(id /* block */)arg1;
- (id)_configurationCacheInvalidatingIfNecessary;
- (id)_configurationLock_configurationCacheInvalidatingIfNecessary;
- (void)_fetchConfigurationAndResponseWithCompletion:(id /* block */)arg1;
- (id)_newURLRequestWithURLString:(id)arg1;
- (id)_redactedBodyStringWithPropertyList:(id)arg1;
- (id)_redactedHeadersFromHTTPHeaders:(id)arg1;
- (void)_setConfigurationCache:(id)arg1;
- (void)_startRequest:(id)arg1 responseClass:(Class)arg2 mainThread:(bool)arg3 completion:(id /* block */)arg4;
- (void)authenticateAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)configurationWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)loginDelegates:(id)arg1 parameters:(id)arg2 completion:(id /* block */)arg3;
- (void)registerAccount:(id)arg1 withHSA:(bool)arg2 completion:(id /* block */)arg3;
- (void)registerAccount:(id)arg1 withHSA:(bool)arg2 usingCookieHeaders:(id)arg3 completion:(id /* block */)arg4;

@end
