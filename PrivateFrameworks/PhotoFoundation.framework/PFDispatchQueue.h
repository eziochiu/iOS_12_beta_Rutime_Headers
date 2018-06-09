/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFDispatchQueue : NSObject

+ (id)_newQueueWithLabel:(id)arg1 qos:(unsigned int)arg2 targetQueue:(id)arg3;
+ (Class)concreteQueueClass;
+ (void)dispatchApply:(unsigned long long)arg1 ofBlock:(id /* block */)arg2;
+ (void)dispatchApply:(unsigned long long)arg1 withConcurrencyLimit:(unsigned long long)arg2 canceler:(id)arg3 ofBlock:(id /* block */)arg4;
+ (id)globalBackgroundQOSQueue;
+ (id)globalCurrentQOSQueue;
+ (id)globalDefaultQOSQueue;
+ (id)globalQOSQueue:(unsigned int)arg1;
+ (id)globalUserInitiatedQOSQueue;
+ (id)globalUserInteractiveQOSQueue;
+ (id)globalUtilityQOSQueue;
+ (void)initialize;
+ (id)injectedExtensions;
+ (id)mainQueue;
+ (id)newConcurrentQueueWithLabel:(id)arg1;
+ (id)newConcurrentQueueWithLabel:(id)arg1 qos:(unsigned int)arg2;
+ (id)newConcurrentQueueWithLabel:(id)arg1 qos:(unsigned int)arg2 targetQueue:(id)arg3 extensions:(id)arg4;
+ (id)newQueueWithLabel:(id)arg1;
+ (id)newQueueWithLabel:(id)arg1 concurrencyLimit:(unsigned long long)arg2;
+ (id)newQueueWithLabel:(id)arg1 concurrencyLimit:(unsigned long long)arg2 qos:(unsigned int)arg3;
+ (id)newQueueWithLabel:(id)arg1 qos:(unsigned int)arg2;
+ (id)newQueueWithLabel:(id)arg1 qos:(unsigned int)arg2 targetQueue:(id)arg3 extensions:(id)arg4;
+ (id)newSerialQueueWithLabel:(id)arg1;
+ (id)newSerialQueueWithLabel:(id)arg1 qos:(unsigned int)arg2;
+ (id)newSerialQueueWithLabel:(id)arg1 qos:(unsigned int)arg2 targetQueue:(id)arg3 extensions:(id)arg4;

- (id)_init;
- (void)dispatchAsyncWithCurrentQOS:(id /* block */)arg1;
- (void)dispatchAsyncWithQOS:(unsigned int)arg1 block:(id /* block */)arg2;
- (void)dispatchBarrierAsyncWithCurrentQOS:(id /* block */)arg1;
- (void)dispatchBarrierAsyncWithQOS:(unsigned int)arg1 block:(id /* block */)arg2;

@end
