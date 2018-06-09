/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAAbsintheSigner : NSObject {
    double  _cacheTimeout;
    AAAbsintheSignerContextCache * _contextCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _contextLock;
    NSObject<OS_dispatch_queue> * _contextQueue;
    AAURLSession * _session;
}

@property (nonatomic, readonly) double cacheTimeout;
@property (nonatomic, retain) AAURLSession *session;

+ (id /* block */)_contextCreationBlock;
+ (void)_setContextCreationBlock:(id /* block */)arg1;
+ (id)sharedSigner;

- (void).cxx_destruct;
- (id)_contextLock_contextInvalidatingIfNecessary;
- (void)_contextLock_setContext:(id)arg1;
- (void)_contextQueue_contextWithCompletion:(id /* block */)arg1;
- (void)_contextWithCompletion:(id /* block */)arg1;
- (void)_fetchCertificateDataWithCompletion:(id /* block */)arg1;
- (void)_fetchSessionInfoWithRequestInfo:(id)arg1 completion:(id /* block */)arg2;
- (double)cacheTimeout;
- (id)init;
- (id)initWithCacheTimeout:(double)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (void)signatureForData:(id)arg1 completion:(id /* block */)arg2;

@end
