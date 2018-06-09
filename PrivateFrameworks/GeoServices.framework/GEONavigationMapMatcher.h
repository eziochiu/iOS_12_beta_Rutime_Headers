/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigationMapMatcher : NSObject {
    bool  _isSimulation;
    GEOLocationShifter * _locationShifter;
    GEONavigationMatchResult * _previousMatchResult;
    GEORoadMatcher * _roadMatcher;
    GEOComposedRoute * _route;
    GEORouteMatcher * _routeMatcher;
}

@property (nonatomic) bool isSimulation;
@property (nonatomic, retain) GEOLocationShifter *locationShifter;
@property (nonatomic, retain) GEONavigationMatchResult *previousMatchResult;
@property (nonatomic, retain) GEORoadMatcher *roadMatcher;
@property (nonatomic, retain) GEOComposedRoute *route;
@property (nonatomic, retain) GEORouteMatcher *routeMatcher;

- (void).cxx_destruct;
- (id)_routeMatcherForRoute:(id)arg1;
- (id)initWithRoute:(id)arg1;
- (bool)isSimulation;
- (id)locationShifter;
- (id)matchLocation:(id)arg1 transportType:(int)arg2;
- (id)previousMatchResult;
- (void)resetToLocation:(id)arg1;
- (id)roadMatcher;
- (id)route;
- (id)routeMatcher;
- (void)setIsSimulation:(bool)arg1;
- (void)setLocationShifter:(id)arg1;
- (void)setPreviousMatchResult:(id)arg1;
- (void)setRoadMatcher:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteMatcher:(id)arg1;
- (void)setShouldSnapRouteMatchToRoute:(bool)arg1;
- (int)transportType;
- (id)updateForReroute:(id)arg1 location:(id)arg2;

@end
