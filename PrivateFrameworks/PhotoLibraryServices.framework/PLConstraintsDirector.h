/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLConstraintsDirector : NSObject <PLForegroundObserver> {
    NSObject<OS_dispatch_source> * _bonusTimer;
    bool  _didTransitionToOpportunisticDisallowed;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSURL * _photoLibraryURL;
    bool  _photosAppInForeground;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_photoanalysisdIsRunning;
+ (id)sharedConstraintsDirector;

- (void)_addBonusTime;
- (void)_disableAutoFGAndUserFGConstraints;
- (void)dealloc;
- (void)foregroundMonitor:(id)arg1 changedStateToForeground:(bool)arg2 forBundleIdentifier:(id)arg3 context:(id)arg4;
- (void)informCameraAppCameraViewControllerVisibilityChanged:(bool)arg1;
- (void)informOpportunisticTasksAllowed:(bool)arg1;
- (id)initWithPhotoLibraryURL:(id)arg1;

@end
