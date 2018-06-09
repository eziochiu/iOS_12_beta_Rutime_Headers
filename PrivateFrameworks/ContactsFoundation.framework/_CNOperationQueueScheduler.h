/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface _CNOperationQueueScheduler : NSObject <CNScheduler> {
    bool  _isQualityOfServiceSpecified;
    NSOperationQueue * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) double timestamp;

+ (id)operationWithQualityOfService:(unsigned long long)arg1 block:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_enqueueBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2 qualityOfService:(unsigned long long)arg3;
- (id /* block */)blockWithCurrentQualityOfServiceForBlock:(id /* block */)arg1 ifAllowedForRequestedQualityOfService:(unsigned long long)arg2;
- (id)init;
- (id)initWithMaxConcurrentOperationCount:(long long)arg1;
- (id)initWithMaxConcurrentOperationCount:(long long)arg1 qualityOfService:(unsigned long long)arg2;
- (id)initWithQualityOfService:(unsigned long long)arg1;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(id /* block */)arg1;
- (id)performCancelableBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (double)timestamp;

@end
