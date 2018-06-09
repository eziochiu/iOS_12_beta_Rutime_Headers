/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSMetrics : NSObject {
    <AMSMetricsBagContract> * _bagContract;
    NSObject<OS_dispatch_queue> * _completionQueue;
    NSString * _containerId;
    AMSMetricsDatabase * _database;
    id /* block */  _flushTimerBlock;
    bool  _flushTimerEnabled;
    NSObject<OS_dispatch_queue> * _internalQueue;
    long long  _maxBatchSize;
}

@property (nonatomic, retain) <AMSMetricsBagContract> *bagContract;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, readonly) NSString *containerId;
@property (nonatomic, retain) AMSMetricsDatabase *database;
@property (nonatomic, readonly) long long eventCount;
@property (nonatomic, readonly) double flushInterval;
@property (nonatomic, copy) id /* block */ flushTimerBlock;
@property (nonatomic) bool flushTimerEnabled;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) long long maxBatchSize;

+ (id)_sharedInstance;
+ (id)keepAliveForContainer:(id)arg1;
+ (void)setLastKnownBagContract:(id)arg1;

- (void).cxx_destruct;
- (void)_batchDatabaseEventsWithBlock:(id /* block */)arg1;
- (void)_batchEventArray:(id)arg1 batchBlock:(id /* block */)arg2;
- (void)_flushTimerInvalidate;
- (void)_flushTimerStart;
- (id)_mescalSignatureWithBodyData:(id)arg1 error:(id*)arg2;
- (void)_openDatabaseIfNeeded;
- (void)_postEvents:(id)arg1 reportURL:(id)arg2 error:(id*)arg3;
- (id)_sharedMetricsQueue;
- (bool)_shouldClearEventsDespiteError:(id)arg1 result:(id)arg2;
- (id)bagContract;
- (id)completionQueue;
- (id)containerId;
- (id)database;
- (void)dealloc;
- (void)dropEvents;
- (id)enqueueAsyncEvents:(id)arg1;
- (void)enqueueEvent:(id)arg1;
- (void)enqueueEvents:(id)arg1;
- (long long)eventCount;
- (id)flush;
- (id)flushEvents:(id)arg1;
- (double)flushInterval;
- (id /* block */)flushTimerBlock;
- (bool)flushTimerEnabled;
- (id)initWithContainerId:(id)arg1 bagContract:(id)arg2;
- (id)internalQueue;
- (long long)maxBatchSize;
- (void)setBagContract:(id)arg1;
- (void)setCompletionQueue:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setFlushTimerBlock:(id /* block */)arg1;
- (void)setFlushTimerEnabled:(bool)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setMaxBatchSize:(long long)arg1;

@end
