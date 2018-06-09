/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileLoaderInternal : GEOTileLoader <GEOExperimentConfigurationObserver, GEOPListStateCapturing, GEOResourceManifestTileGroupObserver, GEOTileServerProxyDelegate> {
    GEOTilePool * _cache;
    GEOTileLoaderConfiguration * _config;
    int  _diskHits;
    GEOTilePool * _expiringCache;
    struct list<_CacheRequester<void (^)(unsigned long long)>, std::__1::allocator<_CacheRequester<void (^)(unsigned long long)> > >="__end_"{__list_node_base<_CacheRequester<void (^)(unsigned long long)>, void *>="__prev_"^{__list_node_base<_CacheRequester<void (^)(unsigned long long)>, void *> {}  _freeableSizeRequesters;
    <GEOTileLoaderInternalDelegate> * _internalDelegate;
    NSObject<OS_dispatch_queue> * _internalDelegateQ;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    struct list<LoadItem, std::__1::allocator<LoadItem> > { 
        struct __list_node_base<LoadItem, void *> { 
            struct __list_node_base<LoadItem, void *> {} *__prev_; 
            struct __list_node_base<LoadItem, void *> {} *__next_; 
        } __end_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<LoadItem, void *> > > { 
            unsigned long long __value_; 
        } __size_alloc_; 
    }  _loadItems;
    NSObject<OS_dispatch_queue> * _loadQ;
    int  _memoryHits;
    NSObject<OS_dispatch_source> * _memoryNotificationEventSource;
    bool  _networkActive;
    int  _networkHits;
    NSMutableSet * _openers;
    NSObject<OS_dispatch_queue> * _openersIsolation;
    GEOTileServerProxy * _proxy;
    struct deque<ErrorInfo, std::__1::allocator<ErrorInfo> > { 
        struct __split_buffer<ErrorInfo *, std::__1::allocator<ErrorInfo *> > { 
            struct ErrorInfo {} **__first_; 
            struct ErrorInfo {} **__begin_; 
            struct ErrorInfo {} **__end_; 
            struct __compressed_pair<ErrorInfo **, std::__1::allocator<ErrorInfo *> > { 
                struct ErrorInfo {} **__value_; 
            } __end_cap_; 
        } __map_; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<ErrorInfo> > { 
            unsigned long long __value_; 
        } __size_; 
    }  _recentErrors;
    int  _rollingBatchId;
    struct list<_CacheRequester<void (^)(unsigned long long)>, std::__1::allocator<_CacheRequester<void (^)(unsigned long long)> > >="__end_"{__list_node_base<_CacheRequester<void (^)(unsigned long long)>, void *>="__prev_"^{__list_node_base<_CacheRequester<void (^)(unsigned long long)>, void *> {}  _shrinkCacheRequesters;
    struct { 
        double x; 
        double y; 
    }  _sortPoint;
    unsigned long long  _stateCaptureHandle;
    NSMutableArray * _tileDecoders;
    NSObject<OS_dispatch_queue> * _tileDecodersIsolation;
    struct unique_ptr<geo::DispatchTimer, std::__1::default_delete<geo::DispatchTimer> > { 
        struct __compressed_pair<geo::DispatchTimer *, std::__1::default_delete<geo::DispatchTimer> > { 
            struct DispatchTimer {} *__value_; 
        } __ptr_; 
    }  _timer;
    GEOTileLoaderUsage * _usage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_cancel:(struct __list_iterator<LoadItem, void *> { struct __list_node_base<LoadItem, void *> {} *x1; }*)arg1 err:(id)arg2;
- (bool)_cancelIfNeeded:(struct __list_iterator<LoadItem, void *> { struct __list_node_base<LoadItem, void *> {} *x1; }*)arg1;
- (id)_findInCache:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)_loadedTile:(id)arg1 forKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 info:(id)arg3;
- (void)_loadedTileForLocalKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg1 preliminary:(bool)arg2 quickly:(bool)arg3 tileDecoder:(id)arg4 data:(id)arg5 disburseTile:(id /* block */)arg6;
- (void)_localeChanged:(id)arg1;
- (void)_receivedMemoryWarningNotification;
- (void)_removeUsageDataForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)_requestOnlineTiles;
- (id)_tileDecoderForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 quickly:(bool*)arg2;
- (void)_tileEditionChanged:(id)arg1;
- (void)_timerFired;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 forClient:(id)arg2 exclusive:(bool)arg3;
- (id)cachedTileForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)calculateFreeableSizeWithCallbackQ:(id)arg1 finished:(id /* block */)arg2;
- (void)cancelAllForClient:(id)arg1;
- (void)cancelKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 forClient:(id)arg2;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (void)clearAllCaches;
- (void)closeForClient:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionDictionaryRepresentation;
- (int)diskHits;
- (void)endPreloadSessionForClient:(id)arg1;
- (void)experimentConfigurationDidChange:(id)arg1;
- (void)expireTilesWithPredicate:(id /* block */)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 serverProxy:(id)arg2;
- (id)internalDelegate;
- (id)internalDelegateQ;
- (void)loadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 additionalInfo:(const struct { unsigned int x1[4]; }*)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 callbackQ:(id)arg7 beginNetwork:(id /* block */)arg8 callback:(id /* block */)arg9;
- (void)loadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 additionalInfo:(const struct { unsigned int x1[4]; }*)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned int)arg7 callbackQ:(id)arg8 beginNetwork:(id /* block */)arg9 callback:(id /* block */)arg10;
- (void)loadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 additionalInfo:(const struct { unsigned int x1[4]; }*)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned int)arg7 signpostID:(unsigned long long)arg8 callbackQ:(id)arg9 beginNetwork:(id /* block */)arg10 callback:(id /* block */)arg11;
- (void)loadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 additionalInfo:(const struct { unsigned int x1[4]; }*)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 signpostID:(unsigned long long)arg7 callbackQ:(id)arg8 beginNetwork:(id /* block */)arg9 callback:(id /* block */)arg10;
- (void)loadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 additionalInfo:(const struct { unsigned int x1[4]; }*)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 proxyClient:(id)arg5 options:(unsigned long long)arg6 reason:(unsigned char)arg7 qos:(unsigned int)arg8 signpostID:(unsigned long long)arg9 callbackQ:(id)arg10 beginNetwork:(id /* block */)arg11 callback:(id /* block */)arg12;
- (void)loadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 callbackQ:(id)arg6 beginNetwork:(id /* block */)arg7 callback:(id /* block */)arg8;
- (void)loadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned int)arg6 callbackQ:(id)arg7 beginNetwork:(id /* block */)arg8 callback:(id /* block */)arg9;
- (void)loadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned int)arg6 signpostID:(unsigned long long)arg7 callbackQ:(id)arg8 beginNetwork:(id /* block */)arg9 callback:(id /* block */)arg10;
- (int)memoryHits;
- (int)networkHits;
- (void)openForClient:(id)arg1;
- (id)proxy;
- (void)proxy:(id)arg1 canShrinkDiskCacheByAmount:(unsigned long long)arg2;
- (void)proxy:(id)arg1 didShrinkDiskCacheByAmount:(unsigned long long)arg2;
- (void)proxy:(id)arg1 failedToLoadAllPendingTilesWithError:(id)arg2;
- (void)proxy:(id)arg1 failedToLoadTiles:(id)arg2 error:(id)arg3;
- (void)proxy:(id)arg1 loadedTile:(id)arg2 forKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg3 info:(id)arg4;
- (void)proxy:(id)arg1 willGoToNetworkForTiles:(id)arg2;
- (void)proxyDidDownloadRegionalResources:(id)arg1;
- (void)registerTileDecoder:(id)arg1;
- (void)registerTileLoader:(Class)arg1;
- (void)reportCorruptTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (bool)reprioritizeKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 forClient:(id)arg2 newPriority:(unsigned int)arg3;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)setInternalDelegate:(id)arg1;
- (void)setInternalDelegateQ:(id)arg1;
- (void)setSortPoint:(const struct { double x1; double x2; }*)arg1;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQ:(id)arg2 finished:(id /* block */)arg3;

@end
