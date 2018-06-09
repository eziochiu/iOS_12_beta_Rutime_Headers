/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNRouteCoordinateWithType : NSObject {
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeCoordinate;
    unsigned long long  _significanceType;
}

@property (nonatomic) struct PolylineCoordinate { unsigned int x1; float x2; } routeCoordinate;
@property (nonatomic) unsigned long long significanceType;

+ (id)convergenceCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
+ (id)divergenceCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;

- (id).cxx_construct;
- (id)description;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeCoordinate;
- (void)setRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setSignificanceType:(unsigned long long)arg1;
- (unsigned long long)significanceType;

@end
