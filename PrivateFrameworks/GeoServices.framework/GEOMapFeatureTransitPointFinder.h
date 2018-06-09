/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapFeatureTransitPointFinder : GEOMapFeatureAccessFinder

- (id)_geometryTileFinder;
- (id)_tileFinder;
- (id)_transitPointForFeature:(struct GEOTransitNodeFeature { struct { struct { id x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned int x_1_2_6; unsigned long long x_1_2_7; bool x_1_2_8; unsigned long long x_1_2_9; float x_1_2_10; unsigned long long x_1_2_11; id x_1_2_12; } x_1_1_1; struct { float x_2_2_1; float x_2_2_2; } x_1_1_2; struct { float x_3_2_1; float x_3_2_2; } x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned long long x_1_1_7; short x_1_1_8; unsigned char x_1_1_9; struct { /* ? */ } *x_1_1_10; float x_1_1_11; float x_1_1_12; unsigned int x_1_1_13; unsigned char x_1_1_14; bool x_1_1_15; bool x_1_1_16; bool x_1_1_17; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; struct { /* ? */ } *x3; struct GEOTransitNodeFeature {} *x4; unsigned long long *x5; unsigned long long *x6; BOOL x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned short x11; unsigned long long x12; unsigned int x13; }*)arg1;
- (id)findGeometryForTransitPoint:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)findParentOfTransitPoint:(id)arg1 handler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)findTransitAccessPointsForStation:(id)arg1 handler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)findTransitPointWithID:(unsigned long long)arg1 near:(struct { double x1; double x2; })arg2 handler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findTransitPointsOfType:(unsigned long long)arg1 near:(struct { double x1; double x2; })arg2 radius:(double)arg3 handler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)findTransitPointsWithParent:(id)arg1 handler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;

@end
