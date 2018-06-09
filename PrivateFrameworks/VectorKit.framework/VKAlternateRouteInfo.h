/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKAlternateRouteInfo : VKRouteInfo {
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _convergenceCoordinate;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _divergenceCoordinate;
    unsigned char  _etaComparisonToMain;
}

@property (nonatomic, readonly) struct PolylineCoordinate { unsigned int x1; float x2; } convergenceCoordinate;
@property (nonatomic, readonly) struct PolylineCoordinate { unsigned int x1; float x2; } divergenceCoordinate;
@property (nonatomic) unsigned char etaComparisionToMain;

- (id).cxx_construct;
- (struct PolylineCoordinate { unsigned int x1; float x2; })convergenceCoordinate;
- (struct PolylineCoordinate { unsigned int x1; float x2; })divergenceCoordinate;
- (unsigned char)etaComparisionToMain;
- (id)initWithComposedRoute:(id)arg1 etaDescription:(id)arg2 divergenceRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg3 convergenceRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg4;
- (id)initWithComposedRoute:(id)arg1 etaText:(id)arg2 divergenceRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg3 convergenceRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg4;
- (void)setEtaComparisionToMain:(unsigned char)arg1;

@end
