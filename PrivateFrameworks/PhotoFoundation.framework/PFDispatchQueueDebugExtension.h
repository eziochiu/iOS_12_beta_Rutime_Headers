/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFDispatchQueueDebugExtension : PFDispatchQueueStatisticsExtension {
    NSMutableDictionary * _allBlockInfoByCallSite;
    unsigned long long  _count;
    PFSerialQueue * _serializer;
}

- (void).cxx_destruct;
- (id)_queueUsageByEnqueueSiteDescription;
- (id)_queueUsageByExecutionTimeDescription;
- (Class)blockInfoClass;
- (id)description;
- (id)init;
- (void)installOnQueue:(id)arg1;
- (id)queue:(id)arg1 receivedDispatchAfter:(id /* block */)arg2;
- (id)queue:(id)arg1 receivedDispatchAsync:(id /* block */)arg2;
- (id)queue:(id)arg1 receivedDispatchBarrierAsync:(id /* block */)arg2;
- (id)queue:(id)arg1 receivedDispatchBarrierSync:(id /* block */)arg2;
- (id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 async:(id /* block */)arg3;
- (id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 notify:(id /* block */)arg3;
- (id)queue:(id)arg1 receivedDispatchSync:(id /* block */)arg2;
- (id)recordBlockInfo:(id)arg1;
- (void)showQueueUsageByEnqueueSite;
- (void)showQueueUsageByExecutionTime;

@end
