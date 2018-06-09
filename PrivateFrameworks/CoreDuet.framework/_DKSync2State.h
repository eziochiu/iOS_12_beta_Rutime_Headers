/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSync2State : NSObject {
    NSMutableArray * _completions;
    bool  _isPending;
    _DKSyncCompositeOperation * _parent;
    _DKSyncType * _type;
}

@property (retain) NSMutableArray *completions;
@property bool isPending;
@property (retain) _DKSyncCompositeOperation *parent;
@property (retain) _DKSyncType *type;

- (void).cxx_destruct;
- (void)addCompletionBlock:(id /* block */)arg1;
- (id)completions;
- (void)finishWithError:(id)arg1;
- (id)initWithType:(id)arg1 completion:(id /* block */)arg2;
- (bool)isPending;
- (void)mergeType:(id)arg1;
- (id)parent;
- (void)setCompletions:(id)arg1;
- (void)setIsPending:(bool)arg1;
- (void)setParent:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
