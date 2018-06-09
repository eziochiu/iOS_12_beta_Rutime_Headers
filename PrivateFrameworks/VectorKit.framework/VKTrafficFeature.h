/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTrafficFeature : NSObject <NSCopying> {
    struct { 
        double latitude; 
        double longitude; 
    }  _location;
    float  _maxZoom;
    float  _minZoom;
    GEOLatLng * _position;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeOffset;
    long long  _trafficFeatureType;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _worldPoint;
}

@property (nonatomic) struct { double x1; double x2; } location;
@property (nonatomic) float maxZoom;
@property (nonatomic, readonly) struct Mercator2<double> { double x1[2]; } mercatorPoint;
@property (nonatomic) float minZoom;
@property (nonatomic, copy) GEOLatLng *position;
@property (nonatomic) struct PolylineCoordinate { unsigned int x1; float x2; } routeOffset;
@property (nonatomic, readonly) long long trafficFeatureType;
@property (nonatomic) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  worldPoint; /* unknown property attribute:  1>=[3d]} */

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithType:(long long)arg1;
- (bool)isCamera;
- (bool)isIncident;
- (struct { double x1; double x2; })location;
- (float)maxZoom;
- (struct Mercator2<double> { double x1[2]; })mercatorPoint;
- (float)minZoom;
- (id)position;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (void)setLocation:(struct { double x1; double x2; })arg1;
- (void)setMaxZoom:(float)arg1;
- (void)setMinZoom:(float)arg1;
- (void)setPosition:(id)arg1;
- (void)setRouteOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setWorldPoint:(struct Matrix<double, 3, 1> { double x1[3]; })arg1;
- (long long)trafficFeatureType;
- (struct Matrix<double, 3, 1> { double x1[3]; })worldPoint;

@end