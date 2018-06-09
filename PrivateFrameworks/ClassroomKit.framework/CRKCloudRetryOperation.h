/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCloudRetryOperation : CATOperation {
    CRKCloudOperation<CRKCloudResetable> * _cloudOperation;
    CATOperationQueue * _operationQueue;
    unsigned long long  mAttempts;
}

@property (nonatomic, readonly) CRKCloudOperation<CRKCloudResetable> *cloudOperation;
@property (nonatomic, readonly) CATOperationQueue *operationQueue;

+ (id)new;

- (void).cxx_destruct;
- (id)cloudOperation;
- (void)cloudOperationDidFinish:(id)arg1;
- (id)init;
- (id)initWithOperationQueue:(id)arg1 cloudOperation:(id)arg2;
- (bool)isAsynchronous;
- (void)main;
- (id)operationQueue;
- (void)performRetry:(id)arg1;

@end
