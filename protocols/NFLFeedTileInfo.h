/* made by EzioChiu.
 */

@protocol NFLFeedTileInfo <NSObject, NFCopying>

@required

- (unsigned long long)bookmarkOffsetType;
- (bool)bookmarkable;
- (NSString *)identifier;
- (bool)pageable;
- (unsigned long long)tileInfoType;
- (NSArray *)underlyingFeedElements;

@end
