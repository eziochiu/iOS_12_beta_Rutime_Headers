/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSBaseLifetimeMonitor : NSObject <DNDSLifetimeMonitor> {
    NSArray * _activeLifetimeAssertionUUIDs;
    <DNDSLifetimeMonitorDataSource> * _dataSource;
    <DNDSLifetimeMonitorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, copy) NSArray *activeLifetimeAssertionUUIDs;
@property (nonatomic) <DNDSLifetimeMonitorDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDSLifetimeMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (bool)willMonitorLifetime:(id)arg1;

- (void).cxx_destruct;
- (void)_queue_refreshMonitorForDate:(id)arg1;
- (id)activeLifetimeAssertionUUIDs;
- (id)dataSource;
- (id)delegate;
- (id)init;
- (id)queue;
- (void)refreshMonitorForDate:(id)arg1;
- (void)refreshMonitorFromQueueForDate:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)updateForModeAssertionDetails:(id)arg1 date:(id)arg2;

@end
