/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileRegionDownloader : GEOBatchOpportunisticTileDownloader {
    GEOTileKeyMap * _cacheMissType;
    unsigned int  _currentRangeX;
    unsigned int  _currentRangeY;
    struct { 
        unsigned int minX; 
        unsigned int maxX; 
        unsigned int minY; 
        unsigned int maxY; 
    }  _currentTileRange;
    GEOActiveTileSet * _currentTileset;
    unsigned int  _currentZoomLevel;
    GEOTileDB * _diskCache;
    bool  _hasCurrentZoomLevel;
    _GEOTileRegionDownloaderInternal * _internal;
    GEOResourceManifestManager * _manifestManager;
    unsigned long long  _numberOfRequestsAtCurrentZoom;
    unsigned long long  _numberOfSuccessAtCurrentZoom;
    unsigned long long  _numberOfTilesAtCurrentZoom;
    GEOMapRegion * _region;
    NSString * _regionId;
    GEORequestCounter * _requestCounter;
}

- (void).cxx_destruct;
- (void)_addMoreKeysToListIfNeeded:(id)arg1 staleCachedETags:(id)arg2 staleCachedData:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_popNextTileSet;
- (void)_popNextZoomLevel;
- (void)determineNextBatchWithQueue:(id)arg1 callback:(id /* block */)arg2;
- (void)downloadDidSucceedForTile:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 downloadSize:(unsigned long long)arg2;
- (id)init;
- (id)initWithRegion:(id)arg1 regionId:(id)arg2 diskCache:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 manifestManager:(id)arg6 requestCounter:(id)arg7;
- (id)initWithRegion:(id)arg1 regionId:(id)arg2 diskCache:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 manifestManager:(id)arg6 requestCounter:(id)arg7 tileRequesterCreationBlock:(id /* block */)arg8;

@end
