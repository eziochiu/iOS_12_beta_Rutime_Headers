/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTSyncMonitor : NSObject <MTAgentDiagnosticDelegate, MTAgentNotificationListener> {
    NSMutableArray * _providers;
    bool  _ready;
    <NAScheduler> * _serializer;
    <MTSyncService> * _service;
    MTMetrics * _syncMetrics;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *providers;
@property (nonatomic) bool ready;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic, retain) <MTSyncService> *service;
@property (readonly) Class superclass;
@property (nonatomic, retain) MTMetrics *syncMetrics;

+ (bool)isSyncingEnabledInternally;
+ (bool)syncingSupported;

- (void).cxx_destruct;
- (void)handleNotification:(id)arg1;
- (bool)handlesNotification:(id)arg1;
- (id)initWithSyncService:(id)arg1 syncMetrics:(id)arg2;
- (void)printDiagnostics;
- (id)providers;
- (bool)ready;
- (void)registerSyncStatusProvider:(id)arg1;
- (id)serializer;
- (id)service;
- (void)setProviders:(id)arg1;
- (void)setReady:(bool)arg1;
- (void)setSerializer:(id)arg1;
- (void)setService:(id)arg1;
- (void)setSyncMetrics:(id)arg1;
- (void)startMonitoring;
- (bool)startSyncServiceIfSyncingEnabled;
- (void)syncConfigurationChanged:(id)arg1;
- (id)syncMetrics;
- (bool)syncingEnabled;

@end
