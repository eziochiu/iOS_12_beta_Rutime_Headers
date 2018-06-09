/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WeatherPreferences : NSObject <NSURLConnectionDelegate, WFTemperatureUnitObserver> {
    NSString * _UUID;
    NSString * _cacheDirectoryPath;
    WeatherCloudPreferences * _cloudPreferences;
    NSArray * _lastUbiquitousWrittenDefaults;
    bool  _logUnitsAndLocale;
    <WeatherPreferencesPersistence> * _persistence;
    bool  _serviceDebugging;
    NSString * _serviceHost;
    <SynchronizedDefaultsDelegate> * _syncDelegate;
    bool  _userGroupPrefsLockedWhenInit;
}

@property (retain) WeatherCloudPreferences *cloudPreferences;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLocalWeatherEnabled, setter=setLocalWeatherEnabled:, nonatomic) bool isLocalWeatherEnabled;
@property (nonatomic, readonly) NSDate *lastUpdated;
@property (nonatomic, readonly) City *localWeatherCity;
@property (readonly) Class superclass;
@property (nonatomic) <SynchronizedDefaultsDelegate> *syncDelegate;
@property (nonatomic) bool userGroupPrefsLockedWhenInit;
@property (readonly) int userTemperatureUnit;

+ (bool)performUpgradeOfPersistence:(id)arg1 fileManager:(id)arg2 error:(id*)arg3;
+ (id)preferencesWithPersistence:(id)arg1;
+ (id)readInternalDefaultValueForKey:(id)arg1;
+ (id)serviceDebuggingPath;
+ (id)sharedPreferences;
+ (id)userDefaultsPersistence;

- (void).cxx_destruct;
- (id)UUID;
- (id)_cacheDirectoryPath;
- (void)_clearCachedObjects;
- (id)_defaultCities;
- (bool)_defaultsAreValid;
- (bool)_defaultsCurrent;
- (void)adjustPrefsForLocalWeatherEnabled:(bool)arg1;
- (bool)areCitiesDefault:(id)arg1;
- (id)citiesByConsolidatingDuplicates:(id)arg1 originalOrder:(id)arg2;
- (id)citiesByConsolidatingDuplicatesInBucket:(id)arg1;
- (id)cityFromPreferencesDictionary:(id)arg1;
- (id)cloudPreferences;
- (bool)ensureValidSelectedCityID;
- (void)forceSyncCloudPreferences;
- (id)init;
- (id)initWithPersistence:(id)arg1;
- (bool)isCelsius;
- (bool)isLocalWeatherEnabled;
- (id)lastUpdated;
- (int)loadActiveCity;
- (int)loadDefaultSelectedCity;
- (id)loadDefaultSelectedCityID;
- (id)loadSavedCities;
- (id)localWeatherCity;
- (id)preferencesDictionaryForCity:(id)arg1;
- (id)readDefaultValueForKey:(id)arg1;
- (id)readInternalDefaultValueForKey:(id)arg1;
- (bool)readTemperatureUnits;
- (void)registerTemperatureUnits;
- (void)resetLocale;
- (void)saveToDiskWithCities:(id)arg1;
- (void)saveToDiskWithCities:(id)arg1 activeCity:(unsigned long long)arg2;
- (void)saveToDiskWithCity:(id)arg1 forActiveIndex:(unsigned long long)arg2;
- (void)saveToDiskWithLocalWeatherCity:(id)arg1;
- (void)saveToUbiquitousStore;
- (bool)serviceDebugging;
- (id)serviceHost;
- (void)setActiveCity:(unsigned long long)arg1;
- (void)setCelsius:(bool)arg1;
- (void)setCloudPreferences:(id)arg1;
- (void)setDefaultCities:(id)arg1;
- (void)setDefaultSelectedCity:(unsigned long long)arg1;
- (void)setDefaultSelectedCityID:(id)arg1;
- (void)setLocalWeatherEnabled:(bool)arg1;
- (void)setSyncDelegate:(id)arg1;
- (void)setUserGroupPrefsLockedWhenInit:(bool)arg1;
- (void)setupUbiquitousStoreIfNeeded;
- (id)syncDelegate;
- (void)synchronizeStateToDisk;
- (void)synchronizeStateToDiskDoNotify:(bool)arg1;
- (void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnitTo:(int)arg2;
- (id)twcLogoURL;
- (id)twcLogoURL:(id)arg1;
- (bool)userGroupPrefsLockedWhenInit;
- (int)userTemperatureUnit;
- (void)writeDefaultValue:(id)arg1 forKey:(id)arg2;

@end
