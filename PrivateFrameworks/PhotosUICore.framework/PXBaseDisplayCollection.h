/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXBaseDisplayCollection : NSObject <PXDisplayCollection>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool px_isAllPhotosSmartAlbum;
@property (nonatomic, readonly) bool px_isFavoriteMemoriesSmartFolder;
@property (nonatomic, readonly) bool px_isFavoritesSmartAlbum;
@property (nonatomic, readonly) bool px_isFolder;
@property (nonatomic, readonly) bool px_isHiddenSmartAlbum;
@property (nonatomic, readonly) bool px_isImportedAlbum;
@property (nonatomic, readonly) bool px_isMacSyncedAlbum;
@property (nonatomic, readonly) bool px_isMacSyncedEventsFolder;
@property (nonatomic, readonly) bool px_isMacSyncedFacesFolder;
@property (nonatomic, readonly) bool px_isMediaTypeSmartAlbum;
@property (nonatomic, readonly) bool px_isMemoriesVirtualCollection;
@property (nonatomic, readonly) bool px_isMyPhotoStreamAlbum;
@property (nonatomic, readonly) bool px_isOwnedSharedAlbum;
@property (nonatomic, readonly) bool px_isPeopleVirtualCollection;
@property (nonatomic, readonly) bool px_isPlacesVirtualCollection;
@property (nonatomic, readonly) bool px_isRecentlyAddedSmartAlbum;
@property (nonatomic, readonly) bool px_isRecentlyDeletedSmartAlbum;
@property (nonatomic, readonly) bool px_isSharedAlbum;
@property (nonatomic, readonly) bool px_isSmartAlbum;
@property (nonatomic, readonly) bool px_isSmartFolder;
@property (nonatomic, readonly) bool px_isStandInAlbum;
@property (nonatomic, readonly) bool px_isVirtualCollection;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
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
