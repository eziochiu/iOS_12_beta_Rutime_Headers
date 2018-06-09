/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSRequest : NSObject <SSXPCCoding> {
    NSObject<OS_dispatch_source> * _backgroundTaskExpirationTimer;
    long long  _backgroundTaskIdentifier;
    long long  _callState;
    bool  _cancelAfterTaskExpiration;
    id /* block */  _completionBlock;
    <SSRequestDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    SSXPCConnection * _requestConnection;
    SSXPCConnection * _responseConnection;
    BKSProcessAssertion * _taskAssertion;
    bool  _taskAssertionTaken;
    bool  _usesTaskCompletionAssertions;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SSRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldCancelAfterTaskExpiration;
@property (readonly) Class superclass;
@property (nonatomic) bool usesTaskCompletionAssertions;

+ (bool)_allowMultipleCallbacks;

- (void).cxx_destruct;
- (void)__beginBackgroundTask;
- (void)__endBackgroundTask;
- (void)_beginBackgroundTask;
- (void)_cancelBackgroundTaskExpirationTimer;
- (void)_endBackgroundTask;
- (void)_expireBackgroundTask;
- (id)_initSSRequest;
- (void)_shutdownRequest;
- (void)_shutdownRequestWithMessageID:(long long)arg1;
- (void)_startWithMessageID:(long long)arg1 messageBlock:(id /* block */)arg2;
- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (void)disconnect;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setShouldCancelAfterTaskExpiration:(bool)arg1;
- (void)setUsesTaskCompletionAssertions:(bool)arg1;
- (bool)shouldCancelAfterTaskExpiration;
- (bool)start;
- (void)startWithCompletionBlock:(id /* block */)arg1;
- (bool)usesTaskCompletionAssertions;

@end
