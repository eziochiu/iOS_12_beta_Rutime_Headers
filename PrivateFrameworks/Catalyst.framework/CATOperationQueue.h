/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATOperationQueue : NSOperationQueue {
    <CATOperationQueueDelegate> * _delegate;
}

@property (nonatomic) <CATOperationQueueDelegate> *delegate;

// Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst

+ (id)backgroundQueue;
+ (id)currentQueue;
+ (id)mainQueue;

- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(bool)arg2;
- (id)delegate;
- (void)delegateOperationDidFinish:(id)arg1;
- (void)delegateWillAddOperation:(id)arg1;
- (id)description;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setDelegate:(id)arg1;
- (void)setUnderlyingQueue:(id)arg1;
- (void)startObserving:(id)arg1;
- (void)stopObserving:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

+ (id)crk_backgroundQueue;

@end
