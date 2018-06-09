/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImportSession : PLGenericAlbum {
    bool  _albumShouldBeAutomaticallyDeleted;
    bool  _needsPersistenceUpdate;
}

@property (nonatomic) bool albumShouldBeAutomaticallyDeleted;
@property (nonatomic, retain) NSOrderedSet *assets;
@property (nonatomic) bool needsPersistenceUpdate;

+ (id)albumWithImportSessionID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)insertNewImportSessionAlbumWithImportSessionID:(id)arg1 inManagedObjectContext:(id)arg2;

- (bool)albumShouldBeAutomaticallyDeleted;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)didSave;
- (bool)isEmpty;
- (id)mutableAssets;
- (bool)needsPersistenceUpdate;
- (void)persistMetadataToFileSystem;
- (void)prepareForDeletion;
- (void)removePersistedFileSystemData;
- (void)revalidateImportDates;
- (void)setAlbumShouldBeAutomaticallyDeleted:(bool)arg1;
- (void)setNeedsPersistenceUpdate:(bool)arg1;
- (bool)validateImportSessionID:(id*)arg1 error:(id*)arg2;
- (void)willSave;

@end
