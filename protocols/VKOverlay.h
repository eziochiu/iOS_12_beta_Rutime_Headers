/* made by EzioChiu.
 */

@protocol VKOverlay <NSObject>

@required

- (GEOMapRegion *)boundingMapRegion;
- (struct { double x1; double x2; })coordinate;

@end
