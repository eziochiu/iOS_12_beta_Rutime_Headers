/* made by EzioChiu.
 */

@protocol GEOTransitSystem <NSObject>

@required

- (<GEOTransitArtworkDataSource> *)artwork;
- (unsigned long long)muid;
- (NSString *)name;

@end
