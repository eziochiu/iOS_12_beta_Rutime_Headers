/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKCurrentActivityCacheQuery : HKQuery <HKCurrentActivityCacheQueryClientInterface> {
    NSDateComponents * _statisticsIntervalComponents;
    id /* block */  _updateHandler;
}

@property (nonatomic, copy) id /* block */ updateHandler;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)client_deliverCurrentActivityCache:(id)arg1 moveStatistics:(id)arg2 exerciseStatistics:(id)arg3 standHoursInfo:(id)arg4 queryUUID:(id)arg5;
- (id)initWithUpdateHandler:(id /* block */)arg1 statisticsIntervalComponents:(id)arg2;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (void)setUpdateHandler:(id /* block */)arg1;
- (id /* block */)updateHandler;

@end
