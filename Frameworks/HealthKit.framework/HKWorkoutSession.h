/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKWorkoutSession : NSObject <NSSecureCoding, _HKXPCExportable> {
    HKLiveWorkoutBuilder * _associatedWorkoutBuilder;
    NSObject<OS_dispatch_queue> * _clientQueue;
    HKWorkoutSessionTaskConfiguration * _configuration;
    <HKWorkoutSessionDelegate> * _delegate;
    NSDate * _endDate;
    HKHealthStore * _healthStore;
    HKTaskServerProxyProvider * _proxyProvider;
    NSObject<OS_dispatch_queue> * _queue;
    NSDate * _startDate;
    long long  _state;
    <HKWorkoutSessionDelegate> * _strongDelegate;
}

@property (readonly) unsigned long long activityType;
@property (readonly, copy) NSString *debugDescription;
@property <HKWorkoutSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) bool isGymKitSession;
@property (readonly) long long locationType;
@property (readonly) NSDate *startDate;
@property (readonly) long long state;
@property (readonly) Class superclass;
@property (readonly, copy) HKWorkoutConfiguration *workoutConfiguration;

+ (bool)_applicationHasRunningWorkout;
+ (id)clientInterface;
+ (id)serverInterface;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithHealthStore:(id)arg1 taskConfiguration:(id)arg2 error:(id*)arg3;
- (void)_recoverWithCompletion:(id /* block */)arg1;
- (void)_setAssociatedWorkoutBuilder:(id)arg1;
- (void)_setupWithHealthStore:(id)arg1;
- (void)_unitTest_discardAssociatedWorkoutBuilder;
- (unsigned long long)activityType;
- (id)associatedWorkoutBuilder;
- (id)associatedWorkoutBuilderWithDevice:(id)arg1 goalType:(unsigned long long)arg2 goal:(id)arg3;
- (void)client_didChangeToState:(long long)arg1 date:(id)arg2;
- (void)client_didFailWithError:(id)arg1;
- (void)client_didGenerateEvents:(id)arg1;
- (void)client_didUpdateStartDate:(id)arg1 endDate:(id)arg2;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (void)end;
- (id)endDate;
- (void)endWithCompletion:(id /* block */)arg1;
- (id)exportedInterface;
- (id)healthStore;
- (id)identifier;
- (id)initWithActivityType:(unsigned long long)arg1 locationType:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)initWithHealthStore:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (bool)isGymKitSession;
- (long long)locationType;
- (void)pause;
- (void)pauseWithCompletion:(id /* block */)arg1;
- (void)prepare;
- (void)prepareWithCompletion:(id /* block */)arg1;
- (id)remoteInterface;
- (void)resume;
- (void)resumeWithCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)startActivity;
- (void)startActivityWithCompletion:(id /* block */)arg1;
- (id)startDate;
- (long long)state;
- (void)stopActivity;
- (void)stopActivityWithCompletion:(id /* block */)arg1;
- (id)workoutConfiguration;

@end
