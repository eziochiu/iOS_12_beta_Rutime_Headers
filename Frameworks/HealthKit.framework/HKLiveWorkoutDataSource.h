/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKLiveWorkoutDataSource : NSObject <_HKXPCExportable> {
    HKHealthStore * _healthStore;
    NSUUID * _identifier;
    NSMutableDictionary * _mutableFiltersBySampleType;
    NSMutableSet * _mutableSampleTypesToCollect;
    HKTaskServerProxyProvider * _proxyProvider;
    NSObject<OS_dispatch_queue> * _queue;
    HKWorkoutConfiguration * _workoutConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, retain) NSMutableDictionary *mutableFiltersBySampleType;
@property (nonatomic, retain) NSMutableSet *mutableSampleTypesToCollect;
@property (nonatomic, retain) HKTaskServerProxyProvider *proxyProvider;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (readonly, copy) NSSet *typesToCollect;

+ (id)clientInterface;
+ (id)defaultConfigurationWithWorkoutConfiguration:(id)arg1;
+ (id)serverInterface;

- (void).cxx_destruct;
- (id)_queue_dataSourceConfiguration;
- (void)_startTaskServerIfNeeded;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)disableCollectionForType:(id)arg1;
- (void)enableCollectionForType:(id)arg1 predicate:(id)arg2;
- (id)exportedInterface;
- (id)healthStore;
- (id)identifier;
- (id)initWithHealthStore:(id)arg1 workoutConfiguration:(id)arg2;
- (id)mutableFiltersBySampleType;
- (id)mutableSampleTypesToCollect;
- (id)proxyProvider;
- (id)queue;
- (id)remoteInterface;
- (void)setHealthStore:(id)arg1;
- (void)setMutableFiltersBySampleType:(id)arg1;
- (void)setMutableSampleTypesToCollect:(id)arg1;
- (void)setProxyProvider:(id)arg1;
- (void)setQueue:(id)arg1;
- (id)typesToCollect;

@end
