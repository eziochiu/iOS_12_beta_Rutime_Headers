/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface TWCLocationUpdater : TWCCityUpdater {
    City * _currentCity;
    struct ct_green_tea_logger_s { } * _greenTeaLogger;
    CLGeocoder * _reverseGeocoder;
}

@property (nonatomic, retain) City *currentCity;
@property (nonatomic) struct ct_green_tea_logger_s { }*greenTeaLogger;
@property (nonatomic, retain) CLGeocoder *reverseGeocoder;

+ (id)sharedLocationUpdater;

- (void).cxx_destruct;
- (void)_completeReverseGeocodeForLocation:(id)arg1 currentCity:(id)arg2 geocodeError:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_geocodeLocation:(id)arg1 currentCity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_updateWeatherForLocation:(id)arg1 city:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)currentCity;
- (void)dealloc;
- (void)enableProgressIndicator:(bool)arg1;
- (struct ct_green_tea_logger_s { }*)greenTeaLogger;
- (id)init;
- (void)parsedResultCity:(id)arg1;
- (id)reverseGeocoder;
- (void)setCurrentCity:(id)arg1;
- (void)setGreenTeaLogger:(struct ct_green_tea_logger_s { }*)arg1;
- (void)setReverseGeocoder:(id)arg1;
- (void)updateWeatherForCities:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)updateWeatherForCity:(id)arg1;
- (void)updateWeatherForLocation:(id)arg1 city:(id)arg2;
- (void)updateWeatherForLocation:(id)arg1 city:(id)arg2 isFromFrameworkClient:(bool)arg3 withCompletionHandler:(id /* block */)arg4;

@end
