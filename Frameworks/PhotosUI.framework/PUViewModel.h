/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUViewModel : NSObject {
    NSHashTable * __changeObservers;
    bool  __publishingChanges;
    PUViewModelChange * _currentChange;
    long long  _nestedChanges;
    long long  _numAppliedPendingChanges;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSMutableArray * _pendingChangeBlocks;
}

@property (nonatomic, readonly) NSHashTable *_changeObservers;
@property (getter=_isPublishingChanges, setter=_setPublishingChanges:, nonatomic) bool _publishingChanges;
@property (nonatomic, readonly) PUViewModelChange *currentChange;
@property (nonatomic, readonly) PUViewModelChange *currentChangeIfExists;

- (void).cxx_destruct;
- (void)_applyPendingChanges;
- (id)_changeObservers;
- (void)_didChange;
- (bool)_isPublishingChanges;
- (void)_publishChanges;
- (void)_setPublishingChanges:(bool)arg1;
- (void)_willChange;
- (void)assertInsideChangesBlock;
- (id)currentChange;
- (id)currentChangeIfExists;
- (id)debugDetailedDescription;
- (void)didPerformChanges;
- (void)didPublishChanges;
- (id)init;
- (id)newViewModelChange;
- (void)performChanges:(id /* block */)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)willPublishChanges;

@end
