/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPCloudRepeatableTask : NSObject {
    id /* block */  _attemptHandler;
    bool  _canRetry;
    id /* block */  _cancelHandler;
    NSOperationQueue * _cloudKitOperationsQueue;
    MSPCloudRepeatableTask * _errorResolvingTask;
    id /* block */  _failureHandler;
    NSDate * _finished;
    NSOperation<MSPCloudRequest> * _operation;
    MSPCloudRepeatableTask * _originalErrorTriggeringTask;
    _MSPCloudAttemptTaskOperation * _owningOperation;
    MSPCloudRepeatableTask * _parentTask;
    NSDate * _started;
    bool  _success;
    id /* block */  _successHandler;
}

@property (nonatomic, copy) id /* block */ attemptHandler;
@property (nonatomic, copy) id /* block */ cancelHandler;
@property (getter=_desiredQualityOfService, nonatomic, readonly) long long desiredQualityOfService;
@property (nonatomic, retain) MSPCloudRepeatableTask *errorResolvingTask;
@property (nonatomic) NSOperation<MSPCloudRequest> *operation;
@property (nonatomic, retain) MSPCloudRepeatableTask *originalErrorTriggeringTask;
@property (nonatomic) _MSPCloudAttemptTaskOperation *owningOperation;
@property (nonatomic) MSPCloudRepeatableTask *parentTask;

- (void).cxx_destruct;
- (long long)_desiredQualityOfService;
- (id /* block */)attemptHandler;
- (void)attemptWithAccess:(id)arg1;
- (id /* block */)cancelHandler;
- (id)description;
- (id)errorResolvingTask;
- (void)failWithError:(id)arg1 canReattempt:(bool)arg2 maxAttempts:(unsigned long long)arg3 minimumReattemptDate:(id)arg4;
- (id)init;
- (id)initWithAttemptHandler:(id /* block */)arg1 performCancelHandler:(id /* block */)arg2;
- (id)operation;
- (id)originalErrorTriggeringTask;
- (id)owningOperation;
- (id)parentTask;
- (void)performCancel;
- (void)performRequest:(id)arg1 continuation:(id /* block */)arg2;
- (void)setAttemptHandler:(id /* block */)arg1;
- (void)setCancelHandler:(id /* block */)arg1;
- (void)setErrorResolvingTask:(id)arg1;
- (void)setFailureHandler:(id /* block */)arg1;
- (void)setOperation:(id)arg1;
- (void)setOriginalErrorTriggeringTask:(id)arg1;
- (void)setOwningOperation:(id)arg1;
- (void)setParentTask:(id)arg1;
- (void)setSuccessHandler:(id /* block */)arg1;
- (void)succeed;

@end