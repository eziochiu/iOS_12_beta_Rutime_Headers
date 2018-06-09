/* made by EzioChiu.
 */

@protocol GEOTransitArtworkDataSource <NSObject>

@required

- (NSString *)accessibilityText;
- (long long)artworkSourceType;
- (long long)artworkUseType;
- (bool)hasRoutingIncidentBadge;
- (<GEOTransitIconDataSource> *)iconDataSource;
- (<GEOTransitShieldDataSource> *)iconFallbackShieldDataSource;
- (<GEOTransitShieldDataSource> *)shieldDataSource;

@end
