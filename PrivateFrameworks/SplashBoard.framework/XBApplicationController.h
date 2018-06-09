/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBApplicationController : NSObject {
    FBSDisplayConfiguration * _mainDisplayConfiguration;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_allApplications;
- (id)_allApplicationsFilteredBySystem:(bool)arg1 bySplashBoard:(bool)arg2;
- (void)_captureOrUpdateLaunchImagesForApplications:(id)arg1 firstImageIsReady:(id /* block */)arg2;
- (void)_captureOrUpdateLaunchImagesForApplications:(id)arg1 firstImageIsReady:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_migrateDataIfNeeded;
- (void)_removeCachedLaunchImagesForApplications:(id)arg1 forgettingApps:(bool)arg2;
- (void)_removeLaunchImagesMatchingPredicate:(id)arg1 forApplications:(id)arg2 forgettingApps:(bool)arg3;
- (id)allSplashBoardApplications;
- (id)allSplashBoardSystemApplications;
- (id)init;
- (id)launchRequestsForApplication:(id)arg1 withCompatibilityInfo:(id)arg2;
- (void)removeAllGeneratedLaunchImages;
- (void)removeAllGeneratedLaunchImagesAndSnapshots;
- (void)resetEverything;

@end