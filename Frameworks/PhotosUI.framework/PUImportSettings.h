/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImportSettings : PXSettings {
    bool  _disableAssetDeletion;
    bool  _hide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem;
    bool  _lazyLoadAllAssets;
    bool  _loadActualThumbnails;
    bool  _longPressForOneUpInCompactMode;
    bool  _longPressForOneUpInPadSpec;
    bool  _oneUpCellsShouldFadeWhenSelected;
    bool  _showImportItemFilenames;
    bool  _showNewestItemsInGridUntilScrolled;
    bool  _showSelectionButtonsInHeaders;
    long long  _simulatedBatteryLevel;
    bool  _useThumbnailSizesAsImageSizeHints;
}

@property (nonatomic) bool disableAssetDeletion;
@property (nonatomic) bool hide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem;
@property (nonatomic) bool lazyLoadAllAssets;
@property (nonatomic) bool loadActualThumbnails;
@property (nonatomic) bool longPressForOneUpInCompactMode;
@property (nonatomic) bool longPressForOneUpInPadSpec;
@property (nonatomic) bool oneUpCellsShouldFadeWhenSelected;
@property (nonatomic) bool showImportItemFilenames;
@property (nonatomic) bool showNewestItemsInGridUntilScrolled;
@property (nonatomic) bool showSelectionButtonsInHeaders;
@property (nonatomic) long long simulatedBatteryLevel;
@property (nonatomic) bool useThumbnailSizesAsImageSizeHints;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)disableAssetDeletion;
- (bool)hide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem;
- (bool)lazyLoadAllAssets;
- (bool)loadActualThumbnails;
- (bool)longPressForOneUpInCompactMode;
- (bool)longPressForOneUpInPadSpec;
- (bool)oneUpCellsShouldFadeWhenSelected;
- (id)parentSettings;
- (void)setDefaultValues;
- (void)setDisableAssetDeletion:(bool)arg1;
- (void)setHide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem:(bool)arg1;
- (void)setLazyLoadAllAssets:(bool)arg1;
- (void)setLoadActualThumbnails:(bool)arg1;
- (void)setLongPressForOneUpInCompactMode:(bool)arg1;
- (void)setLongPressForOneUpInPadSpec:(bool)arg1;
- (void)setOneUpCellsShouldFadeWhenSelected:(bool)arg1;
- (void)setShowImportItemFilenames:(bool)arg1;
- (void)setShowNewestItemsInGridUntilScrolled:(bool)arg1;
- (void)setShowSelectionButtonsInHeaders:(bool)arg1;
- (void)setSimulatedBatteryLevel:(long long)arg1;
- (void)setUseThumbnailSizesAsImageSizeHints:(bool)arg1;
- (bool)showImportItemFilenames;
- (bool)showNewestItemsInGridUntilScrolled;
- (bool)showSelectionButtonsInHeaders;
- (long long)simulatedBatteryLevel;
- (bool)useThumbnailSizesAsImageSizeHints;

@end
