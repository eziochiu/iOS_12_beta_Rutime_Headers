/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFThermostatItemUtilities : NSObject

+ (long long)_heatingCoolingValueForCurrentHeaterCoolerState:(long long)arg1 isActive:(bool)arg2;
+ (long long)_heatingCoolingValueForTargetHeaterCoolerState:(long long)arg1 isActive:(bool)arg2;
+ (id)currentHeatingCoolingModeValueInResponse:(id)arg1;
+ (void)getDescription:(out id*)arg1 controlDescription:(out id*)arg2 optionalDescriptions:(out id*)arg3 forResponse:(id)arg4 primaryService:(id)arg5 temperatureFormatter:(id)arg6;
+ (id)targetHeatingCoolingModeValueInResponse:(id)arg1;
+ (id)targetTemperatureValueInResponse:(id)arg1;

@end
