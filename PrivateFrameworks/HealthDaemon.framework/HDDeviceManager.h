/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDeviceManager : NSObject {
    HDDatabaseValueCache * _deviceEntitiesByDevice;
    HDDatabaseValueCache * _devicesByPersistentID;
    NSNumber * _noneDeviceID;
    HDProfile * _profile;
}

@property (nonatomic, retain) HDDatabaseValueCache *deviceEntitiesByDevice;
@property (nonatomic, retain) HDDatabaseValueCache *devicesByPersistentID;
@property (copy) NSNumber *noneDeviceID;

- (void).cxx_destruct;
- (id)_noneDevice;
- (id)allDeviceEntitiesWithError:(id*)arg1;
- (id)currentDeviceEntityWithError:(id*)arg1;
- (id)deviceEntitiesByDevice;
- (id)deviceEntitiesForDevice:(id)arg1 error:(id*)arg2;
- (id)deviceEntitiesWithProperty:(id)arg1 matchingValues:(id)arg2 error:(id*)arg3;
- (id)deviceEntityForDevice:(id)arg1 error:(id*)arg2;
- (id)deviceEntityForNoDeviceWithError:(id*)arg1;
- (id)deviceForPersistentID:(id)arg1 error:(id*)arg2;
- (id)devicesByPersistentID;
- (id)devicesWithProperty:(id)arg1 matchingValues:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (id)noneDeviceID;
- (void)setDeviceEntitiesByDevice:(id)arg1;
- (void)setDevicesByPersistentID:(id)arg1;
- (void)setNoneDeviceID:(id)arg1;

@end
