/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFWeatherUndergroundRequestFormatter : NSObject <WFForecastRequestFormatter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)forecastRequestForLocation:(id)arg1 date:(id)arg2;
+ (id)hostURLForService;

@end
