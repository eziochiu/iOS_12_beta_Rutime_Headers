/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSpatialPlaceLookupParameters : NSObject {
    NSArray * _categories;
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    int  _maxResultCount;
    double  _radius;
}

@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (nonatomic, readonly) int maxResultCount;
@property (nonatomic, readonly) double radius;

- (void).cxx_destruct;
- (id)categories;
- (struct { double x1; double x2; })coordinate;
- (id)init;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2 categories:(id)arg3;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2 categories:(id)arg3 maxResultCount:(int)arg4;
- (int)maxResultCount;
- (double)radius;

@end
