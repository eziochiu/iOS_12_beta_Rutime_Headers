/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSleepAlarmAWDSleepAlarmMonthlyConsistencyEvent : PBCodable <NSCopying> {
    long long  _bedtimeAlarmNightCount;
    long long  _bedtimeChangesCount;
    HDSleepAlarmAWDSleepAlarmStatistics * _bedtimeChangesMinutesStatistics;
    HDSleepAlarmAWDSleepAlarmStatistics * _bedtimeCorrectionMinutesStatistics;
    struct { 
        unsigned int bedtimeAlarmNightCount : 1; 
        unsigned int bedtimeChangesCount : 1; 
        unsigned int thirdPartySleepTrackerNightCount : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    NSString * _thirdPartyBundleIdentifier;
    NSString * _thirdPartyDeviceManufacturer;
    NSString * _thirdPartyDeviceModel;
    long long  _thirdPartySleepTrackerNightCount;
    unsigned long long  _timestamp;
}

@property (nonatomic) long long bedtimeAlarmNightCount;
@property (nonatomic) long long bedtimeChangesCount;
@property (nonatomic, retain) HDSleepAlarmAWDSleepAlarmStatistics *bedtimeChangesMinutesStatistics;
@property (nonatomic, retain) HDSleepAlarmAWDSleepAlarmStatistics *bedtimeCorrectionMinutesStatistics;
@property (nonatomic) bool hasBedtimeAlarmNightCount;
@property (nonatomic) bool hasBedtimeChangesCount;
@property (nonatomic, readonly) bool hasBedtimeChangesMinutesStatistics;
@property (nonatomic, readonly) bool hasBedtimeCorrectionMinutesStatistics;
@property (nonatomic, readonly) bool hasThirdPartyBundleIdentifier;
@property (nonatomic, readonly) bool hasThirdPartyDeviceManufacturer;
@property (nonatomic, readonly) bool hasThirdPartyDeviceModel;
@property (nonatomic) bool hasThirdPartySleepTrackerNightCount;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *thirdPartyBundleIdentifier;
@property (nonatomic, retain) NSString *thirdPartyDeviceManufacturer;
@property (nonatomic, retain) NSString *thirdPartyDeviceModel;
@property (nonatomic) long long thirdPartySleepTrackerNightCount;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (long long)bedtimeAlarmNightCount;
- (long long)bedtimeChangesCount;
- (id)bedtimeChangesMinutesStatistics;
- (id)bedtimeCorrectionMinutesStatistics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBedtimeAlarmNightCount;
- (bool)hasBedtimeChangesCount;
- (bool)hasBedtimeChangesMinutesStatistics;
- (bool)hasBedtimeCorrectionMinutesStatistics;
- (bool)hasThirdPartyBundleIdentifier;
- (bool)hasThirdPartyDeviceManufacturer;
- (bool)hasThirdPartyDeviceModel;
- (bool)hasThirdPartySleepTrackerNightCount;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBedtimeAlarmNightCount:(long long)arg1;
- (void)setBedtimeChangesCount:(long long)arg1;
- (void)setBedtimeChangesMinutesStatistics:(id)arg1;
- (void)setBedtimeCorrectionMinutesStatistics:(id)arg1;
- (void)setHasBedtimeAlarmNightCount:(bool)arg1;
- (void)setHasBedtimeChangesCount:(bool)arg1;
- (void)setHasThirdPartySleepTrackerNightCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setThirdPartyBundleIdentifier:(id)arg1;
- (void)setThirdPartyDeviceManufacturer:(id)arg1;
- (void)setThirdPartyDeviceModel:(id)arg1;
- (void)setThirdPartySleepTrackerNightCount:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)thirdPartyBundleIdentifier;
- (id)thirdPartyDeviceManufacturer;
- (id)thirdPartyDeviceModel;
- (long long)thirdPartySleepTrackerNightCount;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
