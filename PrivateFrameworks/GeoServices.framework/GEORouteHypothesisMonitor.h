/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteHypothesisMonitor : NSObject <GEOETAUpdaterDelegate, NSSecureCoding> {
    GEORouteHypothesizerAnalyticsStore * _analyticsStore;
    NSDate * _arrivalDate;
    GEOMapRegion * _arrivalMapRegion;
    GEOETARoute * _baselineETARoute;
    GEOCommonOptions * _commonOptions;
    GEODirectionsRequest * _currentRequest;
    GEOComposedWaypoint * _destination;
    GEOETAUpdater * _etaUpdater;
    GEODirectionsRequestFeedback * _feedback;
    id /* block */  _handler;
    bool  _hasArrived;
    GEORouteHypothesis * _hypothesis;
    bool  _isTraveling;
    GEOLocation * _lastLocation;
    GEOLocation * _lastMatchedLocation;
    GEOETARoute * _liveETARoute;
    bool  _needReroute;
    GEOLocation * _originLocation;
    NSObject<OS_dispatch_queue> * _requestIsolationQueue;
    NSMutableArray * _rerouteEntries;
    GEOComposedRoute * _route;
    GEORouteAttributes * _routeAttributes;
    GEORouteMatch * _routeMatch;
    GEOComposedWaypoint * _source;
    NSString * _traceName;
    <GEOTTLTraceRecorder> * _traceRecorder;
    GEOMapServiceTraits * _traits;
    int  _transportType;
    double  _travelScore;
}

@property (nonatomic, readonly) NSDate *arrivalDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEOComposedWaypoint *destination;
@property (nonatomic, retain) GEODirectionsRequestFeedback *feedback;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GEORouteHypothesis *hypothesis;
@property (nonatomic, readonly) NSString *routeName;
@property (nonatomic, readonly) GEOComposedWaypoint *source;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsDirections;
@property (nonatomic, readonly) bool supportsLiveTraffic;
@property (nonatomic, readonly) int transportType;

+ (id)monitorWithSource:(id)arg1 toDestination:(id)arg2 transportType:(int)arg3 arrivalDate:(id)arg4 traceName:(id)arg5 traits:(id)arg6;
+ (id)serverFormattedStringFormatter;
+ (void)setServerFormattedStringFormatter:(id)arg1;
+ (void)setTTLTraceRecorderFactory:(id)arg1;
+ (void)setUserPreferencesProvider:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)ttlTraceRecorderFactory;
+ (id)userPreferencesProvider;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_executeBlockAccessingCurrentRequest:(id /* block */)arg1;
- (void)_fetchETAWithRouteMatch:(id)arg1;
- (void)_finishEtaUpdaterInit;
- (bool)_hasInitialRoute;
- (void)_recalculateETAWithRouteMatch:(id)arg1;
- (void)_recievedRouteResponse:(id)arg1 forLocation:(id)arg2 isReroute:(bool)arg3;
- (void)_recordTraceForEvent:(long long)arg1 parameters:(id)arg2;
- (void)_requestNewRouteFromLocation:(id)arg1 usualRouteData:(id)arg2;
- (void)_routeRequestFailed:(id)arg1;
- (void)_showDebugAlert;
- (void)_updateLocation:(id)arg1 allowServer:(bool)arg2;
- (void)_updateRouteMatchETAAndTravelState;
- (void)_updateScoreForLocation:(id)arg1;
- (id)arrivalDate;
- (void)callHandlerIvar;
- (void)cancelCurrentRequest;
- (void)checkRouteForLocation:(id)arg1;
- (void)clientDisplayedUINotification:(unsigned long long)arg1;
- (void)dealloc;
- (id)description;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2;
- (void)etaUpdater:(id)arg1 receivedError:(id)arg2;
- (void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2;
- (void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4;
- (void)etaUpdaterRequestCompleted:(id)arg1;
- (id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1;
- (void)etaUpdaterUpdatedETA:(id)arg1;
- (id)feedback;
- (id)hypothesis;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 transportType:(int)arg3 arrivalDate:(id)arg4 traceName:(id)arg5 traits:(id)arg6;
- (void)recordETAUpdatesAfterEventStart;
- (id)routeMatchForLocation:(id)arg1;
- (id)routeName;
- (void)setFeedback:(id)arg1;
- (id)source;
- (void)stopMonitoring;
- (bool)supportsDirections;
- (bool)supportsLiveTraffic;
- (int)transportType;
- (void)travelStateChanged;
- (void)updateLocation:(id)arg1 allowServer:(bool)arg2 hypothesisHandler:(id /* block */)arg3;

@end
