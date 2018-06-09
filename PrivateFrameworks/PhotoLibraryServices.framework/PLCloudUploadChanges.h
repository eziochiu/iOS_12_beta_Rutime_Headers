/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudUploadChanges : NSObject {
    NSMutableSet * _adjustedAssetUuids;
    NSMutableArray * _albumChanges;
    NSMutableArray * _albumInserts;
    NSMutableArray * _deletedRecords;
    NSMutableSet * _faceChangedAssetUuids;
    NSMutableArray * _faceCropChanges;
    NSMutableArray * _insertedAssets;
    NSMutableArray * _memoryChanges;
    NSMutableArray * _personChanges;
    NSMutableSet * _propertyChangedAssetUuids;
    NSMutableArray * _suggestionChanges;
    NSMutableArray * _updatedAssets;
    NSMutableSet * _updatedRelationship;
}

@property (nonatomic, retain) NSMutableSet *adjustedAssetUuids;
@property (nonatomic, retain) NSMutableArray *albumChanges;
@property (nonatomic, retain) NSMutableArray *albumInserts;
@property (nonatomic, retain) NSMutableArray *deletedRecords;
@property (nonatomic, retain) NSMutableSet *faceChangedAssetUuids;
@property (nonatomic, retain) NSMutableArray *faceCropChanges;
@property (nonatomic, retain) NSMutableArray *insertedAssets;
@property (nonatomic, retain) NSMutableArray *memoryChanges;
@property (nonatomic, retain) NSMutableArray *personChanges;
@property (nonatomic, retain) NSMutableSet *propertyChangedAssetUuids;
@property (nonatomic, retain) NSMutableArray *suggestionChanges;
@property (nonatomic, retain) NSMutableArray *updatedAssets;
@property (nonatomic, retain) NSMutableSet *updatedRelationship;

- (void).cxx_destruct;
- (id)adjustedAssetUuids;
- (id)albumChanges;
- (id)albumInserts;
- (id)deletedRecords;
- (id)faceChangedAssetUuids;
- (id)faceCropChanges;
- (id)init;
- (id)insertedAssets;
- (bool)isEmpty;
- (id)memoryChanges;
- (id)personChanges;
- (id)propertyChangedAssetUuids;
- (void)setAdjustedAssetUuids:(id)arg1;
- (void)setAlbumChanges:(id)arg1;
- (void)setAlbumInserts:(id)arg1;
- (void)setDeletedRecords:(id)arg1;
- (void)setFaceChangedAssetUuids:(id)arg1;
- (void)setFaceCropChanges:(id)arg1;
- (void)setInsertedAssets:(id)arg1;
- (void)setMemoryChanges:(id)arg1;
- (void)setPersonChanges:(id)arg1;
- (void)setPropertyChangedAssetUuids:(id)arg1;
- (void)setSuggestionChanges:(id)arg1;
- (void)setUpdatedAssets:(id)arg1;
- (void)setUpdatedRelationship:(id)arg1;
- (id)suggestionChanges;
- (id)summaryDescription;
- (id)updatedAssets;
- (id)updatedRelationship;

@end
