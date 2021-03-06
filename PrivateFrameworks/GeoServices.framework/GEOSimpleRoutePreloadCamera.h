/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSimpleRoutePreloadCamera : NSObject <GEORoutePreloadCamera> {
    unsigned long long  _zoomLevel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)implicateTilesForCoordinate:(struct { double x1; double x2; })arg1 route:(id)arg2 nearestRoutePointIdx:(double)arg3 stepNearManeuever:(bool)arg4 into:(id)arg5 stepSize:(double)arg6 maneuverSize:(double)arg7 tileSetStyles:(id)arg8;
- (id)initWithZoomLevel:(unsigned long long)arg1;
- (unsigned long long)zoomLevel;

@end
