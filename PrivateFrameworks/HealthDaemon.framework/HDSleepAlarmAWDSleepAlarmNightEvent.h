/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSleepAlarmAWDSleepAlarmNightEvent : PBCodable <NSCopying> {
    long long  _bedtimeHour;
    long long  _bedtimeMinute;
    long long  _bedtimeToCorrectedBedtimeMinutes;
    long long  _bedtimeToFirstSleepInterruptionMinutes;
    long long  _bedtimeToStartOfLongestSleepIntervalMinutes;
    long long  _correctedBedtimeToThirdPartySleepOnsetMinutes;
    struct { 
        unsigned int bedtimeHour : 1; 
        unsigned int bedtimeMinute : 1; 
        unsigned int bedtimeToCorrectedBedtimeMinutes : 1; 
        unsigned int bedtimeToFirstSleepInterruptionMinutes : 1; 
        unsigned int bedtimeToStartOfLongestSleepIntervalMinutes : 1; 
        unsigned int correctedBedtimeToThirdPartySleepOnsetMinutes : 1; 
        unsigned int percentOfDesiredSleep : 1; 
        unsigned int timestamp : 1; 
        unsigned int wakeupTimeToThirdPartyWakeupTimeMinutes : 1; 
        unsigned int wakeupIsOnWeekday : 1; 
    }  _has;
    long long  _percentOfDesiredSleep;
    NSString * _thirdPartyBundleIdentifier;
    NSString * _thirdPartyDeviceManufacturer;
    NSString * _thirdPartyDeviceModel;
    unsigned long long  _timestamp;
    bool  _wakeupIsOnWeekday;
    long long  _wakeupTimeToThirdPartyWakeupTimeMinutes;
}

@property (nonatomic) long long bedtimeHour;
@property (nonatomic) long long bedtimeMinute;
@property (nonatomic) long long bedtimeToCorrectedBedtimeMinutes;
@property (nonatomic) long long bedtimeToFirstSleepInterruptionMinutes;
@property (nonatomic) long long bedtimeToStartOfLongestSleepIntervalMinutes;
@property (nonatomic) long long correctedBedtimeToThirdPartySleepOnsetMinutes;
@property (nonatomic) bool hasBedtimeHour;
@property (nonatomic) bool hasBedtimeMinute;
@property (nonatomic) bool hasBedtimeToCorrectedBedtimeMinutes;
@property (nonatomic) bool hasBedtimeToFirstSleepInterruptionMinutes;
@property (nonatomic) bool hasBedtimeToStartOfLongestSleepIntervalMinutes;
@property (nonatomic) bool hasCorrectedBedtimeToThirdPartySleepOnsetMinutes;
@property (nonatomic) bool hasPercentOfDesiredSleep;
@property (nonatomic, readonly) bool hasThirdPartyBundleIdentifier;
@property (nonatomic, readonly) bool hasThirdPartyDeviceManufacturer;
@property (nonatomic, readonly) bool hasThirdPartyDeviceModel;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasWakeupIsOnWeekday;
@property (nonatomic) bool hasWakeupTimeToThirdPartyWakeupTimeMinutes;
@property (nonatomic) long long percentOfDesiredSleep;
@property (nonatomic, retain) NSString *thirdPartyBundleIdentifier;
@property (nonatomic, retain) NSString *thirdPartyDeviceManufacturer;
@property (nonatomic, retain) NSString *thirdPartyDeviceModel;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) bool wakeupIsOnWeekday;
@property (nonatomic) long long wakeupTimeToThirdPartyWakeupTimeMinutes;

- (void).cxx_destruct;
- (long long)bedtimeHour;
- (long long)bedtimeMinute;
- (long long)bedtimeToCorrectedBedtimeMinutes;
- (long long)bedtimeToFirstSleepInterruptionMinutes;
- (long long)bedtimeToStartOfLongestSleepIntervalMinutes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)correctedBedtimeToThirdPartySleepOnsetMinutes;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBedtimeHour;
- (bool)hasBedtimeMinute;
- (bool)hasBedtimeToCorrectedBedtimeMinutes;
- (bool)hasBedtimeToFirstSleepInterruptionMinutes;
- (bool)hasBedtimeToStartOfLongestSleepIntervalMinutes;
- (bool)hasCorrectedBedtimeToThirdPartySleepOnsetMinutes;
- (bool)hasPercentOfDesiredSleep;
- (bool)hasThirdPartyBundleIdentifier;
- (bool)hasThirdPartyDeviceManufacturer;
- (bool)hasThirdPartyDeviceModel;
- (bool)hasTimestamp;
- (bool)hasWakeupIsOnWeekday;
- (bool)hasWakeupTimeToThirdPartyWakeupTimeMinutes;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)percentOfDesiredSleep;
- (bool)readFrom:(id)arg1;
- (void)setBedtimeHour:(long long)arg1;
- (void)setBedtimeMinute:(long long)arg1;
- (void)setBedtimeToCorrectedBedtimeMinutes:(long long)arg1;
- (void)setBedtimeToFirstSleepInterruptionMinutes:(long long)arg1;
- (void)setBedtimeToStartOfLongestSleepIntervalMinutes:(long long)arg1;
- (void)setCorrectedBedtimeToThirdPartySleepOnsetMinutes:(long long)arg1;
- (void)setHasBedtimeHour:(bool)arg1;
- (void)setHasBedtimeMinute:(bool)arg1;
- (void)setHasBedtimeToCorrectedBedtimeMinutes:(bool)arg1;
- (void)setHasBedtimeToFirstSleepInterruptionMinutes:(bool)arg1;
- (void)setHasBedtimeToStartOfLongestSleepIntervalMinutes:(bool)arg1;
- (void)setHasCorrectedBedtimeToThirdPartySleepOnsetMinutes:(bool)arg1;
- (void)setHasPercentOfDesiredSleep:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWakeupIsOnWeekday:(bool)arg1;
- (void)setHasWakeupTimeToThirdPartyWakeupTimeMinutes:(bool)arg1;
- (void)setPercentOfDesiredSleep:(long long)arg1;
- (void)setThirdPartyBundleIdentifier:(id)arg1;
- (void)setThirdPartyDeviceManufacturer:(id)arg1;
- (void)setThirdPartyDeviceModel:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWakeupIsOnWeekday:(bool)arg1;
- (void)setWakeupTimeToThirdPartyWakeupTimeMinutes:(long long)arg1;
- (id)thirdPartyBundleIdentifier;
- (id)thirdPartyDeviceManufacturer;
- (id)thirdPartyDeviceModel;
- (unsigned long long)timestamp;
- (bool)wakeupIsOnWeekday;
- (long long)wakeupTimeToThirdPartyWakeupTimeMinutes;
- (void)writeTo:(id)arg1;

@end
