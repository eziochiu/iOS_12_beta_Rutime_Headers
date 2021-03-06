/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapFeatureLine : NSObject {
    unsigned long long  _coordinateCount;
    struct { double x1; double x2; } * _coordinates;
    bool  _isFlipped;
    double  _length;
}

@property (nonatomic, readonly) unsigned long long coordinateCount;
@property (nonatomic, readonly) struct { double x1; double x2; }*coordinates;
@property (nonatomic, readonly) double length;

- (id)_containingTile;
- (struct { float x1; float x2; }*)_tilePointsForSection:(unsigned long long)arg1 withCount:(out unsigned long long*)arg2;
- (unsigned long long)coordinateCount;
- (struct { double x1; double x2; }*)coordinates;
- (void)dealloc;
- (id)init;
- (double)length;

@end
