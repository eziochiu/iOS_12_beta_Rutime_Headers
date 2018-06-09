/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STShowHourlyWeatherForecastRequest : AFSiriRequest {
    STCity * _city;
    STWeatherAttributes * _currentAttributes;
    long long  _forecastType;
    NSArray * _hourlyAttributes;
    long long  _startHour;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithCurrentAttributes:(id)arg1 hourlyAttributes:(id)arg2 city:(id)arg3 startHour:(long long)arg4 forecastType:(long long)arg5;
- (id)city;
- (id)createResponse;
- (id)currentAttributes;
- (void)encodeWithCoder:(id)arg1;
- (long long)forecastType;
- (id)hourlyAttributes;
- (id)initWithCoder:(id)arg1;
- (long long)startHour;

@end
