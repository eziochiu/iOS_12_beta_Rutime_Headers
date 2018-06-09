/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHeartRateDataAggregator : HDDataAggregator

- (id)_metadataForSensorDatum:(id)arg1 collector:(id)arg2;
- (void)_notifyForSensorDatum:(id)arg1 collector:(id)arg2 device:(id)arg3 source:(id)arg4;
- (bool)_shouldRequestActiveCollectionForConfiguration:(id)arg1;
- (id)configurationForCollector:(id)arg1;
- (void)dataCollector:(id)arg1 didCollectSensorData:(id)arg2 device:(id)arg3;
- (void)dealloc;
- (id)initWithDataCollectionManager:(id)arg1;
- (id)objectType;
- (void)workoutManagerStateChanged:(id)arg1;

@end
