/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKWorkoutRouteQuery : HKQuery <HKWorkoutRouteQueryClientInterface> {
    id /* block */  _dataHandler;
    HKWorkoutRoute * _series;
}

@property (copy) id /* block */ dataHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)client_deliverWorkoutRouteLocations:(id)arg1 isFinal:(bool)arg2 query:(id)arg3;
- (id /* block */)dataHandler;
- (id)initWithRoute:(id)arg1 dataHandler:(id /* block */)arg2;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)setDataHandler:(id /* block */)arg1;

@end
