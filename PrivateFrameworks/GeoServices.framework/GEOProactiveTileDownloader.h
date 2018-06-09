/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOProactiveTileDownloader : NSObject <GEOBatchOpportunisticTileDownloaderDelegate> {
    GEODataSaverTileLoaderManager * _dataSaverManager;
    <GEOProactiveTileDownloaderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _didFinish;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _didStart;
    GEOTileDB * _diskCache;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    GEOResourceManifestManager * _manifestManager;
    GEOTileRegionDownloader * _regionDownloader;
    GEORequestCounter * _requestCounter;
    bool  _shouldDownloadTilesInRegion;
    bool  _shouldUpdateRecentlyUsedStaleTiles;
    GEOStaleTileUpdater * _staleUpdater;
    NSString * _startCountry;
    NSString * _startRegion;
    GEOTileRegionDownloader * _testRegionDownloader;
    GEOStaleTileUpdater * _testStaleUpdater;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)shouldDownloadTileType:(int)arg1;

- (void).cxx_destruct;
- (void)_finish;
- (void)_start;
- (void)batchOpportunisticTileDownloader:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned int)arg3 tileSet:(unsigned int)arg4 etag:(id)arg5 forKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg6 userInfo:(id)arg7;
- (void)batchOpportunisticTileDownloaderDidFinish:(id)arg1;
- (void)cancel;
- (id)init;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 diskCache:(id)arg3;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 diskCache:(id)arg3 dataSaverManager:(id)arg4 manifestManager:(id)arg5 requestCounter:(id)arg6 regionDownloader:(id)arg7 staleUpdater:(id)arg8;
- (void)start;

@end
