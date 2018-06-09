/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WATodayAutoupdatingLocationModel : WATodayModel <CLLocationManagerDelegate, SynchronizedDefaultsDelegate> {
    id /* block */  _WeatherLocationManagerGenerator;
    unsigned long long  _citySource;
    WFGeocodeRequest * _geocodeRequest;
    bool  _isLocationTrackingEnabled;
    WeatherLocationManager * _locationManager;
    bool  _locationServicesActive;
    WeatherPreferences * _preferences;
    bool  _stopUpdateIfNeeded;
}

@property (nonatomic, copy) id /* block */ WeatherLocationManagerGenerator;
@property (nonatomic) unsigned long long citySource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WFGeocodeRequest *geocodeRequest;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLocationTrackingEnabled;
@property (nonatomic, retain) WeatherLocationManager *locationManager;
@property (nonatomic) bool locationServicesActive;
@property (nonatomic, retain) WeatherPreferences *preferences;
@property (nonatomic) bool stopUpdateIfNeeded;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)WeatherLocationManagerGenerator;
- (void)_executeLocationUpdateForFirstWeatherCityWithCompletion:(id /* block */)arg1;
- (void)_executeLocationUpdateForLocalWeatherCityWithCompletion:(id /* block */)arg1;
- (void)_executeLocationUpdateWithCompletion:(id /* block */)arg1;
- (void)_kickstartLocationManager;
- (void)_persistStateWithModel:(id)arg1;
- (bool)_reloadForecastData:(bool)arg1;
- (void)_teardownLocationManager;
- (void)_weatherPreferencesWereSynchronized:(id)arg1;
- (void)_willDeliverForecastModel:(id)arg1;
- (void)checkIfNeedsToUpdate;
- (unsigned long long)citySource;
- (void)clearLocationUpdateState;
- (void)dealloc;
- (id)forecastModel;
- (id)geocodeRequest;
- (id)init;
- (id)initWithPreferences:(id)arg1 effectiveBundleIdentifier:(id)arg2;
- (bool)isLocationTrackingEnabled;
- (id)locationManager;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (bool)locationServicesActive;
- (id)preferences;
- (void)setCitySource:(unsigned long long)arg1;
- (void)setCitySource:(unsigned long long)arg1 fireNotification:(bool)arg2;
- (void)setGeocodeRequest:(id)arg1;
- (void)setIsLocationTrackingEnabled:(bool)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setLocationServicesActive:(bool)arg1;
- (void)setPreferences:(id)arg1;
- (void)setStopUpdateIfNeeded:(bool)arg1;
- (void)setWeatherLocationManagerGenerator:(id /* block */)arg1;
- (bool)shouldNotUseUpdatedLocation;
- (bool)stopUpdateIfNeeded;
- (void)syncLastUpdateTime;
- (void)ubiquitousDefaultsDidChange:(id)arg1;
- (bool)updateLocationTrackingStatus;

@end
