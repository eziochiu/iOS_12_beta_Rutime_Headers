/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
 */

@interface USUsageReport : NSObject <NSSecureCoding> {
    NSArray * _categoryUsage;
    unsigned long long  _deviceUnlocks;
    NSDateInterval * _interval;
    NSDate * _lastEventDate;
    double  _screenTime;
    unsigned long long  _screenWakes;
    NSTimeZone * _timeZone;
    NSDictionary * _userNotificationsByBundleIdentifier;
}

@property (readonly) NSDictionary *applicationUsageByBundleIdentifier;
@property (readonly, copy) NSArray *categoryUsage;
@property (readonly) NSDictionary *categoryUsageByPrimaryIdentifier;
@property (readonly) NSDictionary *categoryUsageBySecondaryIdentifier;
@property (readonly) unsigned long long deviceUnlocks;
@property (readonly) NSDateInterval *interval;
@property (readonly) NSDate *lastEventDate;
@property (readonly) double screenTime;
@property (readonly) unsigned long long screenWakes;
@property (readonly) NSTimeZone *timeZone;
@property (readonly, copy) NSDictionary *userNotificationsByBundleIdentifier;
@property (readonly) NSDictionary *webUsageByDomain;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_usUsageReportCommonInitWithScreenTime:(double)arg1 categoryUsage:(id)arg2 deviceUnlocks:(unsigned long long)arg3 screenWakes:(unsigned long long)arg4 notifications:(id)arg5 interval:(id)arg6 timeZone:(id)arg7 lastEventDate:(id)arg8;
- (id)applicationUsageByBundleIdentifier;
- (id)categoryUsage;
- (id)categoryUsageByPrimaryIdentifier;
- (id)categoryUsageBySecondaryIdentifier;
- (id)description;
- (unsigned long long)deviceUnlocks;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScreenTime:(double)arg1 categoryUsage:(id)arg2 deviceUnlocks:(unsigned long long)arg3 screenWakes:(unsigned long long)arg4 notifications:(id)arg5 interval:(id)arg6 timeZone:(id)arg7 lastEventDate:(id)arg8;
- (id)interval;
- (id)lastEventDate;
- (double)screenTime;
- (unsigned long long)screenWakes;
- (id)timeZone;
- (id)userNotificationsByBundleIdentifier;
- (id)webUsageByDomain;

@end
