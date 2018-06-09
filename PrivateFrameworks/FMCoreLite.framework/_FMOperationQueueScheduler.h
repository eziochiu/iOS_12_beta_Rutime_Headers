/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

@interface _FMOperationQueueScheduler : NSObject <FMScheduler> {
    NSOperationQueue * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (id)initWithMaxConcurrentOperationCount:(long long)arg1;
- (void)performBlock:(id /* block */)arg1;
- (id)performCancelableBlock:(id /* block */)arg1;

@end
