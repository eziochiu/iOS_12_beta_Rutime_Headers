/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MLITDBGeniusDatabase : NSObject

@property (nonatomic, readonly) ML3MusicLibrary *musicLibrary;

+ (id)sharedGeniusDatabase;

- (bool)_copyBlobData:(id*)arg1 blobAllocType:(int)arg2 table:(id)arg3 blobColumn:(id)arg4 where:(id)arg5;
- (id)_copyBlobDataAndBytesInTable:(id)arg1 blobColumn:(id)arg2 where:(id)arg3;
- (unsigned int)_getInt32ValueInTable:(id)arg1 column:(id)arg2;
- (unsigned long long)_getInt64ValueInTable:(id)arg1 column:(id)arg2 where:(id)arg3 limit:(unsigned int)arg4;
- (bool)_hasAnySongs;
- (bool)_hasRowsInTable:(id)arg1;
- (bool)_readBlobForRowID:(unsigned long long)arg1 intoData:(id)arg2 table:(const char *)arg3 blobColumn:(const char *)arg4;
- (bool)_readBlobIntoData:(id)arg1 table:(id)arg2 blobColumn:(id)arg3 where:(id)arg4;
- (id)copyGeniusConfigrationDataAndBytes;
- (id)copyGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)arg1;
- (id)copyGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)arg1;
- (unsigned long long)defaultMinTrackCount;
- (unsigned long long)defaultTrackCount;
- (unsigned int)geniusConfigurationVersion;
- (bool)getGeniusConfigrationDataAndBytesIntoData:(id)arg1;
- (bool)getGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)arg1 intoData:(id)arg2;
- (bool)getGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)arg1 intoData:(id)arg2;
- (bool)hasGeniusDataAvailable;
- (bool)hasGeniusFeatureEnabled;
- (id)init;
- (id)musicLibrary;
- (void)performGeniusDatabaseReadWithBlock:(id /* block */)arg1;

@end
