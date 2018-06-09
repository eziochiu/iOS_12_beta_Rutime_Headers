/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface LabelNavRouteLabeler : NSObject {
    struct vector<std::__1::shared_ptr<md::NavLabel>, geo::StdAllocator<std::__1::shared_ptr<md::NavLabel>, lhp::Allocator> > { 
        struct shared_ptr<md::NavLabel> {} *__begin_; 
        struct shared_ptr<md::NavLabel> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<md::NavLabel> *, geo::StdAllocator<std::__1::shared_ptr<md::NavLabel>, lhp::Allocator> > { 
            struct shared_ptr<md::NavLabel> {} *__value_; 
            struct StdAllocator<std::__1::shared_ptr<md::NavLabel>, lhp::Allocator> { 
                struct Allocator {} *_allocator; 
            } __value_; 
        } __end_cap_; 
    }  _activeSigns;
    struct VKLabelNavArtworkCache { struct unique_ptr<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_1_1_1; } x1; struct unique_ptr<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_2_1_1; } x2; struct unique_ptr<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_3_1_1; } x3; } * _artworkCache;
    bool  _checkIfRouteSubrangeChanged;
    bool  _checkOnRouteLabelsAlignment;
    unsigned long long  _countVisibleOffRouteRoadSigns;
    unsigned long long  _countVisibleOnRouteRoadSigns;
    unsigned long long  _countVisibleRoadSigns;
    NSString * _currentLocationText;
    NSString * _currentRoadName;
    long long  _currentRoadNameIndex;
    struct shared_ptr<md::NavCurrentRoadSign> { 
        struct NavCurrentRoadSign {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _currentRoadSign;
    NSString * _currentShieldGroup;
    unsigned long long  _debugCachedMaxVisibleOffRouteRoadSigns;
    unsigned long long  _debugCachedMaxVisibleOnRouteRoadSigns;
    bool  _debugDisableRoadSignLimit;
    bool  _debugEnableShieldsOnRouteLine;
    bool  _disableTileParseForOneLayout;
    bool  _drawRoadSigns;
    /* Warning: unhandled struct encoding: '{vector<VKLabelNavRoadLabel *, geo::StdAllocator<VKLabelNavRoadLabel *, lhp::Allocator> >="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<VKLabelNavRoadLabel **, geo::StdAllocator<VKLabelNavRoadLabel *, lhp::Allocator> >="__value_"^@"__value_"{StdAllocator<VKLabelNavRoadLabel *, lhp::Allocator>="_allocator"^{Allocator}}}}' */ struct vector<VKLabelNavRoadLabel *, geo::StdAllocator<VKLabelNavRoadLabel *, lhp::Allocator> > { 
        __end_ **__begin_; 
    }  _externalCollisionLabelsForLayout;
    NSMutableArray * _fadingLabels;
    NSMutableArray * _guidanceStepInfos;
    bool  _isOnRoute;
    NSMutableArray * _junctions;
    unsigned long long  _maxOnRoadGraphRoadSigns;
    unsigned long long  _maxVisibleOffRouteRoadSigns;
    unsigned long long  _maxVisibleOnRouteRoadSigns;
    unsigned long long  _maxVisibleRoadSigns;
    float  _minSignOffsetDistance;
    unsigned long long  _minVisibleOffRoadGraphRoadSigns;
    unsigned long long  _minVisibleProceedToRouteRoadSigns;
    bool  _needsLayout;
    NSMutableSet * _pendingTiles;
    bool  _preferRightSideLabelPlacement;
    VKLabelNavRoadGraph * _roadGraph;
    NSMutableSet * _roadNamesInGuidance;
    VKPolylineOverlay * _route;
    NSMutableArray * _routeRoadInfos;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeSubrangeEnd;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeSubrangeStart;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeUserOffset;
    bool  _shouldLabelOppositeCarriageways;
    unsigned long long  _stepIndex;
    struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { 
        struct StylesheetManager<gss::PropertyID> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _styleManager;
    NSMutableSet * _tiles;
    bool  _useRouteSubrange;
    NSMutableArray * _visibleLabels;
    NSMutableDictionary * _visibleLabelsByName;
}

@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<md::NavLabel>' */ struct *activeSigns; /* unknown property attribute:  lhp::Allocator>=^{Allocator}}}} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{VKLabelNavArtworkCache={unique_ptr<LRUCache<unsigned long' */ struct *artworkCache; /* unknown property attribute:  std::__1::hash<unsigned long> >}}}^{CGColor}^{CGColor}{VKGuidanceManeuverArrowMetrics={CGSize=dd}ddd{CGSize=dd}dddCddddddddddddddddBdddBB}} */
@property (nonatomic, retain) NSString *currentLocationText;
@property (nonatomic, retain) NSString *currentRoadName;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{NavCurrentRoadSign=^^?{basic_string<char' */ struct *currentRoadSign; /* unknown property attribute:  1>=[2f]}}BBBfBBff} */
@property (nonatomic, readonly) float currentRoadSignPixelHeight;
@property (nonatomic, retain) NSString *currentShieldGroup;
@property (nonatomic) bool debugDisableRoadSignLimit;
@property (nonatomic) bool debugEnableShieldsOnRouteLine;
@property (nonatomic) bool drawRoadSigns;
@property (nonatomic, readonly) bool needsLayout;
@property (nonatomic, retain) VKPolylineOverlay *route;
@property (nonatomic) struct PolylineCoordinate { unsigned int x1; float x2; } routeUserOffset;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_addJunctionsForTile:(id)arg1;
- (void)_addLabelsAtJunctions:(id)arg1 withContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg2 maxLabelsToAdd:(unsigned long long)arg3;
- (void)_addLabelsForJunctions:(id)arg1 withContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg2 maxLabelsToAdd:(unsigned long long)arg3 useAllJunctions:(bool)arg4 placeShieldsFrontToBack:(bool)arg5;
- (bool)_collideLabel:(id)arg1 activeLabel:(id)arg2 labelsToRemove:(id)arg3;
- (void)_createOrUpdateLabelForRoad:(id)arg1 isShield:(bool)arg2 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg3;
- (bool)_findRouteOverlappingJunctionFrom:(long long)arg1 routeJunctions:(struct vector<RouteJunctionInfo, geo::StdAllocator<RouteJunctionInfo, lhp::Allocator> > { struct RouteJunctionInfo {} *x1; struct RouteJunctionInfo {} *x2; struct __compressed_pair<RouteJunctionInfo *, geo::StdAllocator<RouteJunctionInfo, lhp::Allocator> > { struct RouteJunctionInfo {} *x_3_1_1; struct StdAllocator<RouteJunctionInfo, lhp::Allocator> { struct Allocator {} *x_2_2_1; } x_3_1_2; } x3; }*)arg2 lookBackward:(bool)arg3 firstOverlap:(long long*)arg4 secondOverlap:(long long*)arg5;
- (void)_generateCurrentRoadSignWithContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg1;
- (void)_initalizeCurrentRoadInfo;
- (void)_refreshGuidanceRoadNames;
- (void)_reloadRouteJunctions;
- (void)_tryAddLabel:(id)arg1 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg2 labelCollisionEnabled:(bool)arg3;
- (void)_tryAddRoadSignForJunction:(id)arg1 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg2 labelCollisionEnabled:(bool)arg3;
- (void)_tryAddRoadSignForRoad:(id)arg1 isShield:(bool)arg2 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg3 labelCollisionEnabled:(bool)arg4;
- (bool)_updateActiveRouteRange;
- (void)_updateCurrentRoadInfo;
- (void)_updatePreferredLabelPlacements;
- (void)_updateRoadStarts;
- (void)_updateRoadsInGuidance;
- (void)_updateUniqueOffRouteRoads;
- (const struct vector<std::__1::shared_ptr<md::NavLabel>, geo::StdAllocator<std::__1::shared_ptr<md::NavLabel>, lhp::Allocator> > { struct shared_ptr<md::NavLabel> {} *x1; struct shared_ptr<md::NavLabel> {} *x2; struct __compressed_pair<std::__1::shared_ptr<md::NavLabel> *, geo::StdAllocator<std::__1::shared_ptr<md::NavLabel>, lhp::Allocator> > { struct shared_ptr<md::NavLabel> {} *x_3_1_1; struct StdAllocator<std::__1::shared_ptr<md::NavLabel>, lhp::Allocator> { struct Allocator {} *x_2_2_1; } x_3_1_2; } x3; }*)activeSigns;
- (struct VKLabelNavArtworkCache { struct unique_ptr<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_1_1_1; } x1; struct unique_ptr<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_2_1_1; } x2; struct unique_ptr<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_3_1_1; } x3; }*)artworkCache;
- (void)clearSceneIsMemoryWarning:(bool)arg1;
- (unsigned char)computeRoutePositionForPOIAtPixel:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg1 currentPosition:(unsigned char)arg2 context:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg3;
- (id)currentLocationText;
- (id)currentRoadName;
- (struct NavCurrentRoadSign { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, geo::StdAllocator<char, lhp::Allocator> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, geo::StdAllocator<char, lhp::Allocator> >::__rep, geo::StdAllocator<char, lhp::Allocator> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; struct StdAllocator<char, lhp::Allocator> { struct Allocator {} *x_2_3_1; } x_1_2_2; } x_2_1_1; } x2; struct shared_ptr<md::LabelStyle> { struct LabelStyle {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; bool x4; struct shared_ptr<gss::StylesheetQuery<gss::PropertyID> > { struct StylesheetQuery<gss::PropertyID> {} *x_5_1_1; struct __shared_weak_count {} *x_5_1_2; } x5; struct { bool x_6_1_1; bool x_6_1_2; float x_6_1_3; float x_6_1_4; } x6; }*)currentRoadSign;
- (float)currentRoadSignPixelHeight;
- (id)currentShieldGroup;
- (void)dealloc;
- (bool)debugDisableRoadSignLimit;
- (bool)debugEnableShieldsOnRouteLine;
- (bool)drawRoadSigns;
- (void)grabTilesFromScene:(id)arg1;
- (id)init;
- (bool)isNavMode;
- (void)layoutWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg1 externalCollisionLabels:(const struct vector<VKLabelNavRoadLabel *, geo::StdAllocator<VKLabelNavRoadLabel *, lhp::Allocator> > { id *x1; id x2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x3; void*x4; BOOL x5; out void*x6; void*x7; const void*x8; short x9; short x10; void*x11; double x12; void*x13; void*x14; void*x15; int x16; const void*x17; oneway void*x18; unsigned long x19; void*x20; unsigned int x21/* : ? */; void*x22; long x23; inout void*x24; void x25; void*x26; out void*x27; double x28; unsigned long x29; void*x30; unsigned int x31/* : ? */; void*x32; long x33; void*x34; char *x35; char *x36; void*x37; void*x38; void*x39; void*x40; out SEL x41; SEL x42; unsigned short x43; void*x44; double x45; long x46; long x47; out BOOL x48; void*x49; void*x50; out const void*x51; oneway void*x52; unsigned long x53; void*x54; unsigned int x55/* : ? */; void*x56; long x57; inout void*x58; void x59; void*x60; out void*x61; double x62; unsigned long x63; void*x64; unsigned int x65/* : ? */; void*x66; long x67; void*x68; char *x69; void*x70; void*x71; long x72; void*x73; void*x74; SEL x75; SEL x76; long x77; long x78; out BOOL x79; }*)arg2;
- (bool)needsLayout;
- (unsigned char)orientationForRoadSign:(id)arg1 roadLabel:(id)arg2 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg3;
- (id)route;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeUserOffset;
- (void)setArtworkCache:(struct VKLabelNavArtworkCache { struct unique_ptr<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_1_1_1; } x1; struct unique_ptr<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_2_1_1; } x2; struct unique_ptr<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_3_1_1; } x3; }*)arg1;
- (void)setCurrentLocationText:(id)arg1;
- (void)setCurrentRoadName:(id)arg1;
- (void)setCurrentShieldGroup:(id)arg1;
- (void)setDebugDisableRoadSignLimit:(bool)arg1;
- (void)setDebugEnableShieldsOnRouteLine:(bool)arg1;
- (void)setDrawRoadSigns:(bool)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteUserOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setStyleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg1;

@end
