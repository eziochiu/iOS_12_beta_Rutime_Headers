/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileServerLocalProxy : GEOTileServerProxy <GEOProactiveTileDownloaderDelegate, GEOResourceManifestTileGroupObserver> {
    NSString * _cacheLocation;
    NSMutableArray * _inProgress;
    NSLock * _inProgressLock;
    GEOProactiveTileDownloader * _proactiveTileDownloader;
    NSMapTable * _providers;
    GEOTileDB * _tileCache;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dataSaverMapRegionChanged:(id)arg1;
- (void)_initiateDataSaverPreloadIfPossible;
- (void)_registerBuiltInProviders;
- (void)_updateExpiringTilesets;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 exclusive:(bool)arg2;
- (void)calculateFreeableSize;
- (void)cancel:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)close;
- (void)dealloc;
- (void)endPreloadSession;
- (void)flushPendingWrites;
- (void)generateRequestedFromTileLoaderBeginSignpost:(unsigned long long)arg1;
- (void)generateRequestedFromTileLoaderEndSignpost:(unsigned long long)arg1;
- (id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 delegateQueue:(id)arg4 delegate:(id)arg5;
- (void)loadTiles:(id)arg1 priorities:(const unsigned int*)arg2 hasAdditionalInfos:(const bool*)arg3 additionalInfos:(const struct { unsigned int x1[4]; }*)arg4 signpostIDs:(const unsigned long long*)arg5 reason:(unsigned char)arg6 options:(unsigned long long)arg7 client:(id)arg8;
- (void)open;
- (void)proactiveTileDownloaderDidFinish:(id)arg1;
- (void)registerProvider:(Class)arg1;
- (void)reportCorruptTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)reprioritizeKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 newPriority:(unsigned int)arg2;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1;
- (bool)skipNetworkForKeysWhenPreloading:(id)arg1;
- (void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned int)arg3 tileSet:(unsigned int)arg4 etag:(id)arg5 forKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg6 userInfo:(id)arg7;
- (void)tileRequester:(id)arg1 receivedError:(id)arg2;
- (void)tileRequesterFinished:(id)arg1;
- (id)userInfoForRequesterUserInfo:(id)arg1 tileEdition:(unsigned int)arg2 tileSet:(unsigned int)arg3 eTag:(id)arg4 bundleIdentifier:(id)arg5 reason:(unsigned char)arg6;

@end