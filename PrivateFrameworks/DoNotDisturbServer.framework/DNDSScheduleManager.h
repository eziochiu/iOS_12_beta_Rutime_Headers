/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSScheduleManager : NSObject <DNDSModeAssertionProvider, DNDSModeAssertionTransformer> {
    NSDateInterval * _assertionDateInterval;
    NSUUID * _assertionUUID;
    BBBehaviorOverride * _behaviorOverride;
    <DNDSScheduleManagerDataSource> * _dataSource;
    <DNDSScheduleManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    BBSettingsGateway * _settingsGateway;
}

@property (nonatomic) <DNDSScheduleManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDSScheduleManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_handleBehaviorOverrideUpdate:(id)arg1;
- (void)_queue_handleBehaviorOverrideUpdate:(id)arg1;
- (id)_scheduleAssertion;
- (id)_scheduleAssertionDateInterval;
- (id)allModeAssertionsWithError:(id*)arg1;
- (id)assertionWithUUID:(id)arg1 error:(id*)arg2;
- (id)dataSource;
- (id)delegate;
- (id)init;
- (void)invalidateAllModeAssertionsTakenBeforeDate:(id)arg1 forReason:(unsigned long long)arg2;
- (void)resume;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)transformedLifetimeForModeAssersion:(id)arg1;
- (id)transformedModeIdentifierForModeAssertion:(id)arg1;

@end
