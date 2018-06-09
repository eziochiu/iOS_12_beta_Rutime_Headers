/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXRootSettings : PXSettings {
    PXAssetsSceneSettings * _assetsScene;
    PXCompleteMyMomentSettings * _completeMyMoment;
    PXDiagnosticsSettings * _diagnostics;
    PXDragAndDropSettings * _dragAndDrop;
    PXForYouSettings * _forYou;
    PXImageModulationSettings * _imageModulationSettings;
    PXKitSettings * _kit;
    PXMemoriesRelatedSettings * _memoriesRelated;
    PXMemoriesFeedSettings * _memoryFeed;
    PXModelSettings * _model;
    PXPeopleDetailSettings * _peopleDetail;
    PXPeopleUISettings * _peopleUISettings;
    PXPhotoPickerSettings * _photoPickerSettings;
    PXPhotosDataSourceSettings * _photosDataSource;
    PXPhotosDetailsSettings * _photosDetails;
    PXPhotosDetailsHeaderTileSettings * _photosDetailsHeaderTile;
    PXPhotosLibrarySettings * _photosLibrarySettings;
    PXRelatedSettings * _related;
    PXSharingSettings * _sharingSettings;
    PXSnapBackSettings * _snapBack;
    PXTilingSettings * _tiling;
    PXAssetVariationsSettings * _variationsSettings;
    PXViewControllerTransitionSettings * _viewControllerTransition;
}

@property (nonatomic, retain) PXAssetsSceneSettings *assetsScene;
@property (nonatomic, retain) PXCompleteMyMomentSettings *completeMyMoment;
@property (nonatomic, retain) PXDiagnosticsSettings *diagnostics;
@property (nonatomic, retain) PXDragAndDropSettings *dragAndDrop;
@property (nonatomic, retain) PXForYouSettings *forYou;
@property (nonatomic, retain) PXImageModulationSettings *imageModulationSettings;
@property (nonatomic, retain) PXKitSettings *kit;
@property (nonatomic, retain) PXMemoriesRelatedSettings *memoriesRelated;
@property (nonatomic, retain) PXMemoriesFeedSettings *memoryFeed;
@property (nonatomic, retain) PXModelSettings *model;
@property (nonatomic, retain) PXPeopleDetailSettings *peopleDetail;
@property (nonatomic, retain) PXPeopleUISettings *peopleUISettings;
@property (nonatomic, retain) PXPhotoPickerSettings *photoPickerSettings;
@property (nonatomic, retain) PXPhotosDataSourceSettings *photosDataSource;
@property (nonatomic, retain) PXPhotosDetailsSettings *photosDetails;
@property (nonatomic, retain) PXPhotosDetailsHeaderTileSettings *photosDetailsHeaderTile;
@property (nonatomic, retain) PXPhotosLibrarySettings *photosLibrarySettings;
@property (nonatomic, retain) PXRelatedSettings *related;
@property (nonatomic, retain) PXSharingSettings *sharingSettings;
@property (nonatomic, retain) PXSnapBackSettings *snapBack;
@property (nonatomic, retain) PXTilingSettings *tiling;
@property (nonatomic, retain) PXAssetVariationsSettings *variationsSettings;
@property (nonatomic, retain) PXViewControllerTransitionSettings *viewControllerTransition;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)assetsScene;
- (id)completeMyMoment;
- (id)diagnostics;
- (id)dragAndDrop;
- (id)forYou;
- (id)imageModulationSettings;
- (id)kit;
- (id)memoriesRelated;
- (id)memoryFeed;
- (id)model;
- (id)parentSettings;
- (id)peopleDetail;
- (id)peopleUISettings;
- (id)photoPickerSettings;
- (id)photosDataSource;
- (id)photosDetails;
- (id)photosDetailsHeaderTile;
- (id)photosLibrarySettings;
- (id)related;
- (void)setAssetsScene:(id)arg1;
- (void)setCompleteMyMoment:(id)arg1;
- (void)setDiagnostics:(id)arg1;
- (void)setDragAndDrop:(id)arg1;
- (void)setForYou:(id)arg1;
- (void)setImageModulationSettings:(id)arg1;
- (void)setKit:(id)arg1;
- (void)setMemoriesRelated:(id)arg1;
- (void)setMemoryFeed:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setPeopleDetail:(id)arg1;
- (void)setPeopleUISettings:(id)arg1;
- (void)setPhotoPickerSettings:(id)arg1;
- (void)setPhotosDataSource:(id)arg1;
- (void)setPhotosDetails:(id)arg1;
- (void)setPhotosDetailsHeaderTile:(id)arg1;
- (void)setPhotosLibrarySettings:(id)arg1;
- (void)setRelated:(id)arg1;
- (void)setSharingSettings:(id)arg1;
- (void)setSnapBack:(id)arg1;
- (void)setTiling:(id)arg1;
- (void)setVariationsSettings:(id)arg1;
- (void)setViewControllerTransition:(id)arg1;
- (id)sharingSettings;
- (id)snapBack;
- (id)tiling;
- (id)variationsSettings;
- (id)viewControllerTransition;

@end