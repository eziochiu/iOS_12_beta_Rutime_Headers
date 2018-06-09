/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WAForecastModel : NSObject <NSCopying> {
    WFAirQualityConditions * _airQualityConditions;
    City * _city;
    WACurrentForecast * _currentConditions;
    NSArray * _dailyForecasts;
    NSURL * _deepLink;
    NSArray * _hourlyForecasts;
    NSURL * _link;
    WFLocation * _location;
    NSDate * _sunrise;
    NSDate * _sunset;
    WFWeatherConditions * _underlyingCurrentConditions;
    NSArray * _underlyingDailyConditions;
    NSArray * _underlyingHourlyConditions;
}

@property (nonatomic, retain) WFAirQualityConditions *airQualityConditions;
@property (nonatomic, retain) City *city;
@property (nonatomic, retain) WACurrentForecast *currentConditions;
@property (nonatomic, copy) NSArray *dailyForecasts;
@property (nonatomic, retain) NSURL *deepLink;
@property (nonatomic, copy) NSArray *hourlyForecasts;
@property (nonatomic, readonly) bool isPopulated;
@property (nonatomic, retain) NSURL *link;
@property (nonatomic, retain) WFLocation *location;
@property (nonatomic, retain) NSDate *sunrise;
@property (nonatomic, retain) NSDate *sunset;
@property (nonatomic, retain) WFWeatherConditions *underlyingCurrentConditions;
@property (nonatomic, retain) NSArray *underlyingDailyConditions;
@property (nonatomic, retain) NSArray *underlyingHourlyConditions;

- (void).cxx_destruct;
- (id)airQualityConditions;
- (id)city;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentConditions;
- (id)dailyForecasts;
- (id)deepLink;
- (id)description;
- (unsigned long long)hash;
- (id)hourlyForecasts;
- (bool)isEqual:(id)arg1;
- (bool)isPopulated;
- (id)link;
- (id)location;
- (void)setAirQualityConditions:(id)arg1;
- (void)setCity:(id)arg1;
- (void)setCurrentConditions:(id)arg1;
- (void)setDailyForecasts:(id)arg1;
- (void)setDeepLink:(id)arg1;
- (void)setHourlyForecasts:(id)arg1;
- (void)setLink:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setSunrise:(id)arg1;
- (void)setSunset:(id)arg1;
- (void)setUnderlyingCurrentConditions:(id)arg1;
- (void)setUnderlyingDailyConditions:(id)arg1;
- (void)setUnderlyingHourlyConditions:(id)arg1;
- (id)sunrise;
- (id)sunset;
- (id)underlyingCurrentConditions;
- (id)underlyingDailyConditions;
- (id)underlyingHourlyConditions;

@end
