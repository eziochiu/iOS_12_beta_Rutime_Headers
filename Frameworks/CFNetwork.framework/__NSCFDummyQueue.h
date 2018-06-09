/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFDummyQueue : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

- (void)addOperationWithBlock:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithDispatchQueue:(id)arg1;
- (int)maxConcurrentOperationCount;

@end
