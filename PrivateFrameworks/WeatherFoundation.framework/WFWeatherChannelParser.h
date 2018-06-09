/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFWeatherChannelParser : WFForecastDataParser <WFAirQualityDataParser> {
    NSCalendar * _calendar;
}

@property (nonatomic, retain) NSCalendar *calendar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)componentsForCurrentForecast;
+ (id)componentsForDailyForecasts;
+ (id)componentsForHourlyForecasts;
+ (unsigned long long)conditionFromWeatherChannelCode:(id)arg1;
+ (unsigned long long)expectedDailyForecastCount;
+ (unsigned long long)expectedHourlyForecastCount;
+ (id)parseAirQualityData:(id)arg1 location:(id)arg2 locale:(id)arg3 error:(id*)arg4;
+ (unsigned long long)pressureTrendFromWeatherChannelCode:(id)arg1;

- (void).cxx_destruct;
- (id)calendar;
- (id)dateComponentsForEpochDateNumber:(id)arg1 toUnitGranularity:(unsigned long long)arg2;
- (id)init;
- (void)parseCommonComponents:(id)arg1 data:(id)arg2;
- (id)parseCurrentCondition:(id)arg1 high:(id)arg2 low:(id)arg3;
- (id)parseDailyForecasts:(id)arg1 date:(id)arg2;
- (id)parseForecastData:(id)arg1 date:(id)arg2 error:(id*)arg3;
- (id)parseHourlyForecasts:(id)arg1 date:(id)arg2;
- (void)setCalendar:(id)arg1;

@end
