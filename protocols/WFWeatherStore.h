/* made by EzioChiu.
 */

@protocol WFWeatherStore <NSObject>

@required

- (void)airQualityForLocation:(void *)arg1 locale:(void *)arg2 requestIdentifier:(void *)arg3 options:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: WFLocation *, NSLocale *, NSUUID *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFResponse *, void*
- (void)cancelTaskWithIdentifier:(WFTaskIdentifier *)arg1;
- (void)dailyForecastForLocation:(void *)arg1 requestIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: WFLocation *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFResponse *, void*
- (void)forecastForLocation:(void *)arg1 atDate:(void *)arg2 requestIdentifier:(void *)arg3 options:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: WFLocation *, NSDateComponents *, NSUUID *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFResponse *, void*
- (void)hourlyForecastForLocation:(void *)arg1 requestIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: WFLocation *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFResponse *, void*

@end
