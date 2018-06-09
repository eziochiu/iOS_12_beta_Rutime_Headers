/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSystemApp : UIApplication <BKSSystemApplicationDelegate, FBSSceneUpdater, FBSceneClient, FBSceneClientProvider> {
    struct __CFBoolean { } * _darkboot;
    id  _didFinishLaunchingObserver;
    NSMapTable * _hostsByIdentifier;
    FBDisplayLayoutTransition * _interfaceOrientationTransition;
    FBSceneClientProviderInvalidationAction * _invalidationAction;
    NSMutableDictionary * _localSceneInfoByIdentifier;
    struct __CFBoolean { } * _wasDarkboot;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

+ (void)_instantiateAppInfoProvider;
+ (id)_newApplicationLibrary;
+ (void)initializeSystemServices;
+ (void)postFrontBoardInitializationHook;
+ (void)preFrontBoardInitializationHook;
+ (bool)registerAsSystemApp;
+ (bool)rendersLocally;
+ (id)sharedApplicationInfoProvider;
+ (id)sharedApplicationLibrary;
+ (bool)shouldCheckInWithBackboard;
+ (bool)shouldFixMainThreadPriority;
+ (long long)startupInterfaceOrientation;
+ (bool)systemApplicationIsAliveForWatchdog:(id)arg1;
+ (double)systemIdleSleepInterval;

- (void).cxx_destruct;
- (long long)_interfaceOrientationRotationDirectionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (id)_newSceneForWindow:(id)arg1 oldDisplay:(id)arg2 newDisplay:(id)arg3;
- (bool)_openURL:(id)arg1;
- (void)_performApplicationDidFinishLaunchingTasksWithCompletion:(id /* block */)arg1;
- (bool)_saveSnapshotWithName:(id)arg1;
- (void)_setDarkBoot:(bool)arg1;
- (void)_updateSceneSettingsForScene:(id)arg1 layer:(id)arg2;
- (void)beginTransaction;
- (bool)canOpenURL:(id)arg1;
- (void)endTransaction;
- (id)fbsSceneWithIdentifier:(id)arg1;
- (bool)handleDoubleHeightStatusBarTapWithStyleOverride:(int)arg1;
- (void)host:(id)arg1 configureWithDefinition:(id)arg2 parameters:(id)arg3;
- (void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (void)host:(id)arg1 didReceiveActions:(id)arg2;
- (void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(id /* block */)arg5;
- (id)hostProcess;
- (id)init;
- (bool)isBootingDark;
- (bool)isFrontBoard;
- (bool)isSuspended;
- (bool)isSuspendedEventsOnly;
- (bool)isSuspendedUnderLock;
- (unsigned long long)lastExitReason;
- (void)noteActiveInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithSettings:(id)arg2 fromOrientation:(long long)arg3;
- (void)noteActiveInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)registerDelegate:(id)arg1 forSceneID:(id)arg2;
- (id)registerHost:(id)arg1;
- (void)registerInvalidationAction:(id)arg1;
- (void)resetIdleTimerAndUndim;
- (void)scene:(id)arg1 didAttachLayer:(id)arg2;
- (void)scene:(id)arg1 didDetachLayer:(id)arg2;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)scene:(id)arg1 didUpdateLayer:(id)arg2;
- (void)scene:(id)arg1 sendMessage:(id)arg2 withResponse:(id /* block */)arg3;
- (void)sendActionsToBackboard:(id)arg1;
- (void)unregisterDelegateForSceneID:(id)arg1;
- (void)unregisterHost:(id)arg1;
- (bool)wasBootedDark;
- (bool)willObserveLayersManually;

// Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXFrontBoardUtils.framework/AXFrontBoardUtils

- (void)_accessibilityAddRecentlyActivatedBundleIdFromSwitcher:(id)arg1;
- (id)_accessibilityRecentlyActivatedApplicationBundleIdentifiers;
- (void)_accessibilityRemoveRecentlyActivatedBundleIdFromSwitcher:(id)arg1;

@end
