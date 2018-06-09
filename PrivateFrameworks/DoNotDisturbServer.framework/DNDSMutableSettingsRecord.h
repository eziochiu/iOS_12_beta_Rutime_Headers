/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSMutableSettingsRecord : DNDSSettingsRecord

@property (nonatomic, copy) DNDSBehaviorSettingsRecord *behaviorSettings;
@property (nonatomic, copy) DNDSBypassSettingsRecord *bypassSettings;
@property (nonatomic, copy) DNDSScheduleSettingsRecord *scheduleSettings;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBehaviorSettings:(id)arg1;
- (void)setBypassSettings:(id)arg1;
- (void)setScheduleSettings:(id)arg1;

@end
