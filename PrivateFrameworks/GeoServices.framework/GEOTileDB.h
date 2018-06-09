/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileDB : NSObject {
    GEOCountryConfiguration * _countryConfiguration;
    GEOSQLiteDB * _db;
    NSString * _devicePostureCountry;
    NSString * _devicePostureLocale;
    NSString * _devicePostureRegion;
    NSMutableDictionary * _editionsMap;
    struct { unsigned int x1; double x2; } * _expirationRecords;
    unsigned long long  _expirationRecordsCount;
    NSObject<OS_dispatch_queue> * _infrequentlyChangingMetadataQueue;
    GEOResourceManifestManager * _manifestManager;
    unsigned long long  _maxDatabaseSize;
    bool  _preloading;
    unsigned long long  _tileDataSize;
    bool  _tileDataSizeIsValid;
    _GEOTileDBWriteQueue * _writeQueue;
}

@property (nonatomic, readonly) NSString *devicePostureCountry;
@property (nonatomic, readonly) NSString *devicePostureRegion;

- (void).cxx_destruct;
- (void)_addDataOnDBQueueWithData:(id)arg1 key:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 tileSet:(unsigned int)arg3 ETag:(id)arg4 reason:(unsigned char)arg5;
- (unsigned long long)_allTileDataSize;
- (void)_countryChanged:(id)arg1;
- (bool)_dataForKeyOnDBQueue:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 reason:(unsigned char)arg2 callbackQueue:(id)arg3 dataHandler:(id /* block */)arg4;
- (void)_decrementCalculatedTileDataSize:(unsigned long long)arg1;
- (void)_deleteDataOnDBQueueForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)_deleteTileSet:(unsigned int)arg1;
- (void)_deviceLocked:(id)arg1;
- (void)_dropAllTileData;
- (void)_editionUpdate:(id)arg1;
- (void)_evictIfNecessary;
- (void)_evictVeryOldTiles;
- (void)_flushPendingWrites;
- (void)_incrementCalculatedTileDataSize:(unsigned long long)arg1;
- (void)_invalidateAllTileData;
- (void)_invalidateTileSet:(unsigned int)arg1;
- (void)_invalidateTileSetsForNewDevicePostureCountry:(id)arg1 newDevicePostureRegion:(id)arg2 oldDevicePostureCountry:(id)arg3 oldDevicePostureRegion:(id)arg4;
- (bool)_isTileSetTTLExpired:(unsigned int)arg1 age:(double)arg2;
- (void)_localeChanged:(id)arg1;
- (bool)_markExistingTileDataAsCurrentOnDBQueue:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 reason:(unsigned char)arg2;
- (void)_performInTransaction:(id /* block */)arg1;
- (void)_performOnDBQueue:(id /* block */)arg1;
- (void)_setEdition:(unsigned int)arg1 forTileSet:(unsigned int)arg2;
- (void)_setLastAccessTimeOnDBQueue:(double)arg1 forKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2;
- (bool)_setup:(id)arg1;
- (unsigned long long)_shrinkBySize:(unsigned long long)arg1;
- (unsigned long long)_shrinkBySizeSlow:(unsigned long long)arg1;
- (unsigned long long)_shrinkToSize:(unsigned long long)arg1;
- (void)_updateDevicePosture;
- (void)addData:(id)arg1 forKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 edition:(unsigned int)arg3 set:(unsigned int)arg4 provider:(unsigned int)arg5 etag:(id)arg6 reason:(unsigned char)arg7;
- (void)addData:(id)arg1 forKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 edition:(unsigned int)arg3 set:(unsigned int)arg4 provider:(unsigned int)arg5 etag:(id)arg6 reason:(unsigned char)arg7 isIdenticalToExistingStaleData:(bool)arg8;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;
- (void)calculateFreeableSizeWithQueue:(id)arg1 handler:(id /* block */)arg2;
- (void)dataForKeys:(id)arg1 reason:(unsigned char)arg2 group:(id)arg3 callbackQueue:(id)arg4 dataHandler:(id /* block */)arg5;
- (void)deleteDataForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)devicePostureCountry;
- (id)devicePostureRegion;
- (void)endPreloadSession;
- (void)evaluateDevicePostureAgainstCurrentManifest:(id)arg1;
- (void)evictVeryOldTilesWithGroup:(id)arg1;
- (void)flushPendingWritesWithGroup:(id)arg1;
- (void)getLastAccessTimestampForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 callbackQueue:(id)arg2 callback:(id /* block */)arg3;
- (void)getStaleTileKeysUsedSince:(double)arg1 fromTileSets:(id)arg2 maxCount:(unsigned long long)arg3 maxTotalSize:(unsigned long long)arg4 queue:(id)arg5 callback:(id /* block */)arg6;
- (id)init;
- (id)initWithDBFilePath:(id)arg1;
- (id)initWithDBFilePath:(id)arg1 manifestManager:(id)arg2 countryConfiguration:(id)arg3 maximumDatabaseSize:(unsigned long long)arg4;
- (void)setExpirationRecords:(struct { unsigned int x1; double x2; }*)arg1 count:(unsigned long long)arg2;
- (void)shrinkBySize:(unsigned long long)arg1 queue:(id)arg2 callback:(id /* block */)arg3;
- (void)shrinkToSize:(unsigned long long)arg1 queue:(id)arg2 finished:(id /* block */)arg3;
- (void)tearDown;

@end
