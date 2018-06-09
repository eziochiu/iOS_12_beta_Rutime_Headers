/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface _IKConcurrentQueueEvaluator : NSObject <_IKConcurrentlyEvaluating> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)addEvaluationBlock:(id /* block */)arg1 forKey:(id)arg2;
- (id)initWithQueue:(id)arg1;

@end
