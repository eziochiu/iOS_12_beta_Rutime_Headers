/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOTileDBWriteQueue : NSObject {
    GEOTileDB * _db;
    unsigned long long  _maxOperations;
    unsigned long long  _maxOperationsSizeInBytes;
    NSMutableArray * _pendingOperations;
    unsigned long long  _pendingSizeInBytes;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_flushPendingOperations;
- (void)_prunePendingOperationsSupercededByOperationOnIsolationQueue:(id)arg1;
- (void)addOperation:(id)arg1;
- (id)dataForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 ETag:(id*)arg2 originalLoadReason:(unsigned char*)arg3 isKnownNotToExist:(bool*)arg4;
- (void)dropAllPendingOperations;
- (void)flushPendingOperations:(bool)arg1;
- (id)initWithDB:(id)arg1 maxOperations:(unsigned long long)arg2 maxOperationsSizeInBytes:(unsigned long long)arg3;
- (void)prunePendingOperationsSupercededByOperation:(id)arg1;

@end
