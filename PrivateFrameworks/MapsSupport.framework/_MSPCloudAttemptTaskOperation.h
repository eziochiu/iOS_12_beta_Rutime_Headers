/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface _MSPCloudAttemptTaskOperation : NSOperation <MSPCloudRepeatableTaskToken> {
    <MSPCloudAccess> * _access;
    unsigned long long  _attemptCount;
    bool  _attempting;
    NSOperationQueue * _cloudOperationsQueue;
    id /* block */  _completion;
    bool  _didFetchNewData;
    bool  _executing;
    bool  _finished;
    NSDate * _finishedAt;
    NSDate * _minimumAttemptDate;
    NSDate * _startedAt;
    bool  _success;
    MSPCloudRepeatableTask * _task;
}

@property (nonatomic, readonly) <MSPCloudAccess> *access;
@property (nonatomic, readonly) unsigned long long attemptCount;
@property (nonatomic, readonly) bool didFetchNewData;
@property (nonatomic, readonly) MSPCloudRepeatableTask *task;

- (void).cxx_destruct;
- (void)_beginAttempting;
- (void)_endWithError:(id)arg1 canReattempt:(bool)arg2 maxAttempts:(unsigned long long)arg3 minimumReattemptDate:(id)arg4;
- (void)_noteDidFetchNewData;
- (void)_setExecuting:(bool)arg1 finished:(bool)arg2;
- (id)access;
- (unsigned long long)attemptCount;
- (void)cancel;
- (id)description;
- (bool)didFetchNewData;
- (id)initWithTask:(id)arg1 access:(id)arg2 attemptCount:(unsigned long long)arg3 minimumAttemptDate:(id)arg4 completion:(id /* block */)arg5;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (void)start;
- (id)task;

@end
