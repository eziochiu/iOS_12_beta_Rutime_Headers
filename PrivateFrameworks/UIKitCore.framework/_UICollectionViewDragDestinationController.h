/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionViewDragDestinationController : NSObject <UIDropInteractionDelegate_Private, _UICollectionViewShadowUpdatesRebaseApplicable> {
    UICollectionView * _collectionView;
    <_UICollectionViewDragDestinationControllerDelegate> * _delegate;
    UIDropInteraction * _dropInteraction;
    _UIDragDestinationControllerDropProposalState * _dropProposalState;
    CADisplayLink * _reorderDisplayLink;
    _UIDragDestinationControllerReorderingState * _reorderingState;
    _UIDragDestinationControllerSessionState * _sessionState;
}

@property (nonatomic) UICollectionView *collectionView;
@property (nonatomic, readonly) UICollectionViewDropProposal *currentDropProposal;
@property (nonatomic, readonly) <UIDropSession> *currentDropSession;
@property (nonatomic, readonly) NSIndexPath *currentIndexPath;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UICollectionViewDragDestinationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIDropInteraction *dropInteraction;
@property (nonatomic, retain) _UIDragDestinationControllerDropProposalState *dropProposalState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, retain) CADisplayLink *reorderDisplayLink;
@property (nonatomic, retain) _UIDragDestinationControllerReorderingState *reorderingState;
@property (nonatomic, retain) _UIDragDestinationControllerSessionState *sessionState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsLocalSessionReordering;

+ (id)controllerForCollectionView:(id)arg1 delegate:(id)arg2;

- (void).cxx_destruct;
- (void)_cancelCurrentInteractiveReorder;
- (void)_cancelInteractiveReorderingIfNeeded;
- (void)_commitCurrentDragAndDropSession;
- (void)_commitCurrentInteractiveReordering;
- (id)_computeNextItemAttributesStartingFromItemAttributes:(id)arg1 withCurrentDragLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_configureInteraction;
- (void)_configureReorderingDisplayLink;
- (bool)_delegateImplementsDidExit;
- (bool)_delegateImplementsDropActionForIndexPath;
- (bool)_delegateImplementsPerformDropFromIndexPathsWithAction;
- (bool)_delegateImplementsPerformDropFromIndexPathsWithCoordinator;
- (bool)_delegateImplementsSelector:(SEL)arg1;
- (bool)_delegateImplementsTargetIndexPath;
- (id)_dragAndDropController;
- (id)_dragDestinationDelegateActual;
- (id)_dragDestinationDelegateProxy;
- (id)_dropDelegateActual;
- (id)_dropDelegateProxy;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (id)_effectiveDropProposalForProposal:(id)arg1;
- (void)_endInteractiveReorderingIfNeeded;
- (bool)_hasGapLargeEnoughToRequireDropActionCallForCurrentItemAttributes:(id)arg1 proposedNextItemAttributes:(id)arg2;
- (bool)_isCompatibilityMode;
- (bool)_isLocalInteractiveMove;
- (bool)_isMultiItemSource;
- (void)_pauseReorderingDisplayLink;
- (id)_queryClientForPreviewParamtersForItemAtIndexPath:(id)arg1;
- (void)_reorderingDisplayLinkDidTick;
- (void)_resumeReorderingDisplayLink;
- (bool)_shouldPerformMovementForProposal:(id)arg1;
- (bool)_shouldQueryDropActionForIndexPath:(id)arg1;
- (void)_updateDropProposalByQueryingClientIfNeeded:(id)arg1;
- (void)applyingRebasingUpdatesWithUpdateMap:(id)arg1;
- (id)collectionView;
- (id)currentDropProposal;
- (id)currentDropSession;
- (id)currentIndexPath;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)dragSourceSelectedItemCountDidChangeWithCount:(long long)arg1;
- (id)dropInteraction;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (id)dropProposalState;
- (void)dropWasCancelled;
- (bool)hasPerformedReordering;
- (id)initWithCollectionView:(id)arg1 delegate:(id)arg2;
- (bool)isActive;
- (bool)isInteractiveReorderingDisabled;
- (id)reorderDisplayLink;
- (id)reorderingState;
- (id)sessionState;
- (void)setCollectionView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDropInteraction:(id)arg1;
- (void)setDropProposalState:(id)arg1;
- (void)setReorderDisplayLink:(id)arg1;
- (void)setReorderingState:(id)arg1;
- (void)setSessionState:(id)arg1;
- (bool)supportsLocalSessionReordering;

@end
