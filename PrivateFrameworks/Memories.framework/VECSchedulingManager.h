/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface VECSchedulingManager : NSObject {
    unsigned long long  _batchSize;
    bool  _isFIFO;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSMapTable * _lookupTable;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _runingTaskCount;
    int  _suspendCount;
    NSObject<OS_dispatch_group> * _suspendGroup;
    NSMutableArray * _taskLIFO;
}

+ (id)concurrentScheduler;
+ (id)concurrentSchedulerWithBatchSize:(unsigned long long)arg1;
+ (id)serialScheduler;
+ (id)sharedConcurrentScheduler;
+ (id)sharedSerialScheduler;

- (void).cxx_destruct;
- (unsigned long long)_priorityIndexWithPriority:(unsigned long long)arg1;
- (void)_processNextBatch;
- (void)cancelAllSchedulingRequests;
- (void)cancelSchedulingRequestWithID:(int)arg1;
- (void)deregisterRequest:(int)arg1;
- (id)description;
- (id)init;
- (int)postSchedulingRequest:(id)arg1 withPriority:(unsigned long long)arg2;
- (int)processTaskWithPriority:(unsigned long long)arg1 taskHandler:(id /* block */)arg2;
- (void)registerRequest:(id)arg1;
- (void)resume;
- (void)setIsFIFO:(bool)arg1;
- (void)suspend;

@end
