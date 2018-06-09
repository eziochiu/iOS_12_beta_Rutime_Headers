/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface WorldClockManager : NSObject {
    NSMutableArray * _cities;
    WorldClockPreferences * _defaults;
    bool  _dirty;
    NSDate * lastModified;
}

@property (nonatomic, readonly) NSArray *cities;
@property (nonatomic, retain) NSDate *lastModified;

+ (id)sharedManager;
+ (id)sharedManagerWithPreferences:(id)arg1;

- (void).cxx_destruct;
- (void)_notifyNano;
- (unsigned long long)addCity:(id)arg1;
- (void)addDefaultCitiesIfNeeded;
- (bool)canAddCity;
- (bool)checkIfCitiesModified;
- (id)cities;
- (id)cityWithIdUrl:(id)arg1;
- (id)fixUpCityProperties:(id)arg1;
- (id)initWithPreferences:(id)arg1;
- (id)lastModified;
- (void)loadCities;
- (void)moveCityFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)pushCityPropertiesToPreferences;
- (void)removeAllCities;
- (void)removeCity:(id)arg1;
- (void)removeCityAtIndex:(unsigned long long)arg1;
- (void)saveCities;
- (void)setLastModified:(id)arg1;
- (id)worldClockCityFromPersistenceArray:(id)arg1;
- (id)worldClockCityFromPersistenceDictionary:(id)arg1;
- (id)worldClockCityFromPersistenceRepresentation:(id)arg1;

@end
