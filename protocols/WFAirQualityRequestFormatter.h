/* made by EzioChiu.
 */

@protocol WFAirQualityRequestFormatter <NSObject>

@required

+ (NSURLRequest *)airQualityRequestForLocation:(WFLocation *)arg1 locale:(NSLocale *)arg2 error:(id*)arg3;

@end
