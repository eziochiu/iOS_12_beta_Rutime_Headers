/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFDispatchQueueRunBlockExtension : PFDispatchQueueExtension

+ (id)alloc;
+ (void)initialize;
+ (id)sharedRunBlockExtension;

- (id)init;
- (id)initInternal;
- (void)installOnQueue:(id)arg1;
- (void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(id /* block */)arg3;
- (void)queue:(id)arg1 didExecute:(id)arg2;
- (void)queue:(id)arg1 skippedExecuting:(id)arg2;
- (id)queue:(id)arg1 willTargetQueue:(id)arg2;

@end
