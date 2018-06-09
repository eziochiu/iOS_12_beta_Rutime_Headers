/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncBlockOperation : _DKSyncOperation {
    bool  _asynchronous;
    NSMutableArray * _blocks;
}

@property (getter=isAsynchronous) bool asynchronous;
@property (readonly) NSMutableArray *blocks;

+ (id)blockOperationWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)addExecutionBlock:(id /* block */)arg1;
- (id)blocks;
- (id)executionBlocks;
- (id)init;
- (id)initWithBlock:(id /* block */)arg1;
- (bool)isAsynchronous;
- (void)main;
- (void)setAsynchronous:(bool)arg1;

@end
