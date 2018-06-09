/* made by EzioChiu.
 */

@protocol PXDisplayCollection <NSObject, NSCopying>

@required

- (bool)px_isAllPhotosSmartAlbum;
- (bool)px_isFavoriteMemoriesSmartFolder;
- (bool)px_isFavoritesSmartAlbum;
- (bool)px_isFolder;
- (bool)px_isHiddenSmartAlbum;
- (bool)px_isImportedAlbum;
- (bool)px_isMacSyncedAlbum;
- (bool)px_isMacSyncedEventsFolder;
- (bool)px_isMacSyncedFacesFolder;
- (bool)px_isMediaTypeSmartAlbum;
- (bool)px_isMemoriesVirtualCollection;
- (bool)px_isMyPhotoStreamAlbum;
- (bool)px_isOwnedSharedAlbum;
- (bool)px_isPeopleVirtualCollection;
- (bool)px_isPlacesVirtualCollection;
- (bool)px_isRecentlyAddedSmartAlbum;
- (bool)px_isRecentlyDeletedSmartAlbum;
- (bool)px_isSharedAlbum;
- (bool)px_isSmartAlbum;
- (bool)px_isSmartFolder;
- (bool)px_isStandInAlbum;
- (bool)px_isVirtualCollection;

@end
