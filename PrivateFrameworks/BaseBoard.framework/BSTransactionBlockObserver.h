/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSTransactionBlockObserver : NSObject <BSTransactionObserver> {
    NSMutableArray * _didBeginBlocks;
    NSMutableArray * _didCompleteBlocks;
    NSMutableArray * _didFinishWorkBlocks;
    NSMutableArray * _willBeginBlocks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addTransactionDidBeginBlock:(id /* block */)arg1;
- (void)addTransactionDidCompleteBlock:(id /* block */)arg1;
- (void)addTransactionDidFinishWorkBlock:(id /* block */)arg1;
- (void)addTransactionWillBeginBlock:(id /* block */)arg1;
- (void)transactionDidBegin:(id)arg1;
- (void)transactionDidComplete:(id)arg1;
- (void)transactionDidFinishWork:(id)arg1;
- (void)transactionWillBegin:(id)arg1;

@end
