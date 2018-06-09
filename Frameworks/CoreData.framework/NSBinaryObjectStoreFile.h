/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSBinaryObjectStoreFile : NSObject {
    int  _databaseVersion;
    NSDictionary * _fullMetadata;
    NSMutableDictionary * _mapData;
    unsigned long long  _primaryKeyGeneration;
    NSDictionary * _storeOptions;
}

- (bool)_writeMetadataData:(id)arg1 andMapDataData:(id)arg2 toFile:(id)arg3 error:(id*)arg4;
- (void)clearCurrentValues;
- (int)databaseVersion;
- (void)dealloc;
- (id)fullMetadata;
- (id)mapData;
- (unsigned long long)primaryKeyGeneration;
- (bool)readBinaryStoreFromData:(id)arg1 originalPath:(id)arg2 error:(id*)arg3;
- (bool)readFromFile:(id)arg1 error:(id*)arg2;
- (bool)readMetadataFromFile:(id)arg1 securely:(bool)arg2 error:(id*)arg3;
- (void)setDatabaseVersion:(int)arg1;
- (void)setFullMetadata:(id)arg1;
- (void)setMapData:(id)arg1;
- (void)setPrimaryKeyGeneration:(unsigned long long)arg1;
- (bool)writeMetadataToFile:(id)arg1 error:(id*)arg2;
- (bool)writeToFile:(id)arg1 error:(id*)arg2;

@end
