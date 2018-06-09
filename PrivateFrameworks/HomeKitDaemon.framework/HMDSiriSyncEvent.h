/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSiriSyncEvent : HMDLogEvent <HMDAWDLogEvent> {
    unsigned long long  _configurationVersion;
    unsigned long long  _duration;
    unsigned long long  _lastSyncedConfigurationVersion;
    NSArray * _notificationReasons;
    unsigned long long  _serverConfigurationVersion;
}

@property (nonatomic, readonly) unsigned long long configurationVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long lastSyncedConfigurationVersion;
@property (nonatomic, readonly) NSArray *notificationReasons;
@property (nonatomic, readonly) unsigned long long serverConfigurationVersion;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)syncRequestWithStartTime:(unsigned long long)arg1 serverConfigurationVersion:(unsigned long long)arg2 configurationVersion:(unsigned long long)arg3 lastSyncedConfigurationVersion:(unsigned long long)arg4 notificationReasons:(id)arg5;
+ (id)uuid;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (unsigned long long)configurationVersion;
- (unsigned long long)duration;
- (id)initWithStartTime:(unsigned long long)arg1 serverConfigurationVersion:(unsigned long long)arg2 configurationVersion:(unsigned long long)arg3 lastSyncedConfigurationVersion:(unsigned long long)arg4 notificationReasons:(id)arg5;
- (unsigned long long)lastSyncedConfigurationVersion;
- (id)metricForAWD;
- (id)notificationReasons;
- (unsigned long long)serverConfigurationVersion;

@end
