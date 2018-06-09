/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedTransitTripRouteStep : GEOComposedTransitRouteStep {
    NSArray * _arrivalTimes;
    bool  _canPreloadTiles;
    double  _departureTimeIntervalMax;
    double  _departureTimeIntervalMin;
    NSArray * _departureTimes;
    bool  _isBus;
    bool  _isRail;
    NSArray * _routeLineArtwork;
    <GEOTransitLine> * _transitLine;
    <GEOTransitSystem> * _transitSystem;
    GEOTransitVehicleInfo * _transitVehicle;
}

@property (nonatomic, readonly) NSDate *arrivalTime;
@property (nonatomic, readonly) NSTimeZone *arrivalTimeZone;
@property (nonatomic, readonly) NSArray *arrivalTimes;
@property (nonatomic, readonly) bool canPreloadTilesForThisStep;
@property (nonatomic, readonly) NSDate *departureTime;
@property (nonatomic, readonly) double departureTimeIntervalMax;
@property (nonatomic, readonly) double departureTimeIntervalMin;
@property (nonatomic, readonly) NSTimeZone *departureTimeZone;
@property (nonatomic, readonly) NSArray *departureTimes;
@property (nonatomic, readonly) bool isBus;
@property (nonatomic, readonly) bool isRail;
@property (nonatomic, readonly) NSArray *routeLineArtwork;
@property (nonatomic, readonly) <GEOTransitLine> *transitLine;
@property (nonatomic, readonly) <GEOTransitSystem> *transitSystem;
@property (nonatomic, readonly) GEOTransitVehicleInfo *transitVehicle;
@property (nonatomic, readonly) GEOComposedTransitTripRouteLeg *tripLeg;

- (void).cxx_destruct;
- (id)arrivalTime;
- (id)arrivalTimeZone;
- (id)arrivalTimes;
- (bool)canPreloadTilesForThisStep;
- (id)departureTime;
- (double)departureTimeIntervalMax;
- (double)departureTimeIntervalMin;
- (id)departureTimeZone;
- (id)departureTimes;
- (id)description;
- (unsigned int)duration;
- (bool)hasDuration;
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 step:(id)arg3 stepIndex:(unsigned long long)arg4 duration:(unsigned int)arg5 pointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6;
- (bool)isBus;
- (bool)isRail;
- (id)routeLineArtwork;
- (id)transitLine;
- (id)transitSystem;
- (id)transitVehicle;
- (id)tripLeg;

@end
