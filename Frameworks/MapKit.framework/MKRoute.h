/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKRoute : NSObject {
    GEOComposedRoute * _geoComposedRoute;
    MKRoutePolyline * _polyline;
    NSArray * _steps;
}

@property (nonatomic, readonly) NSArray *advisoryNotices;
@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) double expectedTravelTime;
@property (getter=_geoComposedRoute, nonatomic, readonly) GEOComposedRoute *geoComposedRoute;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) MKPolyline *polyline;
@property (nonatomic, readonly) NSArray *steps;
@property (nonatomic, readonly) unsigned long long transportType;

- (void).cxx_destruct;
- (id)_geoComposedRoute;
- (id)_initWithGEOComposedRoute:(id)arg1;
- (id)_maneuverImageForStep:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
- (id)advisoryNotices;
- (double)distance;
- (double)expectedTravelTime;
- (id)name;
- (id)polyline;
- (id)steps;
- (unsigned long long)transportType;

@end
