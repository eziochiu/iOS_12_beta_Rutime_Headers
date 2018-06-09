/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLLocationManagerStateTracker : CLStateTracker {
    void * _identifier;
    bool  _inTransaction;
    struct _CLLocationManagerStateTrackerState { 
        double distanceFilter; 
        double desiredAccuracy; 
        bool updatingLocation; 
        bool requestingLocation; 
        bool requestingRanging; 
        bool updatingRanging; 
        bool updatingHeading; 
        double headingFilter; 
        bool persistentMonitoringEnabled; 
        bool allowsLocationPrompts; 
        bool allowsAlteredAccessoryLocations; 
        bool dynamicAccuracyReductionEnabled; 
        bool previousAuthorizationStatusValid; 
        int previousAuthorizationStatus; 
        long long activityType; 
        int pausesLocationUpdatesAutomatically; 
        bool paused; 
        bool allowsBackgroundLocationUpdates; 
        bool showsBackgroundLocationIndicator; 
        bool allowsMapCorrection; 
        bool batchingLocation; 
        bool updatingVehicleSpeed; 
        bool updatingVehicleHeading; 
        bool matchInfoEnabled; 
        bool courtesyPromptNeeded; 
    }  _state;
}

@property (nonatomic) long long activityType;
@property (nonatomic) bool allowsAlteredAccessoryLocations;
@property (nonatomic) bool allowsBackgroundLocationUpdates;
@property (nonatomic) bool allowsLocationPrompts;
@property (nonatomic) bool allowsMapCorrection;
@property (nonatomic) bool batchingLocation;
@property (nonatomic) bool courtesyPromptNeeded;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic) double distanceFilter;
@property (nonatomic) bool dynamicAccuracyReductionEnabled;
@property (nonatomic) double headingFilter;
@property (nonatomic) bool matchInfoEnabled;
@property (nonatomic) bool paused;
@property (nonatomic) int pausesLocationUpdatesAutomatically;
@property (nonatomic) bool persistentMonitoringEnabled;
@property (nonatomic) int previousAuthorizationStatus;
@property (nonatomic) bool previousAuthorizationStatusValid;
@property (nonatomic) bool requestingLocation;
@property (nonatomic) bool requestingRanging;
@property (nonatomic) bool showsBackgroundLocationIndicator;
@property (nonatomic) bool updatingHeading;
@property (nonatomic) bool updatingLocation;
@property (nonatomic) bool updatingRanging;
@property (nonatomic) bool updatingVehicleHeading;
@property (nonatomic) bool updatingVehicleSpeed;

+ (unsigned long long)trackerStateSize;
+ (const char *)trackerStateTypeName;

- (long long)activityType;
- (bool)allowsAlteredAccessoryLocations;
- (bool)allowsBackgroundLocationUpdates;
- (bool)allowsLocationPrompts;
- (bool)allowsMapCorrection;
- (bool)batchingLocation;
- (bool)courtesyPromptNeeded;
- (void)dealloc;
- (double)desiredAccuracy;
- (double)distanceFilter;
- (bool)dumpState:(void*)arg1 withSize:(unsigned long long)arg2 hints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg3;
- (bool)dynamicAccuracyReductionEnabled;
- (double)headingFilter;
- (void*)identifier;
- (id)initInSilo:(id)arg1 withIdentifier:(void*)arg2;
- (id)initInSilo:(id)arg1 withIdentifier:(void*)arg2 state:(id /* block */)arg3;
- (id)initWithQueue:(id)arg1 identifier:(void*)arg2;
- (id)initWithQueue:(id)arg1 identifier:(void*)arg2 state:(id /* block */)arg3;
- (bool)matchInfoEnabled;
- (bool)paused;
- (int)pausesLocationUpdatesAutomatically;
- (bool)persistentMonitoringEnabled;
- (int)previousAuthorizationStatus;
- (bool)previousAuthorizationStatusValid;
- (bool)requestingLocation;
- (bool)requestingRanging;
- (void)setActivityType:(long long)arg1;
- (void)setAllowsAlteredAccessoryLocations:(bool)arg1;
- (void)setAllowsBackgroundLocationUpdates:(bool)arg1;
- (void)setAllowsLocationPrompts:(bool)arg1;
- (void)setAllowsMapCorrection:(bool)arg1;
- (void)setBatchingLocation:(bool)arg1;
- (void)setCourtesyPromptNeeded:(bool)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setDistanceFilter:(double)arg1;
- (void)setDynamicAccuracyReductionEnabled:(bool)arg1;
- (void)setHeadingFilter:(double)arg1;
- (void)setMatchInfoEnabled:(bool)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPausesLocationUpdatesAutomatically:(int)arg1;
- (void)setPersistentMonitoringEnabled:(bool)arg1;
- (void)setPreviousAuthorizationStatus:(int)arg1;
- (void)setPreviousAuthorizationStatusValid:(bool)arg1;
- (void)setRequestingLocation:(bool)arg1;
- (void)setRequestingRanging:(bool)arg1;
- (void)setShowsBackgroundLocationIndicator:(bool)arg1;
- (void)setUpdatingHeading:(bool)arg1;
- (void)setUpdatingLocation:(bool)arg1;
- (void)setUpdatingRanging:(bool)arg1;
- (void)setUpdatingVehicleHeading:(bool)arg1;
- (void)setUpdatingVehicleSpeed:(bool)arg1;
- (bool)showsBackgroundLocationIndicator;
- (void)updateState:(id /* block */)arg1;
- (bool)updatingHeading;
- (bool)updatingLocation;
- (bool)updatingRanging;
- (bool)updatingVehicleHeading;
- (bool)updatingVehicleSpeed;

@end
