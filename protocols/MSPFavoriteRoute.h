/* made by EzioChiu.
 */

@protocol MSPFavoriteRoute <MSPFavorite>

@required

- (GEOComposedWaypoint *)endWaypoint;
- (GEOComposedWaypoint *)startWaypoint;
- (int)transportType;

@end
