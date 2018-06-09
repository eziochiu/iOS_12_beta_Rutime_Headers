/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCoalescedAsynchronousWriter : NSObject {
    id /* block */  _dataSourceBlock;
    NSObject<OS_dispatch_queue> * _dataSourceQueue;
    <WBSCoalescedAsynchronousWriterDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _diskAccessQueue;
    bool  _done;
    NSURL * _fileURL;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSString * _name;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > { 
        struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > { 
            struct SuddenTerminationDisabler {} *__value_; 
        } __ptr_; 
    }  _suddenTerminationDisabler;
    NSObject<OS_dispatch_source> * _timer;
    double  _writeDelayInterval;
    NSObject<OS_dispatch_group> * _writeGroup;
    id /* block */  _writerBlock;
}

@property (nonatomic) <WBSCoalescedAsynchronousWriterDelegate> *delegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_cancelPendingWriteSynchronouslyLeavingSuddenTerminationIntact;
- (id)_dataFromDataSource;
- (id)_initWithName:(id)arg1 fileURL:(id)arg2 writerBlock:(id /* block */)arg3 dataSourceQueue:(id)arg4 dataSourceBlock:(id /* block */)arg5 writeDelayInterval:(double)arg6;
- (void)_invalidateTimer;
- (void)_scheduleTimer;
- (void)_timerFired;
- (void)_waitForWriteCompletion;
- (void)_writeData:(id)arg1;
- (void)_writeDataAsynchronously:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelPendingWriteSynchronously;
- (void)completePendingWriteSynchronously;
- (void)dealloc;
- (id)delegate;
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceBlock:(id /* block */)arg3;
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceBlock:(id /* block */)arg3 writeDelayInterval:(double)arg4;
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceQueue:(id)arg3 dataSourceBlock:(id /* block */)arg4;
- (id)initWithName:(id)arg1 writerBlock:(id /* block */)arg2 dataSourceBlock:(id /* block */)arg3;
- (id)initWithName:(id)arg1 writerBlock:(id /* block */)arg2 dataSourceQueue:(id)arg3 dataSourceBlock:(id /* block */)arg4;
- (void)performScheduledWriteSynchronously;
- (void)scheduleWrite;
- (void)setDelegate:(id)arg1;
- (void)startScheduledWriteNow;
- (void)startScheduledWriteNowWithCompletionHandler:(id /* block */)arg1;

@end
