/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKLatestSummariesQueryServerConfiguration : HKQueryServerConfiguration {
    NSCalendar * _calendar;
    NSDate * _summaryDate;
}

@property (nonatomic, copy) NSCalendar *calendar;
@property (nonatomic, copy) NSDate *summaryDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)calendar;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setSummaryDate:(id)arg1;
- (id)summaryDate;

@end
