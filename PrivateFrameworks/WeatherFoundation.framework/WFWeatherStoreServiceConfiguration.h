/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFWeatherStoreServiceConfiguration : NSObject <NSCopying> {
    WFAggregateDictionary * _aggDictionary;
    Class  _airQualityParserClass;
    Class  _airQualityRequestFormatterClass;
    Class  _cacheClass;
    NSURL * _cacheURL;
    NSMutableDictionary * _requestFormatterForForecastType;
    NSMutableDictionary * _requestParserForForecastType;
    NSURL * _serviceConnectivityEvaluationURL;
    NWPathEvaluator * _serviceConnectivityEvaluator;
    NSURLSession * _session;
}

@property (nonatomic, retain) WFAggregateDictionary *aggDictionary;
@property (nonatomic, retain) Class airQualityParserClass;
@property (nonatomic, retain) Class airQualityRequestFormatterClass;
@property (nonatomic, retain) Class cacheClass;
@property (nonatomic, copy) NSURL *cacheURL;
@property (nonatomic, readonly) bool isServiceAvailable;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, retain) NSMutableDictionary *requestFormatterForForecastType;
@property (nonatomic, retain) NSMutableDictionary *requestParserForForecastType;
@property (nonatomic, retain) NSURL *serviceConnectivityEvaluationURL;
@property (nonatomic, readonly) NWPathEvaluator *serviceConnectivityEvaluator;
@property (nonatomic, retain) NSURLSession *session;

+ (id)defaultConfiguration;
+ (id)defaultConfigurationWithSourceBundleIdentifier:(id)arg1;
+ (id)generateUserAgent;

- (void).cxx_destruct;
- (id)aggDictionary;
- (Class)airQualityParserClass;
- (id)airQualityRequestForLocation:(id)arg1 locale:(id)arg2 error:(id*)arg3;
- (Class)airQualityRequestFormatterClass;
- (Class)cacheClass;
- (id)cacheURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)forecastRequestForType:(unsigned long long)arg1 location:(id)arg2 date:(id)arg3 error:(id*)arg4;
- (id)init;
- (bool)isServiceAvailable;
- (bool)isValid;
- (id)parseAirQualityData:(id)arg1 location:(id)arg2 locale:(id)arg3 error:(id*)arg4;
- (id)parseForecast:(unsigned long long)arg1 data:(id)arg2 date:(id)arg3 error:(id*)arg4;
- (id)requestFormatterForForecastType;
- (id)requestParserForForecastType;
- (id)serviceConnectivityEvaluationURL;
- (id)serviceConnectivityEvaluator;
- (id)session;
- (void)setAggDictionary:(id)arg1;
- (void)setAirQualityFormatter:(Class)arg1;
- (void)setAirQualityParser:(Class)arg1;
- (void)setAirQualityParserClass:(Class)arg1;
- (void)setAirQualityRequestFormatterClass:(Class)arg1;
- (void)setCacheClass:(Class)arg1;
- (void)setCacheURL:(id)arg1;
- (void)setRequestFormatter:(Class)arg1 forForecastType:(unsigned long long)arg2;
- (void)setRequestFormatterForForecastType:(id)arg1;
- (void)setRequestParser:(id)arg1 forForecastType:(unsigned long long)arg2;
- (void)setRequestParserForForecastType:(id)arg1;
- (void)setServiceConnectivityEvaluationURL:(id)arg1;
- (void)setSession:(id)arg1;

@end
