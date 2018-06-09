/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIInternalDraggingSessionDestination : _UIDraggingImageSlotOwner <NSProgressReporting, _UIDataTransferMonitorDelegate> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _centroid;
    UIWindow * _centroidWindow;
    bool  _connectedToDruid;
    _UIDataTransferMonitor * _dataTransferMonitor;
    UIDragEvent * _dragEvent;
    bool  _dragInteractionDidEnd;
    id /* block */  _dropCompletionBlock;
    UIView * _dropDestinationView;
    NSArray * _dropItemProviders;
    id /* block */  _dropPerformBlock;
    _UIDropSessionImpl * _dropSession;
    bool  _dropWasPerformed;
    PBItemCollection * _droppedItemCollection;
    <_UIDruidDestinationConnection> * _druidConnection;
    NSMutableSet * _enteredDestinations;
    NSArray * _internalItems;
    bool  _isAccessibilitySession;
    _DUIPotentialDrop * _lastPotentialDrop;
    _UIApplicationModalProgressController * _modalProgressAlertController;
    unsigned long long  _outsideAppSourceOperationMask;
    id /* block */  _postDropAnimationCompletionBlock;
    NSProgress * _progress;
    unsigned long long  _progressIndicatorStyle;
    <_UIDraggingInfo> * _publicSession;
    unsigned int  _sessionIdentifier;
    _UIInternalDraggingSessionSource * _sessionSource;
    _UIDragSetDownAnimation * _setDownAnimation;
    long long  _sourceDataOwner;
    unsigned int  _touchRoutingPolicyContextID;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } centroid;
@property (nonatomic, readonly) UIWindow *centroidWindow;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didRequestDropToBePerformed;
@property (nonatomic) UIDragEvent *dragEvent;
@property (nonatomic, readonly) NSArray *dropItemProviders;
@property (nonatomic, readonly) _UIDropSessionImpl *dropSession;
@property (nonatomic, retain) <_UIDruidDestinationConnection> *druidConnection;
@property (nonatomic, readonly) bool hasConnectedToDruid;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UIInternalDraggingSessionSource *inAppSessionSource;
@property (nonatomic, copy) NSArray *internalItems;
@property (nonatomic, readonly) bool isAccessibilitySession;
@property (nonatomic, readonly) unsigned long long outsideAppSourceOperationMask;
@property (nonatomic, readonly) NSArray *preDropItemProviders;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic) unsigned long long progressIndicatorStyle;
@property (nonatomic, readonly) <_UIDraggingInfo> *publicSession;
@property (nonatomic, readonly) unsigned int sessionIdentifier;
@property (nonatomic, readonly) long long sourceDataOwner;
@property (nonatomic, readonly) unsigned long long sourceOperationMask;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_removeFromDragManager;
- (void)_sessionDidEndNormally:(bool)arg1;
- (unsigned long long)actualDragOperationForProposedDragOperation:(unsigned long long)arg1 destinationDataOwner:(long long)arg2 forbidden:(bool*)arg3;
- (bool)canBeDrivenByDragEvent:(id)arg1;
- (struct CGPoint { double x1; double x2; })centroid;
- (id)centroidWindow;
- (void)connect;
- (void)dataTransferMonitorBeganTransfers:(id)arg1;
- (void)dataTransferMonitorFinishedTransfers:(id)arg1;
- (bool)didRequestDropToBePerformed;
- (void)dragDidExitApp;
- (id)dragEvent;
- (void)dragInteractionEnding;
- (id)dropItemProviders;
- (id)dropSession;
- (id)druidConnection;
- (void)enteredDestination:(id)arg1;
- (void)handOffDroppedItems:(id)arg1;
- (bool)hasConnectedToDruid;
- (id)inAppSessionSource;
- (id)initWithDragManager:(id)arg1 dragEvent:(id)arg2;
- (id)internalItems;
- (bool)isAccessibilitySession;
- (void)itemsBecameDirty:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (unsigned long long)outsideAppSourceOperationMask;
- (id)preDropItemProviders;
- (id)progress;
- (unsigned long long)progressIndicatorStyle;
- (id)publicSession;
- (void)requestDropOnView:(id)arg1 withOperation:(unsigned long long)arg2 perform:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)sawDragEndEvent;
- (unsigned int)sessionIdentifier;
- (void)setDragEvent:(id)arg1;
- (void)setDruidConnection:(id)arg1;
- (void)setInternalItems:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setProgressIndicatorStyle:(unsigned long long)arg1;
- (void)setUpDropAnimation:(id)arg1;
- (long long)sourceDataOwner;
- (unsigned long long)sourceOperationMask;
- (void)takePotentialDrop:(id)arg1;
- (void)takeVisibleDroppedItems:(id)arg1;
- (void)updateCentroidFromDragEvent;

@end
