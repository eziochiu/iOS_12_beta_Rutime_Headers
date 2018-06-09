/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapFeatureIntersectionJunction : GEOMapFeatureJunction {
    struct { unsigned int x1; unsigned int x2; struct { /* ? */ } *x3; } * _connectivityJunction;
}

- (struct { unsigned int x1; unsigned int x2; struct { /* ? */ } *x3; }*)connectivityJunction;
- (id)initWithConnectivityJunction:(struct { unsigned int x1; unsigned int x2; struct { /* ? */ } *x3; }*)arg1 tile:(id)arg2;

@end
