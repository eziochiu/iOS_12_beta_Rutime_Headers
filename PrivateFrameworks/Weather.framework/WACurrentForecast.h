/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WACurrentForecast : NSObject <NSCopying> {
    unsigned long long  _UVIndex;
    long long  _conditionCode;
    float  _dewPoint;
    WFTemperature * _feelsLike;
    float  _humidity;
    unsigned long long  _observationTime;
    float  _precipitationPast24Hours;
    float  _pressure;
    unsigned long long  _pressureRising;
    WFTemperature * _temperature;
    float  _visibility;
    float  _windDirection;
    float  _windSpeed;
}

@property (nonatomic) unsigned long long UVIndex;
@property (nonatomic) long long conditionCode;
@property (nonatomic) float dewPoint;
@property (nonatomic, retain) WFTemperature *feelsLike;
@property (nonatomic) float humidity;
@property (nonatomic) unsigned long long observationTime;
@property (nonatomic) float precipitationPast24Hours;
@property (nonatomic) float pressure;
@property (nonatomic) unsigned long long pressureRising;
@property (nonatomic, retain) WFTemperature *temperature;
@property (nonatomic) float visibility;
@property (nonatomic) float windDirection;
@property (nonatomic) float windSpeed;

+ (id)currentForecastForLocation:(id)arg1 conditions:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)UVIndex;
- (long long)conditionCode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (float)dewPoint;
- (id)feelsLike;
- (unsigned long long)hash;
- (float)humidity;
- (bool)isEqual:(id)arg1;
- (unsigned long long)observationTime;
- (float)precipitationPast24Hours;
- (float)pressure;
- (unsigned long long)pressureRising;
- (void)setConditionCode:(long long)arg1;
- (void)setDewPoint:(float)arg1;
- (void)setFeelsLike:(id)arg1;
- (void)setHumidity:(float)arg1;
- (void)setObservationTime:(unsigned long long)arg1;
- (void)setPrecipitationPast24Hours:(float)arg1;
- (void)setPressure:(float)arg1;
- (void)setPressureRising:(unsigned long long)arg1;
- (void)setTemperature:(id)arg1;
- (void)setUVIndex:(unsigned long long)arg1;
- (void)setVisibility:(float)arg1;
- (void)setWindDirection:(float)arg1;
- (void)setWindSpeed:(float)arg1;
- (id)temperature;
- (float)visibility;
- (float)windDirection;
- (float)windSpeed;

@end
