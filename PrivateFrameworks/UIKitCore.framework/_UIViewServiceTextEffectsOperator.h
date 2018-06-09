/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIViewServiceTextEffectsOperator : NSObject <_UIHostedWindowDelegate, _UIViewServiceDeputy, _UIViewServiceDeputyRotationDelegate, _UIViewServiceTextEffectsOperator_RemoteViewControllerInterface> {
    bool  __automatic_invalidation_invalidated;
    int  __automatic_invalidation_retainCount;
    NSArray * _allowedNotifications;
    bool  _canRestoreInputViews;
    bool  _didResignForDisappear;
    _UIHostedWindow * _hostedWindow;
    _UIAsyncInvocation * _invalidationInvocation;
    bool  _isRestoringInputViews;
    bool  _localVCDisablesAutomaticBehaviors;
    _UIAsyncInvocation * _prepareForDisconnectionInvocation;
    id  _remoteViewControllerProxy;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _safeAreaInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _sceneSize;
    struct CGPoint { 
        double x; 
        double y; 
    }  _windowOffset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)XPCInterface;
+ (bool)_shouldAddServiceOperator;
+ (id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2;

- (void).cxx_destruct;
- (int)__automatic_invalidation_logic;
- (void)__createHostedTextEffectsWithReplyHandler:(id /* block */)arg1;
- (void)__hostDidEnterBackground;
- (void)__hostViewWillAppear:(bool)arg1;
- (void)__hostViewWillDisappear:(bool)arg1;
- (void)__hostWillEnterForeground;
- (void)__prepareForDisconnectionWithCompletionHandler:(id /* block */)arg1;
- (void)__setHostAllowedNotifications:(id)arg1;
- (void)__setNextAutomaticOrderOutDirection:(int)arg1 duration:(double)arg2;
- (void)__setSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)__setSceneSize:(struct CGSize { double x1; double x2; })arg1;
- (void)__setWindowOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_invalidateUnconditionallyThen:(id /* block */)arg1;
- (bool)_isDeallocating;
- (void)_prepareForDisconnectionUnconditionallyThen:(id /* block */)arg1;
- (id)_queue;
- (void)_reloadSafeInsets;
- (void)_resetSceneSize;
- (void)_restoreInputViews;
- (bool)_tryRetain;
- (void)_viewServiceHostWillEnterForeground:(id)arg1;
- (id)autorelease;
- (void)dealloc;
- (void)finishRotationFromInterfaceOrientation:(long long)arg1;
- (void)forceSyncToStatusBarOrientation;
- (void)hostedWindow:(id)arg1 didSetFirstResponder:(id)arg2;
- (void)hostedWindow:(id)arg1 didSetResponderTargetForCalloutBar:(id)arg2;
- (id)invalidate;
- (void)makeHostWindowKey;
- (void)performOnRelevantWindows:(id /* block */)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)rotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)setHostedWindow:(id)arg1 disableAutomaticBehaviors:(bool)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
