/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Track : ML3Entity

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

+ (id)TVShowEpisodesDefaultOrderingTerms;
+ (id)_normalizedImportChapters:(id)arg1 trackPersistentID:(long long)arg2;
+ (bool)_writeSyncDeletesToPlistWithLibrary:(id)arg1 forPersistentIDs:(id)arg2;
+ (id)albumAllArtistsDefaultOrderingTerms;
+ (id)albumAndArtistDefaultOrderingTerms;
+ (id)albumsByAlbumArtistDefaultOrderingTerms;
+ (id)albumsDefaultOrderingTerms;
+ (id)allProperties;
+ (id)artistAllAlbumsDefaultOrderingTerms;
+ (id)artistsDefaultOrderingTerms;
+ (bool)clearLocationFromLibrary:(id)arg1 persistentIDs:(id)arg2;
+ (bool)clearLocationFromLibrary:(id)arg1 persistentIDs:(id)arg2 disableKeepLocal:(bool)arg3;
+ (bool)clearLocationFromLibrary:(id)arg1 persistentIDs:(id)arg2 disableKeepLocal:(bool)arg3 usingConnection:(id)arg4;
+ (bool)clearLocationFromLibrary:(id)arg1 persistentIDs:(id)arg2 usingConnection:(id)arg3;
+ (bool)clearPlaybackKeysFromLibrary:(id)arg1 persistentIDs:(id)arg2;
+ (id)collectionClassesToUpdateBeforeDelete;
+ (id)composersDefaultOrderingTerms;
+ (id)containerQueryWithContainer:(id)arg1;
+ (id)containerQueryWithContainer:(id)arg1 predicate:(id)arg2;
+ (id)containerQueryWithContainer:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3;
+ (id)databaseTable;
+ (id)defaultOrderingTerms;
+ (bool)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned long long)arg4;
+ (bool)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned long long)arg4 usingConnection:(id)arg5;
+ (void)enumeratePathsToDeleteFromLibrary:(id)arg1 persistentIDs:(id)arg2 usingBlock:(id /* block */)arg3;
+ (void)enumeratePathsToDeleteFromLibrary:(id)arg1 persistentIDs:(id)arg2 usingConnection:(id)arg3 usingBlock:(id /* block */)arg4;
+ (id)extraTablesToDelete;
+ (id)extraTablesToInsert;
+ (id)flattenedChapterDataFromDAAPInfoDictionary:(id)arg1 trackPersistentID:(long long)arg2;
+ (id)flattenedChapterDataFromSyncInfoDictionaries:(id)arg1 trackPersistentID:(long long)arg2;
+ (id)flattenedChapterDataWithImportChapters:(id)arg1 library:(id)arg2 trackPersistentID:(long long)arg3;
+ (id)foreignColumnForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)genresDefaultOrderingTerms;
+ (id)importChaptersByParsingAsset:(id)arg1;
+ (void)initialize;
+ (id)joinClausesForProperty:(id)arg1;
+ (bool)libraryContentsChangeForProperty:(id)arg1;
+ (bool)libraryDynamicChangeForProperty:(id)arg1;
+ (id)orderingTermsForITTGTrackOrder:(unsigned int)arg1 descending:(bool)arg2;
+ (id)persistentIDColumnForTable:(id)arg1;
+ (id)podcastsDefaultOrderingTerms;
+ (id)podcastsEpisodesDefaultOrderingTerms;
+ (void)populateSortOrdersOfPropertyValues:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
+ (id)predicateByOptimizingComparisonPredicate:(id)arg1;
+ (id)predisambiguatedProperties;
+ (bool)registerBookmarkMetadataIdentifierFunctionOnConnection:(id)arg1;
+ (bool)removeFromMyLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned long long)arg4;
+ (long long)revisionTrackingCode;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (id)subselectPropertyForProperty:(id)arg1;
+ (id)subselectStatementForProperty:(id)arg1;
+ (bool)trackValueAreInTheCloud:(id)arg1;
+ (bool)trackWithPersistentID:(long long)arg1 existsInLibrary:(id)arg2;
+ (bool)trackWithPersistentID:(long long)arg1 existsInLibraryWithConnection:(id)arg2;
+ (bool)trackWithPersistentID:(long long)arg1 visibleInLibrary:(id)arg2;
+ (bool)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(id)arg2;
+ (bool)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(id)arg2 deletedFileSize:(long long*)arg3;
+ (bool)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(id)arg2 deletionType:(int)arg3 deletedFileSize:(long long*)arg4;
+ (id)unsettableProperties;
+ (void)updateAllBookmarkableStoreBookmarkMetadataIdentifiersOnConnection:(id)arg1;

- (bool)_populateLocationPropertiesWithPath:(id)arg1 protectionType:(long long)arg2 fromLibrary:(id)arg3 usingConnection:(id)arg4;
- (id)absoluteFilePath;
- (id)artworkTokenAtPlaybackTime:(double)arg1;
- (id)chapterTOC;
- (id)computeSHA256OfAudioPacketDataInLocalAsset;
- (void)createVideoSnapshotAtTime:(double)arg1;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4;
- (id)multiverseIdentifier;
- (id)multiverseIdentifierLibraryOnly:(bool)arg1;
- (bool)needsVideoSnapshot;
- (bool)populateArtworkCacheWithArtworkData:(id)arg1;
- (void)populateChapterDataWithImportChapters:(id)arg1;
- (void)populateLocationPropertiesWithPath:(id)arg1;
- (void)populateLocationPropertiesWithPath:(id)arg1 isProtected:(bool)arg2;
- (void)populateLocationPropertiesWithPath:(id)arg1 protectionType:(long long)arg2;
- (void)populateLocationPropertiesWithPath:(id)arg1 protectionType:(long long)arg2 completionBlock:(id /* block */)arg3;
- (id)protocolItem;
- (id)protocolItemForDynamicUpdate;
- (id)rawIntegrity;
- (void)updateCollectionCloudStatus;
- (bool)updateIntegrity;
- (void)updateStoreBookmarkMetadataIdentifier;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)propertyForMPMediaEntityProperty:(id)arg1;

@end
