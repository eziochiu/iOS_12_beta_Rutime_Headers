/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsDualLocationUpdater : NSObject <CLLocationManagerDelegate, MapsSuggestionsLocationUpdater, MapsSuggestionsObject> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <MapsSuggestionsLocationUpdaterDelegate> * _delegate;
    CLLocation * _lastBestLocation;
    CLLocationManager * _locationManagerForLeeching;
    CLLocationManager * _locationManagerForUpdating;
    bool  _running;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MapsSuggestionsLocationUpdaterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLLocation *lastBestLocation;
@property (nonatomic, retain) CLLocationManager *locationManagerForLeeching;
@property (nonatomic, retain) CLLocationManager *locationManagerForUpdating;
@property (nonatomic) bool running;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (id)defaultLocationUpdater;

- (void).cxx_destruct;
- (void)_initLocationManagers;
- (void)_start;
- (void)_stop;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)lastBestLocation;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)locationManagerForLeeching;
- (id)locationManagerForUpdating;
- (void)restartLocationUpdatesForDelegate:(id)arg1;
- (bool)running;
- (void)setDelegate:(id)arg1;
- (void)setLastBestLocation:(id)arg1;
- (void)setLocationManagerForLeeching:(id)arg1;
- (void)setLocationManagerForUpdating:(id)arg1;
- (void)setRunning:(bool)arg1;
- (void)startLocationUpdatesForDelegate:(id)arg1;
- (void)stopLocationUpdatesForDelegate:(id)arg1;
- (struct NSString { Class x1; }*)uniqueName;

@end
