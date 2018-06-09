/* made by EzioChiu.
 */

@protocol WFAirQualityDataParser <NSObject>

@required

+ (WFAirQualityConditions *)parseAirQualityData:(NSData *)arg1 location:(WFLocation *)arg2 locale:(NSLocale *)arg3 error:(id*)arg4;

@end
