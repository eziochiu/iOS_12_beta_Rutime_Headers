/* made by EzioChiu.
 */

@protocol MKGeoJSONCoverageRegion <NSObject>

@required

- (bool)coordinateLiesInRegion:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (id)initWithJSONObject:(id)arg1 error:(id*)arg2;

@end
