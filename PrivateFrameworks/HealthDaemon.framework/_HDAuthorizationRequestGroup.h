/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDAuthorizationRequestGroup : NSObject {
    NSString * _bundleIdentifier;
    NSMutableArray * _completions;
    bool  _inTransaction;
    id /* block */  _promptHandler;
    NSUUID * _promptSessionIdentifier;
    NSMutableArray * _requests;
    NSObject<OS_dispatch_source> * _sessionTimeoutSource;
    NSMutableSet * _typesToRead;
    NSMutableSet * _typesToWrite;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, retain) NSMutableArray *completions;
@property (getter=isInTransaction, nonatomic) bool inTransaction;
@property (nonatomic, copy) id /* block */ promptHandler;
@property (nonatomic, readonly) NSUUID *promptSessionIdentifier;
@property (nonatomic, readonly) unsigned long long requestCount;
@property (nonatomic, retain) NSMutableArray *requests;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *sessionTimeoutSource;
@property (nonatomic, readonly, copy) NSSet *typesToRead;
@property (nonatomic, readonly, copy) NSSet *typesToWrite;

- (void).cxx_destruct;
- (void)_cancelTimeoutSource;
- (void)addCompletion:(id /* block */)arg1;
- (void)addRequest:(id)arg1;
- (void)beginTransaction;
- (id)bundleIdentifier;
- (void)cancelRequestsWithIdentifiers:(id)arg1 error:(id)arg2;
- (id)completions;
- (id)description;
- (void)finishRequestsWithError:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (bool)isInTransaction;
- (id /* block */)promptHandler;
- (bool)promptIfNecessaryWithTimeout:(double)arg1 completion:(id /* block */)arg2;
- (id)promptSessionIdentifier;
- (unsigned long long)requestCount;
- (id)requests;
- (id)sessionTimeoutSource;
- (void)setCompletions:(id)arg1;
- (void)setInTransaction:(bool)arg1;
- (void)setPromptHandler:(id /* block */)arg1;
- (void)setRequests:(id)arg1;
- (void)setSessionTimeoutSource:(id)arg1;
- (id)typesToRead;
- (id)typesToWrite;

@end
