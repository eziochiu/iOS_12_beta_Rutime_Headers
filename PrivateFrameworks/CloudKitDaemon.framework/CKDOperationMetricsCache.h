/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDOperationMetricsCache : CKSQLite {
    NSObject<OS_dispatch_queue> * _cacheQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *cacheQueue;

+ (id)dbFileName;
+ (id)sharedCache;

- (void).cxx_destruct;
- (void)addOperationCombinedMetrics:(id)arg1 forOperationID:(id)arg2 operationType:(long long)arg3 operationGroupID:(id)arg4 operationGroupName:(id)arg5 operationGroupQuantity:(unsigned long long)arg6 operationQualityOfService:(long long)arg7 appContainerTuple:(id)arg8;
- (id)cacheQueue;
- (void)flushMetricsToPowerLog;
- (id)init;
- (void)setCacheQueue:(id)arg1;

@end
