/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeedDateFormatter : NSObject {
    NSCalendar * _calendar;
    NSDateFormatter * _dateFormatterForCurrentYear;
    NSDateFormatter * _dateFormatterForNoncurrentYears;
    bool  _ignoreWhitelist;
    NSLocale * _locale;
    bool  _prepared;
    NSDate * _today;
    NSString * _todayString;
    NSDate * _yesterday;
    NSString * _yesterdayString;
}

+ (id)defaultFeedSectionDateFormatter;

- (void).cxx_destruct;
- (void)_calendarDayChanged:(id)arg1;
- (bool)_canSubstitueDateStringsWithLocale:(id)arg1;
- (id)_completeRelativeStringForDate:(id)arg1 dateFormatter:(id)arg2;
- (void)_currentLocaleChanged:(id)arg1;
- (void)_invalidate;
- (void)_prepare;
- (void)dealloc;
- (id)init;
- (id)initWithLocale:(id)arg1 ignoreWhitelist:(bool)arg2;
- (bool)isDateInFuture:(id)arg1;
- (bool)isDateInToday:(id)arg1;
- (id)stringFromDate:(id)arg1;

@end
