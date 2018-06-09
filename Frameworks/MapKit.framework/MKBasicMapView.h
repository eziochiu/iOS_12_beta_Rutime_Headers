/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKBasicMapView : UIView <GEOResourceManifestTileGroupObserver> {
    bool  _changingViewSize;
    UIView * _hostView;
    bool  _inactive;
    double  _mapModeStartTime;
    VKMapView * _mapView;
    double  _trafficStartTime;
}

@property (getter=isChangingViewSize, nonatomic, readonly) bool changingViewSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inactive;
@property (nonatomic) double mapModeStartTime;
@property (nonatomic, readonly) VKMapView *mapView;
@property (nonatomic) bool rendersInBackground;
@property (readonly) Class superclass;
@property (nonatomic) double trafficStartTime;

- (void).cxx_destruct;
- (void)_animateCanvasForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_enterBackground:(id)arg1;
- (void)_enterForeground:(id)arg1;
- (void)_finishedSnapshot:(id)arg1;
- (void)_updateForCurrentScreen;
- (void)_updateMapViewHidden;
- (void)_updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(bool)arg1 ignoreIfViewInWindow:(bool)arg2;
- (void)_updateStatsForTrafficEnabledTime:(bool)arg1;
- (void)addCalloutSubview:(id)arg1;
- (double)calloutContainerCanvasScale;
- (struct CGSize { double x1; double x2; })calloutContainerCanvasSize;
- (struct CGPoint { double x1; double x2; })convertCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 toCameraModelPointToView:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 toPointToView:(id)arg2;
- (struct CLLocationCoordinate2D { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toCoordinateFromView:(id)arg2;
- (void)dealloc;
- (void)didMoveToWindow;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (bool)inactive;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andGlobe:(bool)arg2 shouldRasterize:(bool)arg3;
- (bool)isChangingViewSize;
- (bool)isPointValidForGesturing:(struct CGPoint { double x1; double x2; })arg1;
- (double)mapModeStartTime;
- (id)mapView;
- (bool)rendersInBackground;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setInactive:(bool)arg1;
- (void)setMapModeStartTime:(double)arg1;
- (void)setRendersInBackground:(bool)arg1;
- (void)setTrafficStartTime:(double)arg1;
- (double)trafficStartTime;
- (void)updateStatsForEnablingTraffic:(bool)arg1;
- (void)updateStatsForSwitchingToMapType:(long long)arg1;
- (void)updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(bool)arg1;
- (void)updateStatsForTrafficEnabledTime;
- (void)willMoveToWindow:(id)arg1;

@end
