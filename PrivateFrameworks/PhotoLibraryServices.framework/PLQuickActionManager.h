/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLQuickActionManager : NSObject {
    Class  __SBSApplicationShortcutCustomImageIconClass;
    Class  __SBSApplicationShortcutItemClass;
    Class  __SBSApplicationShortcutServiceClass;
    SBSApplicationShortcutService * __appShortcutService;
    NSData * __cachedMostRecentPhotoData;
    bool  __mostRecentPhotoIsInvalid;
    id  _cameraWellObserver;
    id  _localeObserver;
    NSOperationQueue * _operationQueue;
}

@property (setter=_setSBSApplicationShortcutCustomImageIconClass:, nonatomic, retain) Class _SBSApplicationShortcutCustomImageIconClass;
@property (setter=_setSBSApplicationShortcutItemClass:, nonatomic, retain) Class _SBSApplicationShortcutItemClass;
@property (setter=_setSBSApplicationShortcutServiceClass:, nonatomic, retain) Class _SBSApplicationShortcutServiceClass;
@property (setter=_setAppShortcutService:, nonatomic, retain) SBSApplicationShortcutService *_appShortcutService;
@property (setter=_setCachedMostRecentPhotoData:, nonatomic, retain) NSData *_cachedMostRecentPhotoData;
@property (setter=_setMostRecentPhotoIsInvalid:, nonatomic) bool _mostRecentPhotoIsInvalid;

+ (id)sharedManager;

- (Class)_SBSApplicationShortcutCustomImageIconClass;
- (Class)_SBSApplicationShortcutItemClass;
- (Class)_SBSApplicationShortcutServiceClass;
- (id)_appShortcutService;
- (id)_buildFavoritesQuickAction;
- (id)_buildMostRecentPhotoQuickAction;
- (id)_buildOneYearAgoQuickAction:(id)arg1;
- (id)_buildSearchQuickAction;
- (id)_cachedMostRecentPhotoData;
- (bool)_mostRecentPhotoIsInvalid;
- (void)_setAppShortcutService:(id)arg1;
- (void)_setCachedMostRecentPhotoData:(id)arg1;
- (void)_setMostRecentPhotoIsInvalid:(bool)arg1;
- (void)_setSBSApplicationShortcutCustomImageIconClass:(Class)arg1;
- (void)_setSBSApplicationShortcutItemClass:(Class)arg1;
- (void)_setSBSApplicationShortcutServiceClass:(Class)arg1;
- (id)_shortcutImageNamed:(id)arg1;
- (bool)_userHasPhotos:(id)arg1;
- (bool)_userHasPhotosFromLastYear:(id)arg1;
- (void)buildQuickActionItems;
- (void)cameraPreviewWellImageDidChange;
- (void)dealloc;
- (id)init;
- (void)rebuildQuickActionForLocaleChanges;

@end
