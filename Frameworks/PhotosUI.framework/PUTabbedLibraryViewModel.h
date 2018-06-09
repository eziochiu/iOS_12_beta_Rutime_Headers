/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTabbedLibraryViewModel : NSObject {
    PXPreloadScheduler * _preloadScheduler;
    PUTabbedLibrarySettings * _settings;
    NSArray * _tabInfos;
}

@property (nonatomic, retain) PXPreloadScheduler *preloadScheduler;
@property (nonatomic, retain) PUTabbedLibrarySettings *settings;
@property (nonatomic, retain) NSArray *tabInfos;

+ (id)viewModelWithDefaultParameters;

- (void).cxx_destruct;
- (bool)_shouldShowForYouTabForTabbedLibraryViewController:(id)arg1;
- (bool)_shouldShowMemoriesTabForTabbedLibraryViewController:(id)arg1;
- (bool)_shouldShowSearchTabForTabbedLibraryViewController:(id)arg1;
- (bool)_shouldShowSharedTabForTabbedLibraryViewController:(id)arg1;
- (id)initWithSettings:(id)arg1 preloadScheduler:(id)arg2;
- (id)preloadScheduler;
- (void)setPreloadScheduler:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setTabInfos:(id)arg1;
- (id)settings;
- (id)tabInfoForContentMode:(int)arg1;
- (id)tabInfos;
- (bool)tabbedLibraryViewController:(id)arg1 shouldShowTabForContentMode:(int)arg2;
- (id)tabbedLibraryViewController:(id)arg1 tabBarItemForContentMode:(int)arg2;

@end
