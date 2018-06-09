/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSScheduleSettingsRecord : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying> {
    NSNumber * _bedtimeBehaviorEnabledSetting;
    NSNumber * _lastUpdatedTimestamp;
    NSNumber * _scheduleEnabledSetting;
    NSNumber * _timePeriodEndTimeHour;
    NSNumber * _timePeriodEndTimeMinute;
    NSNumber * _timePeriodStartTimeHour;
    NSNumber * _timePeriodStartTimeMinute;
}

@property (nonatomic, readonly, copy) NSNumber *bedtimeBehaviorEnabledSetting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *lastUpdatedTimestamp;
@property (nonatomic, readonly, copy) NSNumber *scheduleEnabledSetting;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSNumber *timePeriodEndTimeHour;
@property (nonatomic, readonly, copy) NSNumber *timePeriodEndTimeMinute;
@property (nonatomic, readonly, copy) NSNumber *timePeriodStartTimeHour;
@property (nonatomic, readonly, copy) NSNumber *timePeriodStartTimeMinute;

+ (id)migrateDictionaryRepresentations:(id)arg1 withVersionNumber:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_initWithLastUpdatedTimestamp:(id)arg1 scheduleEnabledSetting:(id)arg2 timePeriodStartTimeHour:(id)arg3 timePeriodStartTimeMinute:(id)arg4 timePeriodEndTimeHour:(id)arg5 timePeriodEndTimeMinute:(id)arg6 bedtimeBehaviorEnabledSetting:(id)arg7;
- (id)_initWithRecord:(id)arg1;
- (id)bedtimeBehaviorEnabledSetting;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastUpdatedTimestamp;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)scheduleEnabledSetting;
- (id)timePeriodEndTimeHour;
- (id)timePeriodEndTimeMinute;
- (id)timePeriodStartTimeHour;
- (id)timePeriodStartTimeMinute;

@end
