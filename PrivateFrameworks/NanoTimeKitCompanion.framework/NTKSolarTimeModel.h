/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKSolarTimeModel : NSObject {
    GEOAlmanac * _dawnDuskSolarAlmanac;
    bool  _dependentValuesNeedUpdate;
    double  _effectiveSolarDayLength;
    NSDate * _endDateForReferenceDate;
    NSDate * _localSolarMidnightDate;
    NSDate * _referenceDate;
    CLLocation * _referenceLocation;
    NSDate * _startDateForReferenceDate;
    GEOAlmanac * _sunriseSunsetSolarAlmanac;
    bool  _usePlaceholderData;
}

@property (nonatomic, retain) GEOAlmanac *dawnDuskSolarAlmanac;
@property (nonatomic) bool dependentValuesNeedUpdate;
@property (nonatomic) double effectiveSolarDayLength;
@property (nonatomic, retain) NSDate *endDateForReferenceDate;
@property (nonatomic, retain) NSDate *localSolarMidnightDate;
@property (nonatomic, retain) NSDate *referenceDate;
@property (nonatomic, retain) CLLocation *referenceLocation;
@property (nonatomic, retain) NSDate *startDateForReferenceDate;
@property (nonatomic, retain) GEOAlmanac *sunriseSunsetSolarAlmanac;
@property (nonatomic) bool usePlaceholderData;

- (void).cxx_destruct;
- (void)_updateDependentValues;
- (id)dateForPercentageThroughPeriod:(double)arg1;
- (id)dawnDuskSolarAlmanac;
- (bool)dependentValuesNeedUpdate;
- (double)effectiveSolarDayLength;
- (id)endDateForReferenceDate;
- (bool)includesDate:(id)arg1;
- (id)init;
- (id)initWithReferenceDate:(id)arg1 referenceLocation:(id)arg2;
- (id)localSolarMidnightDate;
- (double)percentageThroughPeriodForDate:(id)arg1;
- (double)percentageThroughPeriodForIdealizedTimeInCurrentSolarDay;
- (double)percentageThroughPeriodInCurrentSolarDayForDate:(id)arg1;
- (id)referenceDate;
- (id)referenceLocation;
- (void)setDawnDuskSolarAlmanac:(id)arg1;
- (void)setDependentValuesNeedUpdate:(bool)arg1;
- (void)setEffectiveSolarDayLength:(double)arg1;
- (void)setEndDateForReferenceDate:(id)arg1;
- (void)setLocalSolarMidnightDate:(id)arg1;
- (void)setReferenceDate:(id)arg1;
- (void)setReferenceLocation:(id)arg1;
- (void)setStartDateForReferenceDate:(id)arg1;
- (void)setSunriseSunsetSolarAlmanac:(id)arg1;
- (void)setUsePlaceholderData:(bool)arg1;
- (id)startDateForReferenceDate;
- (id)sunriseSunsetSolarAlmanac;
- (void)updateForTimeZoneChange;
- (void)updateModelWithDate:(id)arg1;
- (bool)usePlaceholderData;

@end
