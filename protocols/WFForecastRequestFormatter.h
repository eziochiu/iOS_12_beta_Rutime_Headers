/* made by EzioChiu.
 */

@protocol WFForecastRequestFormatter <NSObject>

@required

+ (NSURLRequest *)forecastRequestForLocation:(WFLocation *)arg1 date:(NSDateComponents *)arg2;
+ (NSURL *)hostURLForService;

@end
