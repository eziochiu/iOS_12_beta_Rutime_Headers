/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIInternalDraggingSessionSource : _UIDraggingImageSlotOwner {
    NSXPCListenerEndpoint * _accessibilityEndpoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _centroid;
    UIWindow * _centroidWindow;
    long long  _dataOwner;
    UIDragEvent * _dragEvent;
    <_UIDruidSourceConnection> * _druidConnection;
    bool  _hasProvidedFenceOnce;
    bool  _hostIsActive;
    NSArray * _internalItems;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastNotifiedCentroid;
    bool  _originatedInHostedWindow;
    unsigned long long  _outsideAppSourceOperationMask;
    PBItemCollection * _pbItemCollection;
    _UIDraggingSession * _publicSession;
    unsigned long long  _resultOperation;
    bool  _sentWillEnd;
    unsigned int  _sessionIdentifier;
    _UIDragSetDownAnimation * _setDownAnimation;
    UIView * _sourceView;
    long long  _state;
    long long  _stateAfterSetDown;
    _DUITouchRoutingPolicy * _touchRoutingPolicy;
    NSSet * _touches;
    unsigned long long  _withinAppSourceOperationMask;
}

@property (nonatomic, retain) NSXPCListenerEndpoint *accessibilityEndpoint;
@property (nonatomic, readonly) bool canAddItems;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } centroid;
@property (nonatomic, readonly) UIWindow *centroidWindow;
@property (nonatomic) long long dataOwner;
@property (nonatomic) UIDragEvent *dragEvent;
@property (nonatomic, retain) <_UIDruidSourceConnection> *druidConnection;
@property (nonatomic, copy) NSArray *internalItems;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) unsigned long long outsideAppSourceOperationMask;
@property (nonatomic, readonly) bool prefersFullSizePreview;
@property (nonatomic, readonly) _UIDraggingSession *publicSession;
@property (nonatomic) unsigned long long resultOperation;
@property (nonatomic, readonly) unsigned int sessionIdentifier;
@property (nonatomic, readonly) bool shouldCancelOnAppDeactivation;
@property (nonatomic) UIView *sourceView;
@property (nonatomic) long long state;
@property (nonatomic, copy) _DUITouchRoutingPolicy *touchRoutingPolicy;
@property (nonatomic, copy) NSSet *touches;
@property (nonatomic, readonly) unsigned long long withinAppSourceOperationMask;

- (void).cxx_destruct;
- (void)_didBeginDrag;
- (void)_getOperationMaskFromDelegate;
- (void)_handOffCancelledItems:(id)arg1;
- (void)_hostDidDeactivate;
- (void)_hostWillBecomeActive;
- (void)_registerContextIDsForAdditionalDragEvents;
- (void)_sendWillEndWithOperation:(unsigned long long)arg1;
- (void)_unregisterContextIDsForAdditionalDragEvents;
- (id)accessibilityEndpoint;
- (void)addPublicItems:(id)arg1;
- (void)beginDrag:(id /* block */)arg1;
- (bool)canAddItems;
- (void)cancelDrag;
- (struct CGPoint { double x1; double x2; })centroid;
- (id)centroidWindow;
- (long long)dataOwner;
- (void)dragDidExitApp;
- (id)dragEvent;
- (id)druidConnection;
- (bool)dynamicallyUpdatesPrefersFullSizePreviews;
- (id)initWithDragManager:(id)arg1 items:(id)arg2 dataOwner:(long long)arg3 sourceView:(id)arg4;
- (id)internalItems;
- (bool)isActive;
- (void)itemsBecameDirty:(id)arg1;
- (unsigned long long)outsideAppSourceOperationMask;
- (bool)prefersFullSizePreview;
- (bool)preventsSimultaneousDragFromView:(id)arg1;
- (id)publicSession;
- (unsigned long long)resultOperation;
- (unsigned int)sessionIdentifier;
- (void)setAccessibilityEndpoint:(id)arg1;
- (void)setCentroid:(struct CGPoint { double x1; double x2; })arg1 inWindow:(id)arg2;
- (void)setDataOwner:(long long)arg1;
- (void)setDragEvent:(id)arg1;
- (void)setDruidConnection:(id)arg1;
- (void)setInternalItems:(id)arg1;
- (void)setResultOperation:(unsigned long long)arg1;
- (void)setSourceView:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTouchRoutingPolicy:(id)arg1;
- (void)setTouches:(id)arg1;
- (bool)shouldCancelOnAppDeactivation;
- (id)sourceView;
- (long long)state;
- (id)touchRoutingPolicy;
- (bool)touchRoutingPolicyContainsContextIDToAlwaysSend:(unsigned int)arg1;
- (id)touches;
- (void)updateCentroidFromDragEvent;
- (unsigned long long)withinAppSourceOperationMask;

@end
