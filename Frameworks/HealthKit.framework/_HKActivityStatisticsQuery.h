/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKActivityStatisticsQuery : HKQuery <HKActivityStatisticsQueryClientInterface> {
    bool  _deliveredInitial;
    NSDate * _endDate;
    NSDateComponents * _exerciseIntervalComponents;
    id /* block */  _initialResultsHandler;
    NSDateComponents * _moveIntervalComponents;
    NSDate * _startDate;
    id /* block */  _updateHandler;
    double  _updateInterval;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ initialResultsHandler;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateHandler;
@property (getter=_updateInterval, setter=_setUpdateInterval:, nonatomic) double updateInterval;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)_setUpdateInterval:(double)arg1;
- (double)_updateInterval;
- (void)_validateIntervalComponents:(id)arg1;
- (void)client_deliverActivityMoveStatistics:(id)arg1 exerciseStatistics:(id)arg2 standHoursInfo:(id)arg3 workouts:(id)arg4 query:(id)arg5;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 moveIntervalComponents:(id)arg3 exerciseIntervalComponents:(id)arg4 initialResultsHandler:(id /* block */)arg5;
- (id /* block */)initialResultsHandler;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (void)setInitialResultsHandler:(id /* block */)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (id /* block */)updateHandler;

@end
