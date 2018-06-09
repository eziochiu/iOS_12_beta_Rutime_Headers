/* made by EzioChiu.
 */

@protocol MPMediaLibraryDataProviderPrivate <MPMediaLibraryDataProvider>

@optional

- (void)addGlobalPlaylistWithID:(void *)arg1 andAddToCloudLibrary:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addItemWithIdentifier:(void *)arg1 toPlaylistWithIdentifier:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 8: long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)addItemsWithIdentifiers:(void *)arg1 toPlaylistWithIdentifier:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 8: NSArray *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)addNonLibraryOwnedPlaylistsWithGlobalIDs:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)addPlaylistStoreItemsForLookupItems:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (long long)addPlaylistWithValuesForProperties:(NSDictionary *)arg1;
- (void)addTracksToMyLibrary:(NSArray *)arg1;
- (void)clearLocationPropertiesOfItemWithIdentifier:(long long)arg1;
- (bool)collectionExistsContainedWithinPersistentIDs:(const unsigned long long*)arg1 count:(unsigned long long)arg2 groupingType:(long long)arg3 existentPID:(unsigned long long*)arg4;
- (bool)collectionExistsContainedWithinSyncIDs:(NSArray *)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
- (bool)collectionExistsWithCloudUniversalLibraryID:(NSString *)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
- (bool)collectionExistsWithName:(NSString *)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
- (bool)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2;
- (bool)collectionExistsWithSagaID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
- (bool)collectionExistsWithStoreID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
- (<MPArtworkDataSource> *)completeMyCollectionArtworkDataSource;
- (void*)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long*)arg1 count:(unsigned long long)arg2 error:(id*)arg3;
- (NSString *)databasePath;
- (bool)deleteDatabaseProperty:(NSString *)arg1;
- (bool)deleteItemsWithIdentifiers:(long long*)arg1 count:(unsigned long long)arg2;
- (long long*)generateItemIdentifiersForGeniusClusterPlaylist:(void*)arg1 count:(unsigned long long*)arg2 error:(id*)arg3;
- (void)geniusItemsForSeedItem:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MPMediaItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (bool)hasGeniusMixes;
- (bool)hasMediaOfType:(unsigned long long)arg1;
- (bool)hasUbiquitousBookmarkableItems;
- (void)importArtworkTokenForEntityPersistentID:(unsigned long long)arg1 entityType:(long long)arg2 artworkToken:(NSString *)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5;
- (bool)importOriginalArtworkFromImageData:(NSData *)arg1 withArtworkToken:(NSString *)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned long long)arg5;
- (bool)isCurrentThreadInTransaction;
- (bool)isGeniusEnabled;
- (bool)itemExistsWithPersistentID:(unsigned long long)arg1;
- (long long)itemPersistentIDForStoreID:(long long)arg1;
- (NSDate *)lastModifiedDate;
- (NSString *)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1;
- (NSArray *)localizedSectionIndexTitles;
- (void)moveItemFromIndex:(void *)arg1 toIndex:(void *)arg2 inPlaylistWithIdentifier:(void *)arg3 completionBlock:(void *)arg4; // needs 4 arg types, found 9: unsigned long long, unsigned long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (MIPMultiverseIdentifier *)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(long long)arg2;
- (MIPMultiverseIdentifier *)multiverseIdentifierForTrackWithPersistentID:(long long)arg1;
- (void)performReadTransactionWithBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performStoreItemLibraryImport:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: MPStoreItemLibraryImport *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (bool)performTransactionWithBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, void*
- (long long)playbackHistoryPlaylistPersistentID;
- (bool)playlistExistsWithPersistentID:(unsigned long long)arg1;
- (void)populateLocationPropertiesOfItemWithIdentifier:(long long)arg1 withPath:(NSString *)arg2 assetProtectionType:(long long)arg3;
- (void)populateLocationPropertiesOfItemWithIdentifier:(void *)arg1 withPath:(void *)arg2 assetProtectionType:(void *)arg3 completionBlock:(void *)arg4; // needs 4 arg types, found 10: long long, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSArray *)preferredAudioLanguages;
- (NSArray *)preferredSubtitleLanguages;
- (bool)recordPlayEventForAlbumPersistentID:(long long)arg1;
- (bool)recordPlayEventForPlaylistPersistentID:(long long)arg1;
- (void)releaseGeniusClusterPlaylist:(void*)arg1;
- (void)removeAllItemsInPlaylistWithIdentifier:(long long)arg1;
- (void)removeFirstItemFromPlaylistWithIdentifier:(long long)arg1;
- (void)removeItemsAtIndexes:(void *)arg1 inPlaylistWithIdentifier:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 8: NSIndexSet *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)removeItemsWithIdentifiers:(long long*)arg1 count:(unsigned long long)arg2;
- (bool)removePlaylistWithIdentifier:(long long)arg1;
- (void)sdk_addItemWithOpaqueID:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)sdk_addItemWithOpaqueIdentifier:(void *)arg1 toPlaylistWithIdentifier:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 8: NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (long long)sdk_addPlaylistWithValuesForProperties:(NSDictionary *)arg1;
- (void)seedPlaylistWithIdentifier:(void *)arg1 withItemWithIdentifier:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 9: long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setItemsWithIdentifiers:(void *)arg1 forPlaylistWithIdentifier:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 8: NSArray *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)setValue:(id)arg1 forDatabaseProperty:(NSString *)arg2;
- (void)setValue:(void *)arg1 forProperty:(void *)arg2 ofCollectionWithIdentifier:(void *)arg3 groupingType:(void *)arg4 completionBlock:(void *)arg5; // needs 5 arg types, found 11: id, NSString *, long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setValue:(void *)arg1 forProperty:(void *)arg2 ofItemWithIdentifier:(void *)arg3 completionBlock:(void *)arg4; // needs 4 arg types, found 10: id, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setValue:(void *)arg1 forProperty:(void *)arg2 ofPlaylistWithIdentifier:(void *)arg3 completionBlock:(void *)arg4; // needs 4 arg types, found 10: id, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setValues:(NSArray *)arg1 forProperties:(NSArray *)arg2 forItemPersistentIDs:(NSArray *)arg3;
- (bool)supportsEntityChangeTrackingForMediaEntityType:(long long)arg1 collectionGroupingType:(long long)arg2 dataProviderClass:(out Class*)arg3;
- (void)updateEntitesToCurrentRevision;
- (id)valueForDatabaseProperty:(NSString *)arg1;

@end
