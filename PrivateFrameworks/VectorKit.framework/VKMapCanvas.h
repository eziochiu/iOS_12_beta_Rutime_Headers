/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapCanvas : VKScreenCanvas <VKInteractiveMap, VKMapDataAccess, VKMapModelDelegate> {
    struct shared_ptr<md::AnchorContext> { 
        struct AnchorContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _anchorContext;
    double  _canonicalSkyHeight;
    VKCamera * _defaultTrackingCamera;
    <VKInteractiveMapDelegate> * _delegate;
    bool  _hasLastValidCanvasSizeZoomLevel;
    VKTimedAnimation * _horizontalOffsetAnimation;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastCanvasSize;
    float  _lastValidCanvasSizeZoomLevel;
    VKMapModel * _map;
}

@property (nonatomic, retain) GEOResourceManifestConfiguration *additionalManifestConfiguration;
@property (nonatomic) double canonicalSkyHeight;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) VKCamera *defaultTrackingCamera;
@property (nonatomic) <VKInteractiveMapDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) VKAnchorWrapper *externalAnchors;
@property (getter=isFullyDrawn, nonatomic, readonly) bool fullyDrawn;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) VKMapModel *map;
@property (nonatomic) long long mapType;
@property (nonatomic, readonly) NSArray *rasterOverlays;
@property (nonatomic) <VKRouteMatchedAnnotationPresentation> *routeLineSplitAnnotation;
@property (nonatomic, retain) <GEORoutePreloadSession> *routePreloadSession;
@property (nonatomic, readonly) VKSceneConfiguration *sceneConfiguration;
@property (nonatomic) bool shouldLoadFallbackTiles;
@property (nonatomic) bool shouldLoadMapMargin;
@property (nonatomic) bool showsBuildings;
@property (nonatomic) bool showsVenues;
@property (nonatomic) struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; } styleManager;
@property (readonly) Class superclass;
@property (nonatomic) bool trafficEnabled;
@property (nonatomic) bool trafficIncidentsEnabled;
@property (nonatomic, readonly) NSArray *visibleTileSets;

+ (bool)supportsMapType:(long long)arg1 scale:(int)arg2 manifestConfiguration:(id)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; })_lookAtToCameraFrame:(const struct Matrix<double, 3, 1> { double x1[3]; }*)arg1 target:(const struct Matrix<double, 3, 1> { double x1[3]; }*)arg2 up:(const struct Matrix<double, 3, 1> { double x1[3]; }*)arg3;
- (void)_setStyleTransitionProgress:(double)arg1 targetStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg2 step:(long long)arg3;
- (double)_styleTransitionProgress;
- (void)_updateViewTransform;
- (void)addExternalAnchor:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (void)addRasterOverlay:(id)arg1;
- (id)additionalManifestConfiguration;
- (id /* block */)annotationCoordinateTest;
- (id /* block */)annotationRectTest;
- (unsigned char)applicationUILayout;
- (id)attributionsForCurrentRegion;
- (void)beginStyleAnimationGroup;
- (id)boundsForSelectedTransitLines;
- (struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; })buildingMarkerAtScreenPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(bool)arg2;
- (void)cameraController:(id)arg1 canZoomInDidChange:(bool)arg2;
- (void)cameraController:(id)arg1 canZoomOutDidChange:(bool)arg2;
- (void)cameraController:(id)arg1 didBecomePitched:(bool)arg2;
- (void)cameraController:(id)arg1 didChangeRegionAnimated:(bool)arg2;
- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)cameraController:(id)arg1 willChangeRegionAnimated:(bool)arg2;
- (void)cameraControllerDidChangeCameraState:(id)arg1;
- (void)cameraControllerDidFinishInitialTrackingAnimation:(id)arg1;
- (void)cameraControllerDidLeaveDefaultZoom:(id)arg1;
- (void)cameraControllerDidReturnToDefaultZoom:(id)arg1;
- (void)cameraControllerHasStartedPanning:(id)arg1;
- (void)cameraControllerHasStoppedPanning:(id)arg1;
- (void)cameraControllerRequestsLayout:(id)arg1;
- (double)canonicalSkyHeight;
- (void)clearScene;
- (id)consoleString:(bool)arg1;
- (struct CGPoint { double x1; double x2; })convertCoordinateToCameraModelPoint:(struct { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertCoordinateToPoint:(struct { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertMapPointToPoint:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })convertPointToCoordinate:(struct CGPoint { double x1; double x2; })arg1;
- (struct { double x1; double x2; })convertPointToMapPoint:(struct CGPoint { double x1; double x2; })arg1;
- (long long)currentMapMode;
- (float)currentRoadSignOffset;
- (bool)currentSceneRequiresMSAA;
- (void)dealloc;
- (void)debugHighlightFeatureMarker:(const struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (void)debugHighlightObjectAtPoint:(struct CGPoint { double x1; double x2; })arg1 highlightTarget:(unsigned char)arg2;
- (id)debugLabelString:(bool)arg1;
- (id)defaultTrackingCamera;
- (id)delegate;
- (void)deselectTransitLineMarker;
- (id)detailedDescription;
- (id)detailedDescriptionDictionaryRepresentation;
- (void)didBeginTransitionToTransit;
- (double)displayZoomLevel;
- (unsigned char)emphasis;
- (void)endStyleAnimationGroup;
- (id)externalAnchors;
- (struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; })featureMarkerAtScreenPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)finishStyleBlend;
- (void)forceSceneLoad;
- (double)fovAdjustment;
- (void)gglWillDrawWithTimestamp;
- (void)goToTileX:(int)arg1 Y:(int)arg2 Z:(int)arg3 tileSize:(int)arg4;
- (struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; })groundCoordinateForScreenPixel:(const struct Matrix<double, 2, 1> { double x1[2]; }*)arg1 cameraFrame:(const struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; }*)arg2;
- (double)heightAtCoordinate:(const struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; }*)arg1;
- (id)initWithMapEngine:(struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<GEOResourceManifestConfiguration *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)arg1 inBackground:(bool)arg2;
- (void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2;
- (bool)isFullyDrawn;
- (bool)isPointValidForGesturing:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isShowingNoDataPlaceholders;
- (struct LabelSettings { }*)labelSettings;
- (id)map;
- (void)mapModel:(id)arg1 didUpdateContainsOverlay:(bool)arg2;
- (void)mapModel:(id)arg1 labelMarkerDidChangeState:(const struct shared_ptr<md::LabelMarker> { }*)arg2;
- (void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(const struct shared_ptr<md::LabelMarker> { }*)arg2;
- (void)mapModel:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
- (void)mapModelDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(bool)arg2;
- (void)mapModelDidBecomePartiallyDrawn:(id)arg1;
- (void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapModelDidFinishLoadingTiles:(id)arg1;
- (void)mapModelDidReloadStylesheet:(id)arg1;
- (void)mapModelDidStartLoadingTiles:(id)arg1;
- (void)mapModelDidUpdateMinMaxZoomLevel:(id)arg1;
- (void)mapModelLabelsDidLayout:(id)arg1;
- (void)mapModelStylesheetDidChange:(id)arg1;
- (void)mapModelWillBecomeFullyDrawn:(id)arg1;
- (long long)mapType;
- (id)navigationPuck;
- (id)overlays;
- (id)persistentOverlays;
- (void)populateDebugNode:(struct shared_ptr<md::DebugTreeNode> { struct DebugTreeNode {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)preloadNavigationSceneResourcesWithDevice:(const struct shared_ptr<ggl::Device> { struct Device {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)projectionMatrix;
- (id)rasterOverlays;
- (void)reloadStylesheet;
- (void)removeExternalAnchor:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)removePersistentOverlay:(id)arg1;
- (void)removeRasterOverlay:(id)arg1;
- (void)requestStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg2 setupHandler:(id /* block */)arg3;
- (void)resetTileContainers;
- (struct RigidTransform<double> { struct Quaternion<double> { struct Matrix<double, 3, 1> { double x_1_2_1[3]; } x_1_1_1; double x_1_1_2; } x1; struct Matrix<double, 3, 1> { double x_2_1_1[3]; } x2; })rigidTransformForFrame:(const struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; }*)arg1;
- (struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; })rotateCameraFrameAboutCoordinate:(const struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; }*)arg1 coordinate:(struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; })arg2 deltaAngle:(double)arg3;
- (id)routeLineSplitAnnotation;
- (id)routePreloadSession;
- (id)sceneConfiguration;
- (struct Matrix<double, 2, 1> { double x1[2]; })screenPixelForCoordinate:(const struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; }*)arg1 cameraFrame:(const struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; }*)arg2;
- (void)selectTransitLineMarker:(id)arg1;
- (id)selectedTransitLineIDs;
- (void)setAdditionalManifestConfiguration:(id)arg1;
- (void)setApplicationState:(unsigned char)arg1;
- (void)setApplicationUILayout:(unsigned char)arg1;
- (void)setCameraFrame:(const struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; }*)arg1;
- (void)setCameraHorizontalOffset:(double)arg1 duration:(double)arg2 timingFunction:(id)arg3;
- (void)setCanonicalSkyHeight:(double)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setDefaultTrackingCamera:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredMapMode:(long long)arg1 immediate:(bool)arg2;
- (void)setEmphasis:(unsigned char)arg1;
- (void)setMapType:(long long)arg1;
- (void)setMapType:(long long)arg1 animated:(bool)arg2;
- (void)setNavCameraIsDetached:(bool)arg1;
- (void)setRouteContext:(id)arg1;
- (void)setRouteLineSplitAnnotation:(id)arg1;
- (void)setRoutePreloadSession:(id)arg1;
- (void)setShouldLimitTrackingCameraHeight:(bool)arg1;
- (void)setShouldLoadFallbackTiles:(bool)arg1;
- (void)setShouldLoadMapMargin:(bool)arg1;
- (void)setShowsBuildings:(bool)arg1;
- (void)setShowsPointsOfInterest:(bool)arg1;
- (void)setShowsVenues:(bool)arg1;
- (void)setStyleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setStylesheetMapDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg1;
- (void)setStylesheetName:(const struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; }*)arg1;
- (void)setTargetDisplay:(unsigned char)arg1;
- (void)setTrafficEnabled:(bool)arg1;
- (void)setTrafficIncidentsEnabled:(bool)arg1;
- (void)setVehicleState:(struct VehicleState { bool x1; })arg1;
- (bool)shouldHideOffscreenSelectedAnnotation;
- (bool)shouldLoadFallbackTiles;
- (bool)shouldLoadMapMargin;
- (bool)showsBuildings;
- (bool)showsPointsOfInterest;
- (bool)showsVenues;
- (struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })sourceMapDisplayStyle;
- (struct shared_ptr<gss::CartoStyle<gss::PropertyID> > { struct CartoStyle<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })styleAtScreenPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct shared_ptr<gss::CartoStyle<gss::PropertyID> > { struct CartoStyle<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })styleForFeature:(const struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })styleManager;
- (struct shared_ptr<gss::StyleSheet<gss::PropertyID> > { struct StyleSheet<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })stylesheet;
- (void)stylesheetAnimationDidEnd:(bool)arg1;
- (void)stylesheetAnimationDidProgress:(float)arg1;
- (void)stylesheetAnimationWillStartFromStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg1 toStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg2;
- (bool)supportsMapDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg1;
- (unsigned char)targetDisplay;
- (long long)tileSize;
- (bool)trafficEnabled;
- (bool)trafficIncidentsEnabled;
- (void)transferStateFromCanvas:(id)arg1;
- (id)transitLineMarkersForSelectionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)transitLineMarkersInCurrentViewport;
- (void)transitionToTracking:(bool)arg1 mapMode:(long long)arg2 startLocation:(struct { double x1; double x2; })arg3 startCourse:(double)arg4 cameraController:(id)arg5 pounceCompletionHandler:(id /* block */)arg6;
- (double)unitsPerMeterAtLatitude:(struct Unit<RadianUnitDescription, double> { double x1; })arg1;
- (struct Matrix<double, 3, 1> { double x1[3]; })upForCoordinate:(const struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; }*)arg1;
- (void)updateCameraForFrameResize;
- (struct VehicleState { bool x1; })vehicleState;
- (id)visibleTileSets;
- (struct Matrix<double, 4, 4> { double x1[16]; })worldViewProjectionMatrix:(const struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<RadianUnitDescription, double> { double x_5_1_1; } x5; }*)arg1;

@end
