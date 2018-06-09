/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTabbedLibrarySettings : PXSettings {
    bool  _enableAlbumsTab;
    bool  _enableConsolidatedAlbumsTab;
    bool  _enableForYouTab;
    bool  _enableMemoriesTab;
    bool  _enablePhotosTab;
    bool  _enableSearchTab;
    bool  _enableSharedTab;
}

@property (nonatomic) bool enableAlbumsTab;
@property (nonatomic) bool enableConsolidatedAlbumsTab;
@property (nonatomic) bool enableForYouTab;
@property (nonatomic) bool enableMemoriesTab;
@property (nonatomic) bool enablePhotosTab;
@property (nonatomic) bool enableSearchTab;
@property (nonatomic) bool enableSharedTab;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (id)allTabs;
- (long long)countOfEnabledTabs;
- (bool)enableAlbumsTab;
- (bool)enableConsolidatedAlbumsTab;
- (bool)enableForYouTab;
- (bool)enableMemoriesTab;
- (bool)enablePhotosTab;
- (bool)enableSearchTab;
- (bool)enableSharedTab;
- (id)parentSettings;
- (void)setDefaultValues;
- (void)setEnableAlbumsTab:(bool)arg1;
- (void)setEnableConsolidatedAlbumsTab:(bool)arg1;
- (void)setEnableForYouTab:(bool)arg1;
- (void)setEnableMemoriesTab:(bool)arg1;
- (void)setEnablePhotosTab:(bool)arg1;
- (void)setEnableSearchTab:(bool)arg1;
- (void)setEnableSharedTab:(bool)arg1;

@end
