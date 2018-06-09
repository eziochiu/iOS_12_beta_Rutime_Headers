/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOStaleTileUpdater : GEOBatchOpportunisticTileDownloader {
    GEOTileKeyMap * _cacheMissType;
    GEOTileDB * _diskCache;
    GEOTileKeyList * _keysRemaining;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _loggedStartRequestCounterAction;
    GEOResourceManifestManager * _manifestManager;
    unsigned long long  _numberOfTilesAttempted;
    unsigned long long  _numberOfTilesOriginallyConsidered;
    GEORequestCounter * _requestCounter;
    NSString * _uniqueIdentifier;
}

- (void).cxx_destruct;
- (void)_addMoreKeysToListIfNeeded:(id)arg1 staleCachedETags:(id)arg2 staleCachedData:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_determineStaleKeysToUpdate;
- (bool)cancelKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)determineNextBatchWithQueue:(id)arg1 callback:(id /* block */)arg2;
- (void)downloadDidSucceedForTile:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 downloadSize:(unsigned long long)arg2;
- (id)initWithDiskCache:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 manifestManager:(id)arg4 requestCounter:(id)arg5 tileRequesterCreationBlock:(id /* block */)arg6;

@end
