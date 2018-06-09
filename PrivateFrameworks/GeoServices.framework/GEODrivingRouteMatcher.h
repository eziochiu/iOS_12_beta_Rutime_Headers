/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODrivingRouteMatcher : GEORouteMatcher {
    GEORouteRoadMatcher * _routeRoadMatcher;
    bool  _supportsSnapping;
}

- (void).cxx_destruct;
- (id)_candidateForSegment:(id)arg1 location:(id)arg2 previousRouteMatch:(id)arg3;
- (double)_courseWeightForLocation:(id)arg1 accuracyType:(long long)arg2;
- (void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (double)_maxCourseDelta:(id)arg1 previousRouteMatch:(id)arg2 timeSinceTunnel:(double)arg3;
- (double)_maxMatchDistance:(double)arg1 routeIndex:(unsigned int)arg2 previousRouteMatch:(id)arg3 timeSinceTunnel:(double)arg4;
- (double)_modifiedCourseAccuracyForLocation:(id)arg1 previousRouteMatch:(id)arg2;
- (double)_modifiedHorizontalAccuracy:(double)arg1 routeIndex:(unsigned int)arg2;
- (void)_snapRouteMatchToRoad:(id)arg1;
- (id)_startStepForPreviousRouteMatch:(id)arg1;
- (void)dealloc;
- (id)initWithRoute:(id)arg1;

@end
