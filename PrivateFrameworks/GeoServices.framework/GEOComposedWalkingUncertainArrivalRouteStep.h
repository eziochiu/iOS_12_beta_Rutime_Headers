/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedWalkingUncertainArrivalRouteStep : GEOComposedWalkingRouteStep {
    NSArray * _aggregatedGEOSteps;
    unsigned int  _aggregatedStepsDistance;
    unsigned int  _aggregatedStepsDuration;
}

- (void).cxx_destruct;
- (unsigned int)_calculateAggregatedStepsDistance;
- (unsigned int)_calculateAggregatedStepsDuration;
- (unsigned int)distance;
- (unsigned int)duration;
- (id)initWithComposedRoute:(id)arg1 aggregatedGEOSteps:(id)arg2 stepIndex:(unsigned long long)arg3 pointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 maneuverPointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (bool)isUncertainArrival;

@end
