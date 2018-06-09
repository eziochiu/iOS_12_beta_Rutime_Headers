/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileServerRemoteProxy : GEOTileServerProxy {
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _connectionReplyQueue;
    NSObject<OS_dispatch_queue> * _connectionSendIsolation;
}

- (void).cxx_destruct;
- (void)_handleEditionUpgrade:(id)arg1;
- (void)_handleError:(id)arg1;
- (void)_handleEvent:(id)arg1;
- (void)_handleNetworkBegan:(id)arg1;
- (void)_handleTile:(id)arg1;
- (void)_sendMessage:(id)arg1;
- (bool)_sendMessage:(id)arg1 withReply:(id /* block */)arg2;
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
- (void)reportCorruptTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)reprioritizeKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 newPriority:(unsigned int)arg2;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1;
- (bool)skipNetworkForKeysWhenPreloading:(id)arg1;

@end
