/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchNotificationChangesOperation : CKDOperation {
    bool  _moreComing;
    id /* block */  _notificationChangedBlock;
    CKServerChangeToken * _previousServerChangeToken;
    CKServerChangeToken * _resultServerChangeToken;
    unsigned long long  _resultsLimit;
    bool  _wantsChanges;
}

@property (nonatomic) bool moreComing;
@property (nonatomic, copy) id /* block */ notificationChangedBlock;
@property (nonatomic, retain) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic, retain) CKServerChangeToken *resultServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic) bool wantsChanges;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleFetchChangesRequestFinished:(id)arg1;
- (id)activityCreate;
- (void)fillOutOperationResult:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (bool)moreComing;
- (id /* block */)notificationChangedBlock;
- (Class)operationResultClass;
- (id)previousServerChangeToken;
- (id)resultServerChangeToken;
- (unsigned long long)resultsLimit;
- (void)setMoreComing:(bool)arg1;
- (void)setNotificationChangedBlock:(id /* block */)arg1;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setResultServerChangeToken:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;
- (void)setWantsChanges:(bool)arg1;
- (bool)wantsChanges;

@end
