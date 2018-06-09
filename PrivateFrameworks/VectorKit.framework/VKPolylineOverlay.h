/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPolylineOverlay : NSObject <GEOComposedRouteObserver, VKOverlay> {
    GEOComposedRoute * _composedRoute;
    bool  _isReadyForSnapping;
    struct __CFSet { } * _observers;
    VKRouteLine * _routeRibbon;
    <VKPolylineOverlayRouteRibbonObserver> * _routeRibbonObserver;
    bool  _selected;
    bool  _showTraffic;
    struct TrafficSegmentsAlongRoute { struct vector<md::TrafficSegment, std::__1::allocator<md::TrafficSegment> > { struct TrafficSegment {} *x_1_1_1; struct TrafficSegment {} *x_1_1_2; struct __compressed_pair<md::TrafficSegment *, std::__1::allocator<md::TrafficSegment> > { struct TrafficSegment {} *x_3_2_1; } x_1_1_3; } x1; } * _trafficSegments;
    double  _trafficTimeStamp;
}

@property (nonatomic, readonly) GEOMapRegion *boundingMapRegion;
@property (nonatomic, readonly) GEOComposedRoute *composedRoute;
@property (nonatomic, readonly) bool containsTransit;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) VKRouteLine *routeRibbon;
@property (nonatomic) <VKPolylineOverlayRouteRibbonObserver> *routeRibbonObserver;
@property (nonatomic) bool selected;
@property (nonatomic) bool showTraffic;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double trafficTimeStamp;

- (void)_setNeedsLayout;
- (void)_updateTraffic;
- (void)addObserver:(id)arg1;
- (id)boundingMapRegion;
- (void)clearSnappedPathsForObserver:(id)arg1;
- (id)composedRoute;
- (void)composedRoute:(id)arg1 changedSelectedRideInClusteredLeg:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)composedRoute:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;
- (void)composedRouteUpdatedSnappedPaths:(id)arg1;
- (void)composedRouteUpdatedTraffic:(id)arg1;
- (bool)containsTransit;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)getPathsForRenderRegion:(id)arg1 shouldSnapToRoads:(bool)arg2 verifySnapping:(bool)arg3 observer:(id)arg4;
- (id)initWithComposedRoute:(id)arg1;
- (bool)isSnappingForSceneTiles;
- (void)removeObserver:(id)arg1;
- (id)routeRibbon;
- (id)routeRibbonObserver;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })sectionRangeForBounds:(struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; })arg1;
- (bool)selected;
- (void)setRouteRibbon:(id)arg1;
- (void)setRouteRibbonObserver:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShowTraffic:(bool)arg1;
- (bool)showTraffic;
- (double)trafficTimeStamp;

@end
