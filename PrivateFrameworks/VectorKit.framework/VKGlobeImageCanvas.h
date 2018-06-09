/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGlobeImageCanvas : VKImageCanvas <MDSnapshotMap> {
    struct unique_ptr<md::GlobeAdapter, std::__1::default_delete<md::GlobeAdapter> > { 
        struct __compressed_pair<md::GlobeAdapter *, std::__1::default_delete<md::GlobeAdapter> > { 
            struct GlobeAdapter {} *__value_; 
        } __ptr_; 
    }  _globeAdapter;
    struct shared_ptr<md::VKGlobeStylesheet> { 
        struct VKGlobeStylesheet {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _globeStyleSheet;
    struct GlobeView { int (**x1)(); struct GeoServicesLoader {} *x2; struct ManifestManager {} *x3; struct TriggerManager {} *x4; struct shared_ptr<altitude::AnchorManager> { struct AnchorManager {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; struct DtmCacheNode {} *x6; struct DtmRequestManager {} *x7; struct FreezeViewNode {} *x8; struct Projection { struct Perspective { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_9_1_1; struct Ortho { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; double x_2_2_5; double x_2_2_6; } x_9_1_2; bool x_9_1_3; bool x_9_1_4; } x9; struct CameraFrame<geo::Radians, double> { struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_3_1; } x_1_2_1; struct Unit<RadianUnitDescription, double> { double x_2_3_1; } x_1_2_2; struct Unit<MeterUnitDescription, double> { double x_3_3_1; } x_1_2_3; } x_10_1_1; struct Unit<MeterUnitDescription, double> { double x_2_2_1; } x_10_1_2; struct Unit<RadianUnitDescription, double> { double x_3_2_1; } x_10_1_3; struct Unit<RadianUnitDescription, double> { double x_4_2_1; } x_10_1_4; struct Unit<RadianUnitDescription, double> { double x_5_2_1; } x_10_1_5; } x10; } * _globeView;
    bool  _notifyFullyDrawn;
    bool  _notifyFullyLoaded;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showsBuildings;
@property (nonatomic) bool showsVenues;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updateCameraFromGlobe;
- (void)_updateViewTransform;
- (void)_updateViewport;
- (void)cancelTileRequests;
- (void)dealloc;
- (void)didLayout;
- (void)globeDidBecomeFullyDrawn;
- (void)globeWillBecomeFullyDrawn;
- (id)initWithMapEngine:(struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<GEOResourceManifestConfiguration *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)arg1 manifestConfiguration:(id)arg2;
- (bool)isShowingNoDataPlaceholders;
- (struct LabelSettings { }*)labelSettings;
- (void)setMapDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg1;
- (void)setMapType:(long long)arg1;
- (void)setShowsBuildings:(bool)arg1;
- (void)setShowsVenues:(bool)arg1;
- (bool)showsBuildings;
- (bool)showsVenues;
- (void)update;

@end
