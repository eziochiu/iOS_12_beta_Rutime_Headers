/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHeartRateService : HDHealthService {
    bool  _deliverData;
    long long  _preferredSensorLocation;
}

@property (nonatomic) long long preferredSensorLocation;

+ (long long)serviceType;
+ (id)serviceUUID;

- (bool)deliverData;
- (void)handleBodyLocation:(id)arg1;
- (void)handleHeartRate:(id)arg1;
- (id)initWithServiceManager:(id)arg1 peripheral:(id)arg2 advertisementData:(id)arg3 profile:(id)arg4;
- (void)performOperation:(id)arg1 onPeripheral:(id)arg2 withParameters:(id)arg3 completion:(id /* block */)arg4;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4;
- (long long)preferredSensorLocation;
- (void)resetEnergyExpendedOnPeripheral:(id)arg1 completion:(id /* block */)arg2;
- (void)setDeliverData:(bool)arg1;
- (void)setPreferredSensorLocation:(long long)arg1;
- (bool)supportsOperation:(id)arg1;

@end
