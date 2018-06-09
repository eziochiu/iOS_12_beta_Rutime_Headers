/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPromiseCompletionBlocks : NSObject {
    NSMutableArray * _completionBlocks;
    bool  _shouldCallImmediately;
}

- (void).cxx_destruct;
- (void)addCompletionBlock:(id /* block */)arg1;
- (void)addErrorBlock:(id /* block */)arg1;
- (void)addSuccessBlock:(id /* block */)arg1;
- (void)callCompletionBlock:(id /* block */)arg1 withPromiseResult:(id)arg2;
- (void)callErrorBlock:(id /* block */)arg1 withPromiseResult:(id)arg2;
- (void)callSuccessBlock:(id /* block */)arg1 withPromiseResult:(id)arg2;
- (void)flushCompletionBlocksWithPromiseResult:(id)arg1;
- (id)init;

@end
