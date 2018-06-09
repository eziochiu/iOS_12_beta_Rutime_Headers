/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFileSystemAssetImporter : NSObject {
    NSMutableDictionary * _existingOIDsByUUID;
    NSMutableSet * _existingUUIDs;
    NSMutableDictionary * _existingUUIDsByUppercasePath;
    bool  _hasProcessedAnyAssets;
    NSString * _mediaDirectoryPath;
    PLPhotoLibrary * _photoLibrary;
    NSString * _photoLibraryStoreUUID;
    NSMutableIndexSet * _thumbIndexes;
    unsigned long long  _thumbnailBatchFetchSize;
}

@property (nonatomic, retain) NSMutableDictionary *existingOIDsByUUID;
@property (nonatomic, retain) NSMutableSet *existingUUIDs;
@property (nonatomic, retain) NSMutableDictionary *existingUUIDsByUppercasePath;
@property (nonatomic) unsigned long long thumbnailBatchFetchSize;

- (id)_addAssetWithURL:(id)arg1 existingOID:(id)arg2;
- (bool)_setupAdjustmentsFromAdjustmentFileForAsset:(id)arg1;
- (bool)_setupPhotoAsset:(id)arg1 withURL:(id)arg2;
- (bool)_setupPhotoAsset:(id)arg1 withURL:(id)arg2 unknownType:(bool)arg3;
- (bool)_setupPhotoAssetAsPhotoIrisIfNeeded:(id)arg1;
- (bool)_setupUnknownAsset:(id)arg1 withURL:(id)arg2;
- (bool)_setupVideoAsset:(id)arg1 withURL:(id)arg2;
- (id)addAssetWithURLs:(id)arg1 forceInsert:(bool)arg2 forceUpdate:(bool)arg3 fixAddedDate:(bool)arg4;
- (void)addAvailableThumbnailIndex:(unsigned long long)arg1;
- (id)assetURLisInDatabase:(id)arg1;
- (void)dealloc;
- (id)existingOIDsByUUID;
- (id)existingUUIDs;
- (id)existingUUIDsByUppercasePath;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)mediaDirectoryPathWithPhotoLibrary:(id)arg1;
- (unsigned long long)nextThumbnailIndex;
- (void)setExistingOIDsByUUID:(id)arg1;
- (void)setExistingUUIDs:(id)arg1;
- (void)setExistingUUIDsByUppercasePath:(id)arg1;
- (void)setModificationAndCreationDateOnAsset:(id)arg1 withURL:(id)arg2;
- (void)setThumbnailBatchFetchSize:(unsigned long long)arg1;
- (unsigned long long)thumbnailBatchFetchSize;

@end
