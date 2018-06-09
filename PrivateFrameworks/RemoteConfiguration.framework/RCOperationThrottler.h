/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
 */

@interface RCOperationThrottler : NSObject <RCOperationThrottler> {
    NSObject<OS_dispatch_source> * _dispatchSource;
    NSObject<OS_dispatch_group> * _handlerSynchronizationGroup;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _suspended;
}

@property bool suspended;

- (void).cxx_destruct;
- (void)addCompletionForCurrentOperation:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 updateQueue:(id)arg2;
- (void)setSuspended:(bool)arg1;
- (bool)suspended;
- (void)tickle;
- (void)tickleWithCompletion:(id /* block */)arg1;

@end
