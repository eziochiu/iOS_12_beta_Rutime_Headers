/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIQueueingProxy : _UITargetedProxy {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _queuedInvocations;
    id /* block */  _shouldSuspendInvocationBlock;
    unsigned long long  _suspensionCount;
}

+ (id)proxyWithTarget:(id)arg1;
+ (id)proxyWithTarget:(id)arg1 shouldSuspendInvocationBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_dispatchSuspendedMessages;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (void)removeAllEnqueuedInvocations;
- (bool)respondsToSelector:(SEL)arg1;
- (void)resume;
- (void)suspend;

@end
