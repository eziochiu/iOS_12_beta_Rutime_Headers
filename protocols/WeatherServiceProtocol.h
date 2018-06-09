/* made by EzioChiu.
 */

@protocol WeatherServiceProtocol <WeatherServiceInternalProtocol>

@required

- (void)airQualityForLocation:(WFLocation *)arg1 locale:(NSLocale *)arg2 options:(NSDictionary *)arg3 taskIdentifier:(WFTaskIdentifier *)arg4;
- (void)cancelTaskWithIdentifier:(WFTaskIdentifier *)arg1;
- (void)dailyForecastForLocation:(WFLocation *)arg1 taskIdentifier:(WFTaskIdentifier *)arg2;
- (void)forecastForLocation:(WFLocation *)arg1 atDate:(NSDateComponents *)arg2 options:(NSDictionary *)arg3 taskIdentifier:(WFTaskIdentifier *)arg4;
- (void)hourlyForecastForLocation:(WFLocation *)arg1 taskIdentifier:(WFTaskIdentifier *)arg2;
- (void)invalidateCache:(WFTaskIdentifier *)arg1;
- (void)locationForCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 taskIdentifier:(WFTaskIdentifier *)arg2;
- (void)locationForSearchCompletion:(MKLocalSearchCompletion *)arg1 taskIdentifier:(WFTaskIdentifier *)arg2;
- (void)locationForString:(NSString *)arg1 taskIdentifier:(WFTaskIdentifier *)arg2;
- (void)reachabilityConfigurationForIdentifier:(WFTaskIdentifier *)arg1;
- (void)replaceTemperatureUnitWith:(int)arg1 identifier:(WFTaskIdentifier *)arg2;
- (void)temperatureUnitWithIdentifier:(WFTaskIdentifier *)arg1;

@end
