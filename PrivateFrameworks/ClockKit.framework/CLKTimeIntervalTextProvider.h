/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKTimeIntervalTextProvider : CLKTextProvider {
    NSDateFormatter * _dateFormatter;
    NSDate * _endDate;
    NSArray * _fallbackSequence;
    NSDate * _startDate;
    NSTimeZone * _timeZone;
}

@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSTimeZone *timeZone;

+ (id)finalizedTextProviderWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)finalizedTextProviderWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3;
+ (bool)supportsSecureCoding;
+ (id)textProviderWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)textProviderWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)_attributedTextForSequenceItem:(long long)arg1 style:(id)arg2;
- (id)_dateIntervalAttributedTextWithStyle:(id)arg1 narrow:(bool)arg2;
- (id)_dateIntervalNarrowAttributedTextWithStyle:(id)arg1;
- (id)_dateIntervalWideAttributedTextWithStyle:(id)arg1;
- (id)_fallbackSequence;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfAnnontatedTime:(id)arg1 matchingPattern:(id /* block */)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfDesignatorInAnnotatedTime:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfHoursInAnnotatedTime:(id)arg1;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;
- (id)_startTimeDropMinutesAttributedTextWithStyle:(id)arg1;
- (id)_startTimeFullAttributedTextWithStyle:(id)arg1;
- (id)_stringByRemovingDesignatorRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 fromString:(id)arg2;
- (id)_timeIntervalAttributedTextWithStyle:(id)arg1 dropMinutes:(bool)arg2 onlyStartDate:(bool)arg3;
- (id)_timeIntervalDropMinutesAttributedTextWithStyle:(id)arg1;
- (id)_timeIntervalFullAttributedTextWithStyle:(id)arg1;
- (void)_validate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)startDate;
- (id)timeZone;

@end
