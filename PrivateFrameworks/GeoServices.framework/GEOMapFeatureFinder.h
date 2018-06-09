/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapFeatureFinder : GEOMapRequest {
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    bool  _ignoreUnnamedFeatures;
    id /* block */  _pointHandler;
    id /* block */  _polygonHandler;
    id /* block */  _roadHandler;
    GEOMapTileFinder * _tileFinder;
}

@property (nonatomic) bool ignoreUnnamedFeatures;
@property (nonatomic, readonly) GEOMapAccess *map;
@property (nonatomic, copy) id /* block */ pointHandler;
@property (nonatomic, copy) id /* block */ polygonHandler;
@property (nonatomic, copy) id /* block */ roadHandler;

- (void).cxx_destruct;
- (void)_pickRoadInTile:(id)arg1 tileRect:(const struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 localPoint:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg3;
- (void)cancel;
- (void)findFeatures:(id /* block */)arg1 pointHandler:(id /* block */)arg2 polygonHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (bool)ignoreUnnamedFeatures;
- (id)initWithMap:(id)arg1 center:(struct { double x1; double x2; })arg2;
- (id)map;
- (id /* block */)pointHandler;
- (id /* block */)polygonHandler;
- (id /* block */)roadHandler;
- (void)setIgnoreUnnamedFeatures:(bool)arg1;
- (void)setPointHandler:(id /* block */)arg1;
- (void)setPolygonHandler:(id /* block */)arg1;
- (void)setRoadHandler:(id /* block */)arg1;

@end
