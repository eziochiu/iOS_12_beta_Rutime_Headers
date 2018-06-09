/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchUserQuotaOperation : CKDatabaseOperation {
    id /* block */  _fetchUserQuotaCompletionBlock;
    unsigned long long  _quotaAvailable;
}

@property (nonatomic, copy) id /* block */ fetchUserQuotaCompletionBlock;
@property (nonatomic) unsigned long long quotaAvailable;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (id)activityCreate;
- (id /* block */)fetchUserQuotaCompletionBlock;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (Class)operationInfoClass;
- (void)performCKOperation;
- (unsigned long long)quotaAvailable;
- (void)setFetchUserQuotaCompletionBlock:(id /* block */)arg1;
- (void)setQuotaAvailable:(unsigned long long)arg1;

@end
