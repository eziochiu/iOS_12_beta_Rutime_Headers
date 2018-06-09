/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActiveQuantityDataAggregator : HDActiveDataAggregator {
    HKQuantityType * _quantityType;
}

@property (nonatomic, readonly, copy) HKQuantityType *quantityType;

- (void).cxx_destruct;
- (id)aggregateSensorData:(id)arg1 collector:(id)arg2 device:(id)arg3 requestedAggregationDate:(id)arg4 mode:(long long)arg5 error:(id*)arg6;
- (id)description;
- (id)initForQuantityType:(id)arg1 dataCollectionManager:(id)arg2;
- (id)objectType;
- (id)quantityType;
- (Class)sensorDatumClass;

@end
