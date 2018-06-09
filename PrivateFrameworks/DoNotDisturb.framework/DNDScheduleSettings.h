/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

@interface DNDScheduleSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    unsigned long long  _bedtimeBehaviorEnabledSetting;
    unsigned long long  _scheduleEnabledSetting;
    DNDScheduleTimePeriod * _timePeriod;
}

@property (nonatomic, readonly) unsigned long long bedtimeBehaviorEnabledSetting;
@property (nonatomic, readonly) unsigned long long scheduleEnabledSetting;
@property (nonatomic, readonly, copy) DNDScheduleTimePeriod *timePeriod;

// Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithScheduleEnabledSetting:(unsigned long long)arg1 timePeriod:(id)arg2 bedtimeBehaviorEnabledSetting:(unsigned long long)arg3;
- (id)_initWithSettings:(id)arg1;
- (unsigned long long)bedtimeBehaviorEnabledSetting;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)scheduleEnabledSetting;
- (id)timePeriod;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

+ (id)settingsForRecord:(id)arg1;

- (id)makeRecordWithUpdateDate:(id)arg1;

@end
