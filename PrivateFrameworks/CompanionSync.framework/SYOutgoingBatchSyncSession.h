/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYOutgoingBatchSyncSession : SYSession {
    NSMutableIndexSet * _ackedBatchIndices;
    unsigned long long  _batchIndex;
    bool  _canRestart;
    bool  _canRollback;
    bool  _cancelled;
    _SYCountedSemaphore * _changeConcurrencySemaphore;
    NSObject<OS_dispatch_queue> * _changeFetcherQueue;
    NSObject<OS_os_activity> * _changeWaitActivity;
    bool  _errorIsLocal;
    bool  _hasSentEnd;
    NSObject<OS_os_activity> * _sessionActivity;
    double  _sessionStartTime;
    NSObject<OS_dispatch_source> * _sessionTimer;
    long long  _state;
    NSObject<OS_dispatch_source> * _stateUpdateSource;
    _SYMessageTimerTable * _timers;
}

- (void).cxx_destruct;
- (void)_fetchNextBatch;
- (bool)_handleBatchAck:(id)arg1 error:(id*)arg2;
- (bool)_handleBatchSyncEndResponse:(id)arg1 error:(id*)arg2;
- (void)_installStateListener;
- (void)_installTimers;
- (void)_messageExpiredWithSeqno:(unsigned long long)arg1 identifier:(id)arg2;
- (void)_notifySessionComplete;
- (void)_processNextState;
- (void)_sendSyncBatch:(id)arg1 nextState:(long long)arg2;
- (void)_sendSyncCancelled;
- (void)_sendSyncCompleteAndRunBlock:(id /* block */)arg1;
- (void)_sendSyncRestart;
- (void)_sendSyncStart;
- (void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)_sessionComplete;
- (void)_setMessageTimerForSeqno:(unsigned long long)arg1;
- (void)_setStateQuietly:(long long)arg1;
- (void)_setupChangeConcurrency;
- (void)_waitForMessageWindow;
- (bool)canRestart;
- (bool)canRollback;
- (void)cancelWithError:(id)arg1;
- (id)initWithService:(id)arg1;
- (bool)isResetSync;
- (bool)isSending;
- (unsigned long long)protocolVersion;
- (double)remainingSessionTime;
- (void)setCanRestart:(bool)arg1;
- (void)setCanRollback:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)start:(id /* block */)arg1;
- (long long)state;
- (bool)wasCancelled;

@end
