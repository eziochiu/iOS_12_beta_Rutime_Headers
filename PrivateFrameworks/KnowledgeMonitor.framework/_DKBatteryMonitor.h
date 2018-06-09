/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKBatteryMonitor : _DKMonitor {
    unsigned int  _batteryNotification;
    NSObject<OS_os_log> * _log;
    struct IONotificationPort { } * _notifyPort;
    unsigned int  _powerService;
    NSDictionary * _previousBatteryState;
    double  _previousPercentage;
}

@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) NSDictionary *previousBatteryState;
@property (nonatomic) double previousPercentage;

+ (id)_eventWithBatteryPercentage:(double)arg1;
+ (id)entitlements;
+ (id)eventStream;
+ (void)setCurrentBatteryPercentage:(double)arg1;

- (void).cxx_destruct;
- (void)_handleBatteryNotification;
- (bool)adapterType:(id)arg1 differsFrom:(id)arg2;
- (double)batteryPercentageFromPowerSourceDictionary:(id)arg1;
- (double)currentBatteryPercentage;
- (bool)externalConnected:(id)arg1 differsFrom:(id)arg2;
- (bool)fullyCharged:(id)arg1 differsFrom:(id)arg2;
- (id)getBatteryProperties;
- (bool)isCharging:(id)arg1 differsFrom:(id)arg2;
- (id)log;
- (bool)newBatteryState:(id)arg1 differsSignificantlyFromState:(id)arg2;
- (bool)percentage:(id)arg1 differsFrom:(id)arg2;
- (id)previousBatteryState;
- (double)previousPercentage;
- (void)setLog:(id)arg1;
- (void)setPreviousBatteryState:(id)arg1;
- (void)setPreviousPercentage:(double)arg1;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (bool)temperature:(id)arg1 differsFrom:(id)arg2;
- (void)updateBatteryStateDictionary:(id)arg1;
- (bool)voltage:(id)arg1 differsFrom:(id)arg2;

@end
