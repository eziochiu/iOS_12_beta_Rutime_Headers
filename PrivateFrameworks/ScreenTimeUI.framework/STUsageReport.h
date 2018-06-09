/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STUsageReport : NSObject <NSCopying, NSSecureCoding> {
    double  _deltaFromScreenTimeUsageAverage;
    NSString * _displayName;
    unsigned long long  _higherResolutionUnit;
    NSDate * _lastUpdateDate;
    unsigned long long  _maxPickups;
    NSDateInterval * _maxPickupsInterval;
    NSArray * _notificationUsageItems;
    unsigned long long  _numberOfHigherResolutionUnitsInPeriod;
    NSArray * _pickupUsageItems;
    NSDate * _reportStartDate;
    unsigned long long  _reportTimePeriod;
    STUsageItem * _screenTimeUsage;
    unsigned long long  _timePeriodUnit;
    unsigned long long  _totalNotifications;
    unsigned long long  _totalPickups;
    NSArray * _usageItems;
}

@property (nonatomic, readonly) double deltaFromScreenTimeUsageAverage;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic) unsigned long long higherResolutionUnit;
@property (nonatomic, copy) NSDate *lastUpdateDate;
@property (nonatomic, readonly) unsigned long long maxPickups;
@property (nonatomic, readonly, copy) NSDateInterval *maxPickupsInterval;
@property (nonatomic, readonly, copy) NSArray *notificationUsageItems;
@property (nonatomic) unsigned long long numberOfHigherResolutionUnitsInPeriod;
@property (nonatomic, readonly, copy) NSArray *pickupUsageItems;
@property (nonatomic, copy) NSDate *reportStartDate;
@property (nonatomic) unsigned long long reportTimePeriod;
@property (nonatomic, readonly) STUsageItem *screenTimeUsage;
@property (nonatomic) unsigned long long timePeriodUnit;
@property (nonatomic, readonly) unsigned long long totalNotifications;
@property (nonatomic, readonly) unsigned long long totalPickups;
@property (nonatomic, readonly, copy) NSArray *usageItems;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)computeScreenTimeDeltaWithScreenTimeByStartDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)deltaFromScreenTimeUsageAverage;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)getLocalizedPickupFrequencyUntilDate:(id)arg1;
- (id)getLocalizedPickupsDuringDeviceBedtime:(id)arg1;
- (id)getLocalizedScreenTimeDuringDeviceBedtime:(id)arg1;
- (unsigned long long)getNotificationRateUntilDate:(id)arg1;
- (unsigned long long)getPickupRateUntilDate:(id)arg1;
- (unsigned long long)getUsageRateForItems:(id)arg1 totalUsage:(unsigned long long)arg2 referenceDate:(id)arg3;
- (unsigned long long)higherResolutionUnit;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimePeriod:(unsigned long long)arg1 startDate:(id)arg2 usageItemsByStartDateByIdentifier:(id)arg3;
- (id)lastUpdateDate;
- (unsigned long long)maxPickups;
- (id)maxPickupsInterval;
- (id)notificationUsageItems;
- (unsigned long long)numberOfHigherResolutionUnitsInPeriod;
- (id)pickupUsageItems;
- (id)reportStartDate;
- (unsigned long long)reportTimePeriod;
- (id)screenTimeUsage;
- (void)setDisplayName:(id)arg1;
- (void)setHigherResolutionUnit:(unsigned long long)arg1;
- (void)setLastUpdateDate:(id)arg1;
- (void)setNumberOfHigherResolutionUnitsInPeriod:(unsigned long long)arg1;
- (void)setReportStartDate:(id)arg1;
- (void)setReportTimePeriod:(unsigned long long)arg1;
- (void)setTimePeriodUnit:(unsigned long long)arg1;
- (unsigned long long)timePeriodUnit;
- (id)topUsageItemsWithMaxCount:(unsigned long long)arg1;
- (unsigned long long)totalNotifications;
- (unsigned long long)totalPickups;
- (id)usageItems;

@end
