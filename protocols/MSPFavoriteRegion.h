/* made by EzioChiu.
 */

@protocol MSPFavoriteRegion <MSPFavorite>

@required

- (GEOMapRegion *)geoMapRegion;
- (NSString *)title;

@end
