/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutRouteBuilderServer : HDSeriesBuilderServer <HKWorkoutRouteBuilderServerInterface> {
    HKWorkoutRoute * _route;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKWorkoutRoute *route;
@property (readonly) Class superclass;

+ (id)serverEntitlements;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)_queue_finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(id /* block */)arg3;
- (void)_queue_insertRouteData:(id)arg1 completion:(id /* block */)arg2;
- (bool)_validateRouteData:(id)arg1 error:(out id*)arg2;
- (void)connectionInvalidated;
- (void)createSeriesSampleIfNeeded:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (id)exportedInterface;
- (void)queue_recoverBuilder;
- (id)remoteInterface;
- (void)remote_finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_insertRouteData:(id)arg1 completion:(id /* block */)arg2;
- (id)route;
- (id)seriesSample;
- (void)server_insertRouteData:(id)arg1 completion:(id /* block */)arg2;
- (void)setRoute:(id)arg1;

@end