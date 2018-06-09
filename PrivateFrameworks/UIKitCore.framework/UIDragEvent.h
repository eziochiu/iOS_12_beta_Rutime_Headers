/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDragEvent : UIEvent {
    NSMutableSet * _beginningGestureRecognizers;
    _UIDragEventSample * _currentSample;
    bool  _dragFailed;
    id /* block */  _dragFailedCallback;
    unsigned int  _dragSessionID;
    NSMutableSet * _dynamicGestureRecognizers;
    NSMutableSet * _dynamicInteractions;
    NSMutableSet * _endingGestureRecognizers;
    UIEventEnvironment * _eventEnvironment;
    UIView * _eventView;
    NSMutableSet * _exitingGestureRecognizers;
    bool  _ignoreDragEnd;
    NSMutableSet * _ignoredGestureRecognizers;
    bool  _needsHitTestReset;
    UIView * _previousEventView;
    _UIInternalDraggingSessionDestination * _sessionDestination;
    _UIInternalDraggingSessionSource * _sessionSource;
    NSMutableSet * _updatingGestureRecognizers;
    NSHashTable * _viewsQueriedForDynamicGestures;
}

@property (nonatomic, readonly) unsigned int dragSessionID;
@property (getter=_dropSession, nonatomic, readonly) _UIDropSessionImpl *dropSession;
@property (getter=_dynamicGestureRecognizers, nonatomic, readonly) NSSet *dynamicGestureRecognizers;
@property (nonatomic) UIEventEnvironment *eventEnvironment;
@property (nonatomic, readonly) UIWindow *eventWindow;
@property (getter=_hitTestedView, nonatomic, readonly) UIView *hitTestedView;
@property (nonatomic, readonly) bool isFromAccessibilitySession;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } locationInSceneReferenceSpace;
@property (getter=_sessionDestination, nonatomic, readonly) _UIInternalDraggingSessionDestination *sessionDestination;
@property (getter=_sessionSource, nonatomic, readonly) _UIInternalDraggingSessionSource *sessionSource;
@property (getter=_touchRoutingPolicyContextID, nonatomic, readonly) unsigned int touchRoutingPolicyContextID;
@property (getter=_windowServerHitTestContextID, nonatomic, readonly) unsigned int windowServerHitTestContextID;

+ (void)_invalidateSessionID:(unsigned int)arg1;
+ (bool)_isSessionIDValid:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)_dragFailedWithCallback:(id /* block */)arg1;
- (id)_dropSession;
- (id)_dynamicGestureRecognizers;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (id)_hitTestedView;
- (void)_ignoreDragEnd;
- (void)_ignoreGestureRecognizer:(id)arg1;
- (bool)_isReadyForReset;
- (void)_removeGestureRecognizer:(id)arg1;
- (void)_reset;
- (bool)_sendEventToGestureRecognizer:(id)arg1;
- (void)_sendIfNeeded;
- (id)_sessionDestination;
- (id)_sessionSource;
- (void)_setHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_setNeedsHitTestReset;
- (bool)_shouldSendEvent;
- (unsigned int)_touchRoutingPolicyContextID;
- (void)_updateFromCurrentSample;
- (void)_updateGesturesFromCurrentSample;
- (id)_updatingDropGestureRecognizers;
- (void)_wasDeliveredToGestureRecognizers;
- (unsigned int)_windowServerHitTestContextID;
- (id)_windows;
- (void)dealloc;
- (unsigned int)dragSessionID;
- (id)eventEnvironment;
- (id)eventWindow;
- (id)initWithDragSessionID:(unsigned int)arg1;
- (bool)isFromAccessibilitySession;
- (struct CGPoint { double x1; double x2; })locationInSceneReferenceSpace;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (void)setEventEnvironment:(id)arg1;
- (long long)type;

@end
