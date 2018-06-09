/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelNavRoad : NSObject <VKLabelNavFeature> {
    bool  _areLabelsDisabled;
    bool  _cachedShieldVisibility;
    bool  _cachedSignVisibility;
    struct { struct { id x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; bool x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned long long x2; unsigned long long x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; bool x13; unsigned char x14; bool x15; bool x16; unsigned char x17; bool x18; unsigned char x19; struct _NSRange { unsigned long long x_20_1_1; unsigned long long x_20_1_2; } x20; bool x21; unsigned int x22; } * _data;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _direction;
    bool  _hasVisibleShields;
    bool  _hasVisibleSigns;
    long long  _intraRoadPriority;
    bool  _isGuidanceStepStart;
    bool  _isInGuidance;
    bool  _isOnRoute;
    bool  _isPicked;
    bool  _isRoadLabelUnique;
    bool  _isStartOfRoadName;
    bool  _isVisibilityCached;
    struct { unsigned int x1; unsigned int x2; struct { /* ? */ } *x3; } * _junctionA;
    struct { unsigned int x1; unsigned int x2; struct { /* ? */ } *x3; } * _junctionB;
    double  _length;
    NSString * _name;
    VKLabelNavJunction * _navJunctionA;
    VKLabelNavRoadLabel * _roadShield;
    VKLabelNavRoadLabel * _roadSign;
    float  _routeCrossProduct;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeOffset;
    NSString * _shieldDisplayGroup;
    NSString * _shieldGroup;
    struct vector<gm::Matrix<double, 2, 1>, geo::StdAllocator<gm::Matrix<double, 2, 1>, lhp::Allocator> > { 
        struct Matrix<double, 2, 1> {} *__begin_; 
        struct Matrix<double, 2, 1> {} *__end_; 
        struct __compressed_pair<gm::Matrix<double, 2, 1> *, geo::StdAllocator<gm::Matrix<double, 2, 1>, lhp::Allocator> > { 
            struct Matrix<double, 2, 1> {} *__value_; 
            struct StdAllocator<gm::Matrix<double, 2, 1>, lhp::Allocator> { 
                struct Allocator {} *_allocator; 
            } __value_; 
        } __end_cap_; 
    }  _simplifiedPoints;
    bool  _suppressRoadSignIfShieldPresent;
    VKLabelTile * _tile;
    unsigned long long  _vertexIndexA;
    unsigned long long  _vertexIndexB;
}

@property (nonatomic) bool areLabelsDisabled;
@property (nonatomic, readonly) const char *cstrName;
@property (nonatomic) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  direction; /* unknown property attribute:  1>=[2f]} */
@property (nonatomic) long long intraRoadPriority;
@property (nonatomic, readonly) bool isAwayFromRoute;
@property (nonatomic, readonly) bool isEtaFeature;
@property (nonatomic) bool isGuidanceStepStart;
@property (nonatomic) bool isInGuidance;
@property (nonatomic) bool isOnRoute;
@property (nonatomic, readonly) bool isOnewayToJunction;
@property (nonatomic) bool isPicked;
@property (nonatomic, readonly) bool isRamp;
@property (nonatomic) bool isRoadLabelUnique;
@property (nonatomic) bool isStartOfRoadName;
@property (nonatomic, readonly) bool isTrafficCameraFeature;
@property (nonatomic, readonly) struct { unsigned int x1; unsigned int x2; struct { /* ? */ } *x3; }*junctionB;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) VKLabelNavJunction *navJunctionA;
@property (nonatomic, readonly) int roadClass;
@property (nonatomic, readonly) unsigned char roadSignAlignment;
@property (nonatomic) float routeCrossProduct;
@property (nonatomic) struct PolylineCoordinate { unsigned int x1; float x2; } routeOffset;
@property (nonatomic, readonly) NSString *shieldDisplayGroup;
@property (nonatomic, readonly) NSString *shieldGroup;
@property (nonatomic, readonly) bool suppressRoadSignIfShieldPresent;
@property (nonatomic, readonly) VKLabelTile *tile;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_findLabelAnchorPoint:(struct Mercator3<double> { double x1[3]; }*)arg1 isShieldLabel:(bool)arg2 desiredOffsetDistance:(float)arg3 maxOffsetDistance:(float)arg4 minJunctionDistance:(float)arg5 roadGraph:(id)arg6;
- (float)_findRoadOffsetForDistanceToRay:(float)arg1 rayStart:(struct Matrix<double, 3, 1> { double x1[3]; })arg2 rayVector:(struct Matrix<float, 2, 1> { float x1[2]; })arg3 roadGraph:(id)arg4;
- (id)_newLabelWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg1 isShieldLabel:(bool)arg2 worldPoint:(struct Matrix<double, 3, 1> { double x1[3]; })arg3 alignment:(unsigned char)arg4 artworkCache:(struct VKLabelNavArtworkCache { struct unique_ptr<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_1_1_1; } x1; struct unique_ptr<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_2_1_1; } x2; struct unique_ptr<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_3_1_1; } x3; }*)arg5;
- (void)_updateWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg1;
- (void)_updateWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg1 threshold:(double)arg2;
- (bool)_worldPointForRoadOffset:(float)arg1 worldPoint:(struct Mercator3<double> { double x1[3]; }*)arg2;
- (void)_worldRoadPoints:(struct vector<gm::Matrix<double, 2, 1>, geo::StdAllocator<gm::Matrix<double, 2, 1>, lhp::Allocator> > { struct Matrix<double, 2, 1> {} *x1; struct Matrix<double, 2, 1> {} *x2; struct __compressed_pair<gm::Matrix<double, 2, 1> *, geo::StdAllocator<gm::Matrix<double, 2, 1>, lhp::Allocator> > { struct Matrix<double, 2, 1> {} *x_3_1_1; struct StdAllocator<gm::Matrix<double, 2, 1>, lhp::Allocator> { struct Allocator {} *x_2_2_1; } x_3_1_2; } x3; }*)arg1;
- (void)appendSimplifiedWorldRoadPoints:(struct vector<gm::Matrix<double, 2, 1>, geo::StdAllocator<gm::Matrix<double, 2, 1>, lhp::Allocator> > { struct Matrix<double, 2, 1> {} *x1; struct Matrix<double, 2, 1> {} *x2; struct __compressed_pair<gm::Matrix<double, 2, 1> *, geo::StdAllocator<gm::Matrix<double, 2, 1>, lhp::Allocator> > { struct Matrix<double, 2, 1> {} *x_3_1_1; struct StdAllocator<gm::Matrix<double, 2, 1>, lhp::Allocator> { struct Allocator {} *x_2_2_1; } x_3_1_2; } x3; }*)arg1;
- (bool)areLabelsDisabled;
- (void)clearRoadSign;
- (void)createLabelWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg1 isShieldLabel:(bool)arg2 desiredOffsetDistance:(float)arg3 maxOffsetDistance:(float)arg4 minJunctionDistance:(float)arg5 minRouteDistance:(float)arg6 roadGraph:(id)arg7 artworkCache:(struct VKLabelNavArtworkCache { struct unique_ptr<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_1_1_1; } x1; struct unique_ptr<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_2_1_1; } x2; struct unique_ptr<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_3_1_1; } x3; }*)arg8;
- (const char *)cstrName;
- (void)dealloc;
- (id)description;
- (struct Matrix<float, 2, 1> { float x1[2]; })direction;
- (void)getRoadEdge:(struct { struct { /* ? */ } *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1;
- (bool)hasShield;
- (bool)hasVisibleShields;
- (bool)hasVisibleSigns;
- (id)initWithRoadEdge:(const struct { struct { /* ? */ } *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1 navJunctionA:(id)arg2 routeOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg3 tile:(id)arg4;
- (long long)intraRoadPriority;
- (bool)isAwayFromRoute;
- (bool)isEtaFeature;
- (bool)isGuidanceStepStart;
- (bool)isInGuidance;
- (bool)isOnRoute;
- (bool)isOnewayToJunction;
- (bool)isPicked;
- (bool)isRamp;
- (bool)isRoadLabelUnique;
- (bool)isStartOfRoadName;
- (bool)isTrafficCameraFeature;
- (struct { unsigned int x1; unsigned int x2; struct { /* ? */ } *x3; }*)junctionB;
- (id)labelWithType:(bool)arg1;
- (void)layoutWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg1;
- (double)length;
- (bool)matchesRoad:(id)arg1;
- (bool)matchesRoadEdge:(const struct { struct { /* ? */ } *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1;
- (id)name;
- (id)navJunctionA;
- (void)prepareStyleVarsWithContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg1;
- (void)recreateRoadSignWithAlignment:(unsigned char)arg1 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg2 artworkCache:(struct VKLabelNavArtworkCache { struct unique_ptr<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, VKRoadSignArtwork *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_1_1_1; } x1; struct unique_ptr<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_2_1_1; } x2; struct unique_ptr<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> >, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct __compressed_pair<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > *, std::__1::default_delete<LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > > > { struct LRUCache<unsigned long, CGImage *, std::__1::hash<unsigned long> > {} *x_1_2_1; } x_3_1_1; } x3; }*)arg3;
- (int)roadClass;
- (unsigned char)roadSignAlignment;
- (float)routeCrossProduct;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (void)setAreLabelsDisabled:(bool)arg1;
- (void)setDirection:(struct Matrix<float, 2, 1> { float x1[2]; })arg1;
- (void)setIntraRoadPriority:(long long)arg1;
- (void)setIsGuidanceStepStart:(bool)arg1;
- (void)setIsInGuidance:(bool)arg1;
- (void)setIsOnRoute:(bool)arg1;
- (void)setIsPicked:(bool)arg1;
- (void)setIsRoadLabelUnique:(bool)arg1;
- (void)setIsStartOfRoadName:(bool)arg1;
- (void)setRouteCrossProduct:(float)arg1;
- (void)setRouteOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (id)shieldDisplayGroup;
- (id)shieldGroup;
- (bool)suppressRoadSignIfShieldPresent;
- (id)tile;

@end
