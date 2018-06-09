/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKRelativeDateTextProvider : CLKTextProvider {
    unsigned long long  _calendarUnits;
    NSDate * _date;
    bool  _disableOffsetPrefix;
    bool  _disableSmallCapUnits;
    double  _elapsedTime;
    NSDateComponentsFormatter * _formatter;
    NSDate * _overrideDate;
    bool  _pauseTimerAtZero;
    long long  _relativeDateStyle;
    NSString * _sessionCacheKey;
    NSDateComponents * _sessionComponents;
    bool  _sessionInProgress;
    long long  _sessionTimePeriod;
    unsigned long long  _sessionVisibleUnits;
    bool  _shrinkUnitsInCJK;
    bool  _twoDigitMinuteZeroPadding;
    bool  _wantsSubseconds;
}

@property (nonatomic) unsigned long long calendarUnits;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) bool disableOffsetPrefix;
@property (nonatomic) bool disableSmallCapUnits;
@property (nonatomic, retain) NSDate *overrideDate;
@property (nonatomic) bool pauseTimerAtZero;
@property (nonatomic) long long relativeDateStyle;
@property (nonatomic) bool shrinkUnitsInCJK;
@property (nonatomic) bool twoDigitMinuteZeroPadding;
@property (nonatomic) bool wantsSubseconds;

+ (bool)supportsSecureCoding;
+ (id)textProviderWithDate:(id)arg1 style:(long long)arg2 units:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)_componentsForDate:(id)arg1 visibleUnits:(unsigned long long*)arg2;
- (bool)_configureFormatterForFallbackIndex:(unsigned long long)arg1;
- (void)_configureFormatterForTimerStyle;
- (void)_endSession;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;
- (id)_sessionCacheKey;
- (id)_signPrefixString;
- (void)_startSessionWithDate:(id)arg1;
- (long long)_timePeriodForElapsedTime:(double)arg1;
- (bool)_timerIsPausedAtZero;
- (long long)_updateFrequency;
- (void)_validate;
- (unsigned long long)calendarUnits;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (bool)disableOffsetPrefix;
- (bool)disableSmallCapUnits;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)overrideDate;
- (bool)pauseTimerAtZero;
- (long long)relativeDateStyle;
- (void)setCalendarUnits:(unsigned long long)arg1;
- (void)setDate:(id)arg1;
- (void)setDisableOffsetPrefix:(bool)arg1;
- (void)setDisableSmallCapUnits:(bool)arg1;
- (void)setOverrideDate:(id)arg1;
- (void)setPauseTimerAtZero:(bool)arg1;
- (void)setRelativeDateStyle:(long long)arg1;
- (void)setShrinkUnitsInCJK:(bool)arg1;
- (void)setTwoDigitMinuteZeroPadding:(bool)arg1;
- (void)setWantsSubseconds:(bool)arg1;
- (bool)shrinkUnitsInCJK;
- (bool)twoDigitMinuteZeroPadding;
- (bool)wantsSubseconds;

@end
