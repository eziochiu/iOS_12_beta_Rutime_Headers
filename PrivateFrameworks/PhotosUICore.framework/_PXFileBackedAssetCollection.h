/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXFileBackedAssetCollection : PXBaseDisplayCollection <PXDisplayAssetCollection>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
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
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)endDate;
- (bool)isAggregation;
- (bool)isEnriched;
- (bool)isRecent;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (double)promotionScore;
- (id)startDate;

@end
