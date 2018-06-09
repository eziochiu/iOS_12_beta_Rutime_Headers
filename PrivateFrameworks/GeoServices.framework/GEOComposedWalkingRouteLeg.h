/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedWalkingRouteLeg : GEOComposedRouteLeg {
    <GEOTransitRoutingIncidentMessage> * _transitRouteDetailsIncidentMessage;
    <GEOTransitRoutingIncidentMessage> * _transitSteppingIncidentMessage;
}

@property (nonatomic, readonly) GEOComposedTransitWalkingRouteStep *arrivalStep;
@property (nonatomic, readonly) GEOComposedWalkingRouteStep *lastWalkingStep;
@property (nonatomic, readonly) <GEOTransitRoutingIncidentMessage> *transitRouteDetailsIncidentMessage;
@property (nonatomic, readonly) <GEOTransitRoutingIncidentMessage> *transitSteppingIncidentMessage;

- (void).cxx_destruct;
- (id)arrivalStep;
- (id)initWithComposedRoute:(id)arg1 stepRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 pointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 transitSteppingIncidentMessage:(id)arg4 transitRouteDetailsIncidentMessage:(id)arg5;
- (id)lastWalkingStep;
- (id)transitRouteDetailsIncidentMessage;
- (id)transitSteppingIncidentMessage;

@end
