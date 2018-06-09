/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUTemperatureFormatter : NSMeasurementFormatter <HFTemperatureFormatter, WFTemperatureUnitObserver> {
    NSString * _fallbackTemperatureString;
    bool  _inputIsCelsius;
    bool  _outputIsCelsius;
    NSNumber * _stepValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *fallbackTemperatureString;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inputIsCelsius;
@property (nonatomic) unsigned long long maximumFractionDigits;
@property (nonatomic) unsigned long long minimumFractionDigits;
@property (nonatomic) bool outputIsCelsius;
@property (nonatomic, retain) NSNumber *stepValue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fallbackTemperatureString;
- (id)init;
- (bool)inputIsCelsius;
- (unsigned long long)maximumFractionDigits;
- (unsigned long long)minimumFractionDigits;
- (bool)outputIsCelsius;
- (void)setFallbackTemperatureString:(id)arg1;
- (void)setInputIsCelsius:(bool)arg1;
- (void)setMaximumFractionDigits:(unsigned long long)arg1;
- (void)setMinimumFractionDigits:(unsigned long long)arg1;
- (void)setOutputIsCelsius:(bool)arg1;
- (void)setStepValue:(id)arg1;
- (id)stepValue;
- (id)stringForObjectValue:(id)arg1;
- (void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnitTo:(int)arg2;

@end
