/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsTracker : NSObject <MapsSuggestionsObject> {
    GEOAutomobileOptions * _automobileOptions;
    CLLocation * _currentLocation;
    struct NSMutableDictionary { Class x1; } * _distanceTitleFormatters;
    MapsSuggestionsDonater * _donater;
    MapsSuggestionsETARequester * _etaRequester;
    struct NSMutableDictionary { Class x1; } * _etaTitleFormatters;
    GEOLocationShifter * _locationShifter;
    MapsSuggestionsManager * _manager;
    int  _mapType;
    MapsSuggestionsNetworkRequester * _networkRequester;
    NSObject<OS_dispatch_queue> * _queue;
    double  _refreshDeferTime;
    double  _refreshInterval;
    NSObject<OS_dispatch_source> * _refreshTimer;
    MapsSuggestionsETARequirements * _requirements;
    bool  _shouldBeRunning;
    MapsSuggestionsMutableWeakEntries * _trackedEntries;
    int  _transportType;
}

@property (nonatomic, retain) GEOAutomobileOptions *automobileOptions;
@property (retain) CLLocation *currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int mapType;
@property (nonatomic, retain) MapsSuggestionsNetworkRequester *networkRequester;
@property (copy) MapsSuggestionsETARequirements *requirements;
@property (readonly) Class superclass;
@property (nonatomic, retain) MapsSuggestionsMutableWeakEntries *trackedEntries;
@property (nonatomic, readonly) NSString *uniqueName;

+ (bool)_isLocationShiftRequiredForLocation:(id)arg1;

- (void).cxx_destruct;
- (void)_decorateEntry:(id)arg1 eta:(id)arg2;
- (id)_distanceTitleFormatterForType:(unsigned long long)arg1;
- (id)_etaTitleFormatterForType:(unsigned long long)arg1;
- (bool)_hasTitleFormatterForType:(unsigned long long)arg1;
- (void)_prepareShiftForLocation:(id)arg1 withCompletionHandler:(id /* block */)arg2 withShiftRequestBlock:(id /* block */)arg3;
- (void)_refresh;
- (void)_requestDistances;
- (void)_requestETAs;
- (void)_resetAllTitleFormatting;
- (void)_scheduleRefresh;
- (void)_scheduleRefreshIfCurrentLocationIsMuchBetterThanLocation:(id)arg1;
- (void)_shiftLocation:(id)arg1 withCompletionHandler:(id /* block */)arg2 callbackQueue:(id)arg3;
- (void)_unschedule;
- (id)automobileOptions;
- (id)currentLocation;
- (void)dealloc;
- (id)initWithManager:(id)arg1 requirements:(id)arg2;
- (id)location;
- (int)mapType;
- (id)networkRequester;
- (id)requirements;
- (void)resetAllTitleFormatting;
- (void)scheduleRefresh;
- (void)setAutomobileOptions:(id)arg1;
- (void)setCurrentLocation:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMapType:(int)arg1;
- (void)setNetworkRequester:(id)arg1;
- (void)setRequirements:(id)arg1;
- (void)setTitleFormatter:(id)arg1 forType:(unsigned long long)arg2;
- (void)setTrackedEntries:(id)arg1;
- (void)trackSuggestionEntries:(struct NSArray { Class x1; }*)arg1 transportType:(int)arg2;
- (id)trackedEntries;
- (struct NSString { Class x1; }*)uniqueName;
- (void)unschedule;

@end
