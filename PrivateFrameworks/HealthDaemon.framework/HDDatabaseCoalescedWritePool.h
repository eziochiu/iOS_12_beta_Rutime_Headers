/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDatabaseCoalescedWritePool : NSObject {
    NSObject<OS_os_log> * _loggingCategory;
    NSString * _name;
    NSLock * _pendingWriteLock;
    _HKDelayedOperation * _pendingWriteOperation;
    NSMutableArray * _pendingWriteQueue;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

@property (nonatomic, readonly) HDProfile *profile;

- (void).cxx_destruct;
- (bool)_performPendingWriteRecords:(id)arg1 transaction:(id)arg2 accessibilityError:(id)arg3 error:(id*)arg4;
- (bool)_queue_performPendingWriteOperationsWithError:(id*)arg1;
- (void)flushPendingWriteQueueWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithProfile:(id)arg1 name:(id)arg2 loggingCategory:(id)arg3;
- (void)performWriteWithMaximumLatency:(double)arg1 block:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)profile;

@end
