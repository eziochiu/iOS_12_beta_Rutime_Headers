/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncCompositeOperation : _DKSyncOperation {
    NSHashTable * _children;
    NSMutableArray * _errors;
    bool  _isReadyToStart;
    _DKSyncCompositeOperation * _parent;
}

@property (readonly) NSMutableArray *errors;

- (void).cxx_destruct;
- (void)_shutdownOperation;
- (void)cancelOperation;
- (void)childOperation:(id)arg1 didEndWithErrors:(id)arg2;
- (void)childOperationWasAdded:(id)arg1;
- (void)dealloc;
- (void)endOperation;
- (id)errors;
- (id)init;
- (id)initWithParent:(id)arg1;
- (bool)isAsynchronous;
- (bool)isReady;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
