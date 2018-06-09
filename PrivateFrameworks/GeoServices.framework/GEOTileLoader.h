/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileLoader : NSObject

@property (nonatomic, readonly) int diskHits;
@property (nonatomic, readonly) int memoryHits;
@property (nonatomic, readonly) int networkHits;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)diskCacheLocation;
+ (id)modernLoader;
+ (id)modernLoaderForResourceManifestConfiguration:(id)arg1 locale:(id)arg2;
+ (id)modernLoaderForTileGroupIdentifier:(unsigned int)arg1 locale:(id)arg2;
+ (void)setDiskCacheLocation:(id)arg1;
+ (void)setMemoryCacheCountLimit:(unsigned long long)arg1;
+ (void)setMemoryCacheMinCapacity:(unsigned long long)arg1;
+ (void)setMemoryCacheTotalCostLimit:(unsigned long long)arg1;
+ (void)setServerProxyClass:(Class)arg1;
+ (void)setTrackUsage:(bool)arg1;
+ (id)sharedLoader;
+ (id)singletonConfiguration;
+ (id)tileLoaderWithConfiguration:(id)arg1 serverProxy:(id)arg2;
+ (void)useLocalLoader;
+ (void)useRemoteLoader;

- (void)_loadTiles:(id)arg1 options:(unsigned long long)arg2 progress:(id /* block */)arg3 finished:(id /* block */)arg4 error:(id /* block */)arg5;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 forClient:(id)arg2 exclusive:(bool)arg3;
- (id)cachedTileForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)calculateFreeableSizeWithCallbackQ:(id)arg1 finished:(id /* block */)arg2;
- (void)cancelAllForClient:(id)arg1;
- (void)cancelKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 forClient:(id)arg2;
- (void)cancelRequest:(id)arg1;
- (void)clearAllCaches;
- (void)closeDatabase;
- (void)closeForClient:(id)arg1;
- (id)descriptionDictionaryRepresentation;
- (int)diskHits;
- (void)endPreloadSessionForClient:(id)arg1;
- (void)expireTilesWithPredicate:(id /* block */)arg1;
- (id)internalDelegate;
- (id)internalDelegateQ;
- (void)loadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 additionalInfo:(const struct { unsigned int x1[4]; }*)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 callbackQ:(id)arg7 beginNetwork:(id /* block */)arg8 callback:(id /* block */)arg9;
- (void)loadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 additionalInfo:(const struct { unsigned int x1[4]; }*)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned int)arg7 callbackQ:(id)arg8 beginNetwork:(id /* block */)arg9 callback:(id /* block */)arg10;
- (void)loadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 additionalInfo:(const struct { unsigned int x1[4]; }*)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned int)arg7 signpostID:(unsigned long long)arg8 callbackQ:(id)arg9 beginNetwork:(id /* block */)arg10 callback:(id /* block */)arg11;
- (void)loadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 additionalInfo:(const struct { unsigned int x1[4]; }*)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 signpostID:(unsigned long long)arg7 callbackQ:(id)arg8 beginNetwork:(id /* block */)arg9 callback:(id /* block */)arg10;
- (void)loadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 callbackQ:(id)arg6 beginNetwork:(id /* block */)arg7 callback:(id /* block */)arg8;
- (void)loadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned int)arg6 callbackQ:(id)arg7 beginNetwork:(id /* block */)arg8 callback:(id /* block */)arg9;
- (void)loadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned int)arg6 signpostID:(unsigned long long)arg7 callbackQ:(id)arg8 beginNetwork:(id /* block */)arg9 callback:(id /* block */)arg10;
- (void)loadTilesFromCache:(id)arg1 progress:(id /* block */)arg2 finished:(id /* block */)arg3 error:(id /* block */)arg4;
- (void)loadTilesFromCacheAndNetwork:(id)arg1 progress:(id /* block */)arg2 finished:(id /* block */)arg3 error:(id /* block */)arg4;
- (int)memoryHits;
- (int)networkHits;
- (void)openDatabase;
- (void)openForClient:(id)arg1;
- (void)registerTileDecoder:(id)arg1;
- (void)registerTileLoader:(Class)arg1;
- (id)renderDataForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 asyncHandler:(id /* block */)arg2;
- (void)reportCorruptTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (bool)reprioritizeKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 forClient:(id)arg2 newPriority:(unsigned int)arg3;
- (void)setInternalDelegate:(id)arg1;
- (void)setInternalDelegateQ:(id)arg1;
- (void)setSortPoint:(const struct { double x1; double x2; }*)arg1;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQ:(id)arg2 finished:(id /* block */)arg3;

@end
