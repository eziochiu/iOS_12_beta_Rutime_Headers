/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STWeatherAttributes : STSiriModelObject {
    NSNumber * _chanceOfPrecipitation;
    long long  _condition;
    STTemperature * _highTemperature;
    STTemperature * _lowTemperature;
    STTemperature * _temperature;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithCondition:(long long)arg1 temperature:(id)arg2 highTemperature:(id)arg3 lowTemperature:(id)arg4 chanceOfPrecipitation:(id)arg5;
- (id)chanceOfPrecipitation;
- (long long)condition;
- (void)encodeWithCoder:(id)arg1;
- (id)highTemperature;
- (id)initWithCoder:(id)arg1;
- (id)lowTemperature;
- (id)temperature;

@end
