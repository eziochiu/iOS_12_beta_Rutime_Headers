/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFParsedForecastData : NSObject {
    WFWeatherConditions * _currentConditions;
    NSArray * _dailyForecasts;
    NSArray * _hourlyForecasts;
    NSData * _rawData;
}

@property (nonatomic, copy) WFWeatherConditions *currentConditions;
@property (nonatomic, copy) NSArray *dailyForecasts;
@property (nonatomic, copy) NSArray *hourlyForecasts;
@property (nonatomic, copy) NSData *rawData;

- (void).cxx_destruct;
- (id)currentConditions;
- (id)dailyForecasts;
- (id)hourlyForecasts;
- (id)rawData;
- (void)setCurrentConditions:(id)arg1;
- (void)setDailyForecasts:(id)arg1;
- (void)setHourlyForecasts:(id)arg1;
- (void)setRawData:(id)arg1;

@end
