/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActiveDataAggregator : HDDataAggregator {
    NSLock * _aggregationLock;
    NSMutableArray * _pendingCollectionBlocks;
    NSMutableDictionary * _unaggregatedDataByCollector;
}

- (void).cxx_destruct;
- (void)_aggregateForAllDevicesForCollector:(id)arg1 date:(id)arg2 mode:(long long)arg3;
- (void)_aggregateForCollector:(id)arg1 device:(id)arg2 requestedAggregationDate:(id)arg3 mode:(long long)arg4;
- (id)aggregateSensorData:(id)arg1 collector:(id)arg2 device:(id)arg3 requestedAggregationDate:(id)arg4 mode:(long long)arg5 error:(id*)arg6;
- (double)aggregationInterval;
- (id)configurationForCollector:(id)arg1;
- (void)dataCollector:(id)arg1 didCollectSensorData:(id)arg2 device:(id)arg3;
- (id)initWithDataCollectionManager:(id)arg1;
- (void)requestAggregationThroughDate:(id)arg1 mode:(long long)arg2 completion:(id /* block */)arg3;
- (Class)sensorDatumClass;

@end
