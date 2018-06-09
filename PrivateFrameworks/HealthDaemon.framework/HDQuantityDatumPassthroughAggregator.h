/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDQuantityDatumPassthroughAggregator : HDPassiveDataAggregator

+ (id)quantityTypeIdentifier;

- (id)dataObjectsFromSensorDatum:(id)arg1 error:(id*)arg2;
- (id)objectType;
- (Class)sensorDatumClass;

@end
