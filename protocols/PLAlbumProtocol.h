/* made by EzioChiu.
 */

@protocol PLAlbumProtocol <PLAssetContainer>

@required

- (void)batchFetchAssets:(NSOrderedSet *)arg1;
- (bool)canContributeToCloudSharedAlbum;
- (NSURL *)groupURL;
- (bool)hasUnseenContentBoolValue;
- (NSString *)importSessionID;
- (bool)isCameraAlbum;
- (bool)isCloudSharedAlbum;
- (bool)isFamilyCloudSharedAlbum;
- (bool)isFolder;
- (bool)isInTrash;
- (bool)isLibrary;
- (bool)isMultipleContributorCloudSharedAlbum;
- (bool)isOwnedCloudSharedAlbum;
- (bool)isPanoramasAlbum;
- (bool)isPendingPhotoStreamAlbum;
- (bool)isPhotoStreamAlbum;
- (bool)isRecentlyAddedAlbum;
- (bool)isStandInAlbum;
- (bool)isUserLibraryAlbum;
- (NSNumber *)kind;
- (int)kindValue;
- (NSMutableOrderedSet *)mutableAssets;
- (int)pendingItemsCount;
- (int)pendingItemsType;
- (UIImage *)posterImage;
- (void)reducePendingItemsCountBy:(unsigned long long)arg1;
- (void)setHasUnseenContentBoolValue:(bool)arg1;
- (void)setImportSessionID:(NSString *)arg1;
- (void)setPendingItemsCount:(int)arg1;
- (void)setPendingItemsType:(int)arg1;
- (void)setSlideshowSettings:(NSDictionary *)arg1;
- (bool)shouldDeleteWhenEmpty;
- (NSDictionary *)slideshowSettings;
- (id /* block */)sortingComparator:(void *)arg1; // needs 1 arg types, found 5: id /* block */, id, void*, id, SEL

@optional

- (unsigned long long)batchSize;
- (NSMutableIndexSet *)filteredIndexesForPredicate:(NSPredicate *)arg1;
- (NSString *)name;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setUINotificationsEnabled:(bool)arg1;

@end
