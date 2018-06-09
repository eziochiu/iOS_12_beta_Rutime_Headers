/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKDirectionsResponse : NSObject {
    MKMapItem * _destination;
    GEOComposedRoute * _geoComposedRoute;
    GEODirectionsResponse * _geoResponse;
    GEORouteSet * _routeSet;
    NSArray * _routes;
    MKMapItem * _source;
}

@property (nonatomic, readonly, retain) GEODirectionsResponse *_geoResponse;
@property (nonatomic, readonly, retain) NSString *_incidentDescription;
@property (nonatomic, readonly, retain) NSURL *_mapsURL;
@property (nonatomic, readonly) double _typicalTrafficRatio;
@property (nonatomic, readonly) MKMapItem *destination;
@property (nonatomic, readonly, retain) GEOComposedRoute *geoComposedRoute;
@property (nonatomic, readonly, retain) GEORouteSet *routeSet;
@property (nonatomic, readonly) NSArray *routes;
@property (nonatomic, readonly) MKMapItem *source;

+ (id)_responseWithGEODirectionsRouteResponse:(id)arg1 routeRequest:(id)arg2 request:(id)arg3 origin:(id)arg4 destination:(id)arg5 error:(id*)arg6;

- (void).cxx_destruct;
- (id)_completeRoutesFromRouteSet;
- (id)_geoResponse;
- (id)_incidentDescription;
- (id)_initWithGEORouteResponse:(id)arg1 routeRequest:(id)arg2 request:(id)arg3 origin:(id)arg4 destination:(id)arg5;
- (id)_mapsURL;
- (id)_route;
- (double)_typicalTrafficRatio;
- (id)destination;
- (id)geoComposedRoute;
- (id)routeSet;
- (id)routes;
- (id)source;

@end
