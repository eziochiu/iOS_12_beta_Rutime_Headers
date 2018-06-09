/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEORouteMatchUpdater_EnterBoard : _GEORouteMatchUpdater {
    GEOComposedRouteStep * _boardVehicleStep;
    GEOComposedRouteStep * _enterStationStep;
    struct { 
        double latitude; 
        double longitude; 
    }  _entranceCoordinate;
    bool  _hasEnteredStation;
    GEOComposedTransitTripRouteStep * _rideStep;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeCoordinateApproaching;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeCoordinateAtStation;
    GEOPBTransitStation * _transitStation;
    GEOPBTransitStop * _transitStop;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_hasLocationEnteredStation:(id)arg1 routeMatch:(id)arg2;
- (bool)_hasLocationExitedStation:(id)arg1;
- (bool)_isLocationNearAccessPoint:(id)arg1;
- (bool)_isLocationNearEndOfWalkingLeg:(id)arg1;
- (bool)_isLocationNearTransitNode:(id)arg1;
- (id)initWithTransitRouteMatcher:(id)arg1 boardVehicleStep:(id)arg2;
- (bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;

@end
