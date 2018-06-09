/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHealthKitControlTaskClient : NSObject <_HKXPCExportable> {
    HKHealthStore * _healthStore;
    NSUUID * _identifier;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)serverInterface;

- (void).cxx_destruct;
- (void)condensableWorkoutsWithCompletion:(id /* block */)arg1;
- (void)condenseWorkoutWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)condenseWorkoutsForReason:(long long)arg1 workoutBatchLimit:(long long)arg2 completion:(id /* block */)arg3;
- (void)condensedWorkoutsWithCompletion:(id /* block */)arg1;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)initWithHealthStore:(id)arg1;
- (void)invalidate;
- (id)remoteInterface;

@end
