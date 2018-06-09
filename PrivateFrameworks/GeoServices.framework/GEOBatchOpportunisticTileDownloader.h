/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOBatchOpportunisticTileDownloader : NSObject <GEOTileRequesterDelegate> {
    GEOTileRequester * _activeRequester;
    bool  _canceled;
    NSString * _countryCode;
    <GEOBatchOpportunisticTileDownloaderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _finished;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSObject<OS_os_log> * _log;
    NSString * _logPrefix;
    NSObject<OS_dispatch_group> * _preparationGroup;
    NSString * _regionCode;
    GEOTileKeyList * _remainingKeysForActiveRequester;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _started;
    unsigned long long  _successfulTiles;
    id /* block */  _tileRequesterCreationBlock;
}

- (void).cxx_destruct;
- (void)_finish;
- (void)_requestNextBatch;
- (void)_startRequesterForKeys:(id)arg1 staleCachedETags:(id)arg2 staleCachedData:(id)arg3;
- (void)cancel;
- (bool)cancelKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)determineNextBatchWithQueue:(id)arg1 callback:(id /* block */)arg2;
- (void)downloadDidSucceedForTile:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 downloadSize:(unsigned long long)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 countryCode:(id)arg3 region:(id)arg4 log:(id)arg5 logPrefix:(id)arg6 tileRequesterCreationBlock:(id /* block */)arg7;
- (void)start;
- (void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned int)arg3 tileSet:(unsigned int)arg4 etag:(id)arg5 forKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg6 userInfo:(id)arg7;
- (void)tileRequester:(id)arg1 receivedError:(id)arg2;
- (void)tileRequesterFinished:(id)arg1;

@end
