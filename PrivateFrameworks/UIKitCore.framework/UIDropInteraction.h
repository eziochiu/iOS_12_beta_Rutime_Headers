/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDropInteraction : NSObject <UIDragGestureRecognizerDelegate, UIDragInteraction, UIInteraction, UIInteraction_Internal, _UIDraggingItemVisualTarget> {
    NSMutableSet * _activeDragGestureRecognizers;
    bool  _allowsSimultaneousDropSessions;
    UIDropInteractionContextImpl * _context;
    <UIDropInteractionDelegate> * _delegate;
    NSMapTable * _enteredDropSessionByDraggingSession;
    <UIDropInteractionEffect> * _interactionEffect;
    NSMapTable * _itemsTableBySession;
    UIPasteConfiguration * _pasteConfiguration;
    unsigned long long  _potentialDragOperation;
    UIView * _view;
    <_UIViewDraggingDestinationDelegate> * _viewDelegate;
    bool  _wantsDefaultVisualBehavior;
}

@property (nonatomic) bool allowsSimultaneousDropSessions;
@property (nonatomic, retain) UIDropInteractionContextImpl *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <UIDropInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <UIDropInteractionEffect> *interactionEffect;
@property (getter=_pasteConfiguration, nonatomic, readonly, copy) UIPasteConfiguration *pasteConfiguration;
@property (readonly) Class superclass;
@property (nonatomic) UIView *view;
@property (getter=_viewDelegate, nonatomic, readonly) <_UIViewDraggingDestinationDelegate> *viewDelegate;
@property (getter=_wantsDefaultVisualBehavior, setter=_setWantsDefaultVisualBehavior:, nonatomic) bool wantsDefaultVisualBehavior;

- (void).cxx_destruct;
- (bool)_allowsSimultaneousDragWithEvent:(id)arg1;
- (bool)_canHandleDragEvent:(id)arg1;
- (void)_cleanupItemsInSessionAfterDrop:(id)arg1;
- (void)_dragDestinationGestureStateChanged:(id)arg1;
- (void)_dragDestinationViewDelegateForward:(id)arg1 delegate:(id)arg2;
- (void)_draggingItem:(id)arg1 willAnimateSetDownWithAnimator:(id)arg2;
- (id)_dropItemForDroppingDraggingItem:(id)arg1;
- (void)_dropSessionEntered:(id)arg1 withSessionDestination:(id)arg2;
- (id)_dynamicGestureRecognizersForEvent:(id)arg1;
- (bool)_gestureRecognizer:(id)arg1 shouldReceiveDragEvent:(id)arg2;
- (void)_gestureRecognizerFailed:(id)arg1;
- (id)_initWithPasteConfiguration:(id)arg1;
- (id)_initWithViewDelegate:(id)arg1;
- (id)_pasteConfiguration;
- (void)_prepareForSetDownAnimationInWindow:(id)arg1 withDraggingItem:(id)arg2 visibleDroppedItem:(id)arg3;
- (void)_prepareItemsInSessionForDrop:(id)arg1;
- (void)_sendSessionDidEnd:(id)arg1;
- (unsigned long long)_setLastDragOperation:(unsigned long long)arg1 forbidden:(bool)arg2 precise:(bool)arg3 prefersFullSizePreview:(bool)arg4 onSession:(id)arg5;
- (void)_setWantsDefaultVisualBehavior:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_targetFrameOfDraggingItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (unsigned long long)_validateDragOperation:(unsigned long long)arg1 forSelector:(SEL)arg2 delegate:(id)arg3 dropSession:(id)arg4 onSession:(id)arg5 forbidden:(bool*)arg6;
- (id)_viewDelegate;
- (bool)_wantsDefaultVisualBehavior;
- (bool)allowsSimultaneousDropSessions;
- (id)context;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)interactionEffect;
- (bool)isActive;
- (void)setAllowsSimultaneousDropSessions:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInteractionEffect:(id)arg1;
- (void)setView:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
