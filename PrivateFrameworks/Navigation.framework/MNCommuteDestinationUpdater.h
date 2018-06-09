/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNCommuteDestinationUpdater : NSObject <MNCommuteDestinationScoreObserver, MNLocationTrackerDelegate> {
    MNCommuteDestination * _commuteDestination;
    <MNCommuteDestinationUpdaterDelegate> * _delegate;
    MNLocation * _lastLocation;
    MNCommuteLocationTracker * _locationTracker;
    NSDictionary * _scores;
    unsigned long long  _suggestionID;
    MNTimeAndDistanceUpdater * _timeAndDistanceUpdater;
    MNNavigationTraceManager * _traceManager;
}

@property (nonatomic, readonly) MNCommuteDestination *commuteDestination;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MNCommuteDestinationUpdaterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) MNCommuteDestinationGeodesicDistanceScore *geodesicDistanceScore;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MNLocation *lastLocation;
@property (nonatomic, readonly) MNCommuteDestinationMapsSuggestionsScore *mapsSuggestionsScore;
@property (nonatomic, readonly) MNCommuteDestinationOffRouteScore *offRouteScore;
@property (nonatomic, readonly) NSDictionary *scores;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) MNCommuteDestinationStartEndTimeScore *startEndTimeScore;
@property (nonatomic) unsigned long long suggestionID;
@property (readonly) Class superclass;

+ (id)scoreClasses;
+ (id)sessionStartDate;
+ (void)setSessionStartDate:(id)arg1;

- (void).cxx_destruct;
- (id)_generateScoreObjects;
- (void)_updateDestination;
- (id)commuteDestination;
- (void)commuteScoreUpdaterDidUpdate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)endDate;
- (id)geodesicDistanceScore;
- (id)initWithSuggestion:(id)arg1 traceManager:(id)arg2;
- (id)lastLocation;
- (void)locationTracker:(id)arg1 didReroute:(id)arg2 newAlternateRoutes:(id)arg3 rerouteReason:(unsigned long long)arg4 request:(id)arg5 response:(id)arg6;
- (void)locationTracker:(id)arg1 didUpdateETAForRoute:(id)arg2;
- (void)locationTracker:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)locationTrackerDidArrive:(id)arg1;
- (void)locationTrackerDidCancelReroute:(id)arg1;
- (void)locationTrackerWillReroute:(id)arg1;
- (id)mapsSuggestionsScore;
- (id)offRouteScore;
- (id)route;
- (id)scores;
- (void)setDelegate:(id)arg1;
- (void)setLastLocation:(id)arg1;
- (void)setSuggestionID:(unsigned long long)arg1;
- (void)start;
- (id)startDate;
- (id)startEndTimeScore;
- (void)stop;
- (unsigned long long)suggestionID;
- (void)updateComparisonDestination:(id)arg1 ofType:(unsigned long long)arg2;
- (void)updateETA;
- (void)updateForLocation:(id)arg1;
- (void)updateLocationHistory:(id)arg1;
- (void)updateMapsActive:(bool)arg1;

@end
