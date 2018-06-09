/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBLaunchImageProvider : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableSet * _blacklistedBundleIdentifiers;
    <BSInvalidatable> * _stateCaptureAssertion;
    NSObject<OS_dispatch_queue> * _workQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addStateCaptureHandler;
- (void)_blacklistApp:(id)arg1 forError:(id)arg2;
- (void)_clearBlacklistForApp:(id)arg1;
- (void)_generateImageForSnapshot:(id)arg1 inManifest:(id)arg2 withContext:(id)arg3 dataProvider:(id)arg4 completion:(id /* block */)arg5;
- (bool)_isAppBlacklisted:(id)arg1;
- (void)captureLaunchImageForManifest:(id)arg1 withCompatibilityInfo:(id)arg2 launchRequests:(id)arg3 firstImageIsReady:(id /* block */)arg4 withCompletionHandler:(id /* block */)arg5;
- (id /* block */)createLaunchImageGeneratorWithContext:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)preheatServiceWithTimeout:(double)arg1;

@end
