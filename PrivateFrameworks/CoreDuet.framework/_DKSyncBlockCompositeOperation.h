/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncBlockCompositeOperation : _DKSyncCompositeOperation {
    NSMutableArray * _blocks;
}

@property (readonly) NSMutableArray *blocks;

+ (id)blockCompositeOperationWithBlock:(id /* block */)arg1;
+ (id)blockCompositeOperationWithParent:(id)arg1 block:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)addExecutionBlock:(id /* block */)arg1;
- (id)blocks;
- (id)executionBlocks;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithParent:(id)arg1 block:(id /* block */)arg2;
- (bool)isAsynchronous;
- (void)main;

@end
