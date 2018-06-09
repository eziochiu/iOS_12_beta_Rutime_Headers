/* made by EzioChiu.
 */

@protocol GEOTileServerProxyDelegate <NSObject>

@required

- (void)proxy:(GEOTileServerProxy *)arg1 canShrinkDiskCacheByAmount:(unsigned long long)arg2;
- (void)proxy:(GEOTileServerProxy *)arg1 didShrinkDiskCacheByAmount:(unsigned long long)arg2;
- (void)proxy:(GEOTileServerProxy *)arg1 failedToLoadAllPendingTilesWithError:(NSError *)arg2;
- (void)proxy:(GEOTileServerProxy *)arg1 failedToLoadTiles:(GEOTileKeyList *)arg2 error:(NSError *)arg3;
- (void)proxy:(GEOTileServerProxy *)arg1 loadedTile:(NSData *)arg2 forKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg3 info:(NSDictionary *)arg4;
- (void)proxy:(GEOTileServerProxy *)arg1 willGoToNetworkForTiles:(GEOTileKeyList *)arg2;

@optional

- (void)proxyDidDownloadRegionalResources:(GEOTileServerProxy *)arg1;

@end
