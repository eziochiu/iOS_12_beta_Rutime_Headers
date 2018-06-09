/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavdCachePersistenceManager : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    GEONavdCacheDBReader * _reader;
    GEONavdCacheDBWriter * _writer;
}

- (void).cxx_destruct;
- (void)_deleteFromDiskWithKey:(id)arg1;
- (void)_deleteRowWithRowId:(long long)arg1;
- (long long)_dumpToDiskWithKey:(id)arg1 value:(id)arg2;
- (id)_entryWithRowId:(long long)arg1;
- (void)_enumerateAllEntriesWithHandler:(id /* block */)arg1;
- (void)_enumerateAllForCacheEntriesWithHandler:(id /* block */)arg1;
- (double)_nextTimeStampForRefreshTimer;
- (long long)_numberOfEntries;
- (id)_readValueWithKey:(id)arg1;
- (void)_removeAllEntries;
- (void)_removeOldFormatCache;
- (long long)_rowIdOfKey:(id)arg1;
- (id)_rowIdsOfEntriesBeforeTimeStamp:(double)arg1;
- (long long)_threadUnsafeRowIdOfKey:(id)arg1;
- (id)initWithPath:(id)arg1;
- (void)tearDown;

@end