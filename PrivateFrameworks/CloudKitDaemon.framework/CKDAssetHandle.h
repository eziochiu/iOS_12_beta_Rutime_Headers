/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAssetHandle : CKObject {
    NSUUID * _UUID;
    NSNumber * _chunkCount;
    NSNumber * _fileID;
    NSData * _fileSignature;
    NSNumber * _fileSize;
    NSNumber * _generationID;
    NSNumber * _itemID;
    NSNumber * _lastUsedTime;
    NSNumber * _modTime;
    NSString * _path;
    NSNumber * _status;
    NSNumber * _volumeIndex;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (nonatomic, retain) NSNumber *chunkCount;
@property (nonatomic, retain) NSNumber *fileID;
@property (nonatomic, retain) NSData *fileSignature;
@property (nonatomic, retain) NSNumber *fileSize;
@property (nonatomic, retain) NSNumber *generationID;
@property (nonatomic, retain) NSNumber *itemID;
@property (nonatomic, retain) NSNumber *lastUsedTime;
@property (nonatomic, retain) NSNumber *modTime;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, retain) NSNumber *status;
@property (nonatomic, retain) NSNumber *volumeIndex;

+ (id)CKSQLiteClassName;
+ (id)descriptionWithStatus:(long long)arg1;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)UUID;
- (id)chunkCount;
- (id)description;
- (id)dictionaryPropertyEncoding;
- (id)fileID;
- (id)fileSignature;
- (id)fileSize;
- (id)generationID;
- (id)initWithItemID:(id)arg1 UUID:(id)arg2 path:(id)arg3;
- (id)initWithPropertyDictionary:(id)arg1;
- (bool)isEqualRevisionOfAssetHandle:(id)arg1 differencesDescription:(id*)arg2;
- (bool)isEqualToAssetHandle:(id)arg1 keys:(id)arg2 differencesDescription:(id*)arg3;
- (id)itemID;
- (id)lastUsedTime;
- (bool)mayBeEvicted;
- (bool)mayHaveAssetCacheManagedFile;
- (id)modTime;
- (id)path;
- (void)setChunkCount:(id)arg1;
- (void)setFileID:(id)arg1;
- (void)setFileSignature:(id)arg1;
- (void)setFileSize:(id)arg1;
- (void)setGenerationID:(id)arg1;
- (void)setItemID:(id)arg1;
- (void)setLastUsedTime:(id)arg1;
- (void)setModTime:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setUUID:(id)arg1;
- (void)setVolumeIndex:(id)arg1;
- (bool)shouldBeUnregisteredBeforeDeleted;
- (id)status;
- (id)statusDescription;
- (id)volumeIndex;

@end
