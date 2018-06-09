/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKBatchRequestHandler : NSObject {
    NSMutableDictionary * _batchedRequestByMailboxId;
    <NNMKBatchRequestHandlerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _executionQueue;
    NSObject<OS_dispatch_source> * _fetchTimeoutTimer;
    NSDate * _lastRetryDate;
    NNMKResendScheduler * _resendScheduler;
    unsigned long long  _retryCountForRequestingMissingHeadersInBatchedResponse;
    NNMKSyncController * _syncController;
}

@property (nonatomic, retain) NSMutableDictionary *batchedRequestByMailboxId;
@property (nonatomic) <NNMKBatchRequestHandlerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *executionQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *fetchTimeoutTimer;
@property (nonatomic, retain) NSDate *lastRetryDate;
@property (nonatomic, retain) NNMKResendScheduler *resendScheduler;
@property (nonatomic) unsigned long long retryCountForRequestingMissingHeadersInBatchedResponse;
@property (nonatomic, retain) NNMKSyncController *syncController;

- (void).cxx_destruct;
- (id)_batchedFetchResultForBatchedRequest:(id)arg1 mailbox:(id)arg2 diff:(id)arg3 localSyncedMessagesByMessageId:(id)arg4;
- (id)_checkBatchFetchedMessagesWithMailbox:(id)arg1 messageHeadersToFetch:(id*)arg2 attemptsFailed:(bool*)arg3;
- (void)_rescheduleFetchTimeout;
- (id)batchedRequestByMailboxId;
- (void)cancelFetchTimeout;
- (id)checkBatchFetchedMessages;
- (id)delegate;
- (id)executionQueue;
- (id)fetchTimeoutTimer;
- (id)firstMessageIds:(unsigned long long)arg1 fromBatchedFetchResults:(id)arg2;
- (void)handleBatchRequest:(id)arg1;
- (void)handleMessageAdded:(id)arg1;
- (void)handleMessageDeleted:(id)arg1 mailboxId:(id)arg2;
- (id)init;
- (id)lastRetryDate;
- (id)resendScheduler;
- (void)reset;
- (unsigned long long)retryCountForRequestingMissingHeadersInBatchedResponse;
- (void)setBatchedRequestByMailboxId:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExecutionQueue:(id)arg1;
- (void)setFetchTimeoutTimer:(id)arg1;
- (void)setLastRetryDate:(id)arg1;
- (void)setResendScheduler:(id)arg1;
- (void)setRetryCountForRequestingMissingHeadersInBatchedResponse:(unsigned long long)arg1;
- (void)setSyncController:(id)arg1;
- (void)startFetchTimeout;
- (id)syncController;

@end
