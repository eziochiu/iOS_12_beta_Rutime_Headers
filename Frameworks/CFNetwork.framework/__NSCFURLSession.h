/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLSession : NSURLSession {
    NSMutableDictionary * _altSvc;
    NSDictionary * _atsState;
    NSMutableDictionary * _coalescing;
    id /* block */  _connBlock;
    <NSURLSessionDelegate> * _delegate;
    NSOperationQueue * _delegateQueue;
    NSMutableSet * _h2BlacklistedHosts;
    bool  _invalid;
    bool  _isSharedSession;
    NSURLSessionConfiguration * _local_immutable_configuration;
    NSString * _sessionDescription;
    NSString * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSDictionary *delegateOptions;

- (id)_altSvc;
- (id)_atsState;
- (id)_coalescing;
- (id /* block */)_connBlock;
- (id)_h2BlacklistedHosts;
- (bool)_isSharedSession;
- (id)_local_immutable_configuration;
- (id)_uuid;
- (void)dealloc;
- (id)delegate;
- (id)delegateOptions;
- (id)delegateQueue;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (bool)invalid;
- (id)sessionDescription;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setInvalid:(bool)arg1;
- (void)setSessionDescription:(id)arg1;
- (void)set_altSvc:(id)arg1;
- (void)set_atsState:(id)arg1;
- (void)set_coalescing:(id)arg1;
- (void)set_connBlock:(id /* block */)arg1;
- (void)set_h2BlacklistedHosts:(id)arg1;
- (void)set_isSharedSession:(bool)arg1;
- (void)set_local_immutable_configuration:(id)arg1;
- (void)set_uuid:(id)arg1;
- (id)workQueue;

@end