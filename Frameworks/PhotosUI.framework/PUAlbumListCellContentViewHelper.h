/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAlbumListCellContentViewHelper : NSObject <PXChangeObserver> {
    UIImage * _addSharedAlbumPlaceholderImage;
    PXAssetBadgeManager * _badgeManager;
    PHCachingImageManager * _cachingImageManager;
    PXCollectionTileLayoutTemplate * _collectionTileLayoutTemplate;
    PUAlbumListCellContentViewHelperConfiguration * _configuration;
    PXPhotoKitCollectionsDataSourceManager * _dataSourceManager;
    bool  _didInitializeMemoriesTitleSupport;
    UIImage * _emptyAlbumPlaceholderImage;
    UIImage * _emptySharedAlbumPlaceholderImage;
    PXFeatureSpec * _featureSpec;
    PXFeatureSpecManager * _featureSpecManager;
    PUFontManager * _fontManager;
    UIImage * _hiddenAlbumPlaceholderImage;
    PHImageRequestOptions * _imageRequestOptions;
    UIImage * _recentlyDeletedAlbumPlaceholderImage;
    PXExtendedTraitCollection * _traitCollection;
}

@property (nonatomic, retain) UIImage *addSharedAlbumPlaceholderImage;
@property (nonatomic, retain) PXAssetBadgeManager *badgeManager;
@property (nonatomic, retain) PHCachingImageManager *cachingImageManager;
@property (nonatomic, retain) PXCollectionTileLayoutTemplate *collectionTileLayoutTemplate;
@property (nonatomic, readonly) PUAlbumListCellContentViewHelperConfiguration *configuration;
@property (nonatomic, readonly) PXPhotoKitCollectionsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didInitializeMemoriesTitleSupport;
@property (nonatomic, retain) UIImage *emptyAlbumPlaceholderImage;
@property (nonatomic, retain) UIImage *emptySharedAlbumPlaceholderImage;
@property (nonatomic, retain) PXFeatureSpec *featureSpec;
@property (nonatomic, retain) PXFeatureSpecManager *featureSpecManager;
@property (nonatomic, retain) PUFontManager *fontManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *hiddenAlbumPlaceholderImage;
@property (nonatomic, retain) PHImageRequestOptions *imageRequestOptions;
@property (nonatomic, retain) UIImage *recentlyDeletedAlbumPlaceholderImage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXExtendedTraitCollection *traitCollection;

+ (id)_placeholderImageWithSize:(struct CGSize { double x1; double x2; })arg1 backgroundColor:(id)arg2 glyphImageName:(id)arg3 glyphAlpha:(double)arg4;

- (void).cxx_destruct;
- (unsigned long long)_editCapabilitiesForAlbum:(id)arg1;
- (void)_getDisplayableAssets:(id*)arg1 indexes:(id*)arg2 forCollection:(id)arg3 maximumCount:(long long)arg4 useCache:(bool)arg5;
- (id)_getDisplayableAssetsForStandInCollectionList:(id)arg1 maximumCount:(long long)arg2 useCache:(bool)arg3 correspondingCollections:(out id*)arg4;
- (id)_getDisplayableFacesForCollectionList:(id)arg1 maximumCount:(long long)arg2;
- (void)_initializeMemoriesTitleSupportIfNeeded;
- (void)_prepareStackView:(id)arg1 forCollection:(id)arg2 withStackCount:(long long)arg3 withCustomEmptyPlaceHolderImage:(id)arg4;
- (void)_updateAlbumListCellContentViewForPeopleAlbum:(id)arg1;
- (void)_updateStackView:(id)arg1 forAssets:(id)arg2 collection:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4;
- (void)_updateStackView:(id)arg1 forAssets:(id)arg2 memoriesCollection:(id)arg3 memories:(id)arg4 withCustomEmptyPlaceholderImage:(id)arg5;
- (void)_updateStackView:(id)arg1 forFaces:(id)arg2 inCollection:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4;
- (id)_visibleAssetsForCollection:(id)arg1 correspondingCollections:(out id*)arg2;
- (id)_visibleAssetsForCollection:(id)arg1 maximumNumberOfVisibleAssets:(long long)arg2 correspondingCollections:(out id*)arg3;
- (id)addSharedAlbumPlaceholderImage;
- (struct CGSize { double x1; double x2; })albumCellSize;
- (id)badgeManager;
- (id)cachingImageManager;
- (id)collectionTileLayoutTemplate;
- (id)configuration;
- (void)configureAlbumListCellContentView:(id)arg1 forCollection:(id)arg2 title:(id)arg3 animated:(bool)arg4 enabled:(bool)arg5 editing:(bool)arg6;
- (id)dataSourceManager;
- (bool)didInitializeMemoriesTitleSupport;
- (id)emptyAlbumPlaceholderImage;
- (id)emptySharedAlbumPlaceholderImage;
- (long long)estimatedIndexOfAssetForStackItemAtIndex:(long long)arg1 inCollection:(id)arg2 albumListCellContentView:(id)arg3;
- (id)featureSpec;
- (id)featureSpecManager;
- (id)fontManager;
- (id)hiddenAlbumPlaceholderImage;
- (id)imageRequestOptions;
- (id)initWithConfiguration:(id)arg1 dataSourceManager:(id)arg2 extendedTraitCollection:(id)arg3;
- (void)invalidateFontManager;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)recentlyDeletedAlbumPlaceholderImage;
- (void)reconfigureImageInAlbumListCellContentView:(id)arg1 withPlaceholderImage:(id)arg2;
- (void)setAddSharedAlbumPlaceholderImage:(id)arg1;
- (void)setBadgeManager:(id)arg1;
- (void)setCachingImageManager:(id)arg1;
- (void)setCollectionTileLayoutTemplate:(id)arg1;
- (void)setDidInitializeMemoriesTitleSupport:(bool)arg1;
- (void)setEmptyAlbumPlaceholderImage:(id)arg1;
- (void)setEmptySharedAlbumPlaceholderImage:(id)arg1;
- (void)setFeatureSpec:(id)arg1;
- (void)setFeatureSpecManager:(id)arg1;
- (void)setFontManager:(id)arg1;
- (void)setHiddenAlbumPlaceholderImage:(id)arg1;
- (void)setImageRequestOptions:(id)arg1;
- (void)setRecentlyDeletedAlbumPlaceholderImage:(id)arg1;
- (id)subtitleForCollection:(id)arg1;
- (id)traitCollection;

@end
