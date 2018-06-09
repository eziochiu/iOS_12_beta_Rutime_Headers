/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface VECSchedulingRequest : NSObject {
    bool  _cancelled;
    id /* block */  _dellocHandler;
    NSObject<OS_dispatch_group> * _doneOrCancelGroup;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    bool  _queued;
    int  _requestID;
    id /* block */  _taskHandler;
}

@property (nonatomic, readonly) id /* block */ dellocHandler;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *doneOrCancelGroup;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly) int requestID;
@property (nonatomic, readonly) id /* block */ taskHandler;

- (void).cxx_destruct;
- (void)dealloc;
- (id /* block */)dellocHandler;
- (id)description;
- (id)doneOrCancelGroup;
- (id)initWithDoneOrCancelGroup:(id)arg1 taskHandler:(id /* block */)arg2 dellocHandler:(id /* block */)arg3;
- (bool)isCancelled;
- (void)markAsCompletedOrCancelled:(bool)arg1;
- (void)markAsQueued;
- (int)requestID;
- (id /* block */)taskHandler;

@end
