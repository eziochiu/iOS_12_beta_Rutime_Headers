/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYReceivingSession : SYSession {
    NSObject<OS_dispatch_group> * _asyncResetGroupToWaitOn;
    struct { 
        unsigned int state : 4; 
        unsigned int canRestart : 1; 
        unsigned int canRollback : 1; 
        unsigned int isResetSync : 1; 
        unsigned int started : 1; 
        unsigned int cancelled : 1; 
        unsigned int completed : 1; 
        unsigned int changedMetadata : 1; 
    }  _flags;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _flagsLock;
    NSMutableIndexSet * _receivedBatchIndices;
    NSObject<OS_os_activity> * _sessionActivity;
    NSObject<OS_dispatch_source> * _sessionTimer;
    NSObject<OS_dispatch_source> * _stateUpdateSource;
    id /* block */  _weakBlockWaitingForReset;
}

@property (nonatomic, readonly) bool metadataModified;

- (void).cxx_destruct;
- (void)_continue;
- (void)_handleEndSession:(id)arg1 response:(id)arg2 completion:(id /* block */)arg3;
- (bool)_handleEndSessionResponse:(id)arg1 error:(id*)arg2;
- (void)_handleRestartSession:(id)arg1 response:(id)arg2 completion:(id /* block */)arg3;
- (bool)_handleRestartSessionResponse:(id)arg1 error:(id*)arg2;
- (bool)_handleStartSessionResponse:(id)arg1 error:(id*)arg2;
- (void)_handleSyncBatch:(id)arg1 response:(id)arg2 completion:(id /* block */)arg3;
- (bool)_handleSyncBatchResponse:(id)arg1 error:(id*)arg2;
- (bool)_hasCompleted;
- (bool)_hasStarted;
- (void)_installStateListener;
- (void)_installTimers;
- (bool)_isMissingSyncBatches;
- (void)_midStreamErrorHandled;
- (id)_newMessageHeader;
- (void)_notifyErrorAndShutdown;
- (void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (bool)_postAsyncResetRequestReturningError:(id*)arg1;
- (void)_processNextState;
- (void)_resolvedIdentifier:(id)arg1 forResponse:(id)arg2;
- (void)_resolvedIdentifierForRequest:(id)arg1;
- (void)_sendEndSessionAndError:(id)arg1;
- (void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)_sessionCancelled;
- (void)_sessionFinished;
- (void)_sessionRestarted;
- (void)_setCancelled;
- (void)_setCompleted;
- (void)_setStarted;
- (void)_setStateQuietly:(long long)arg1;
- (void)_tweakMessageHeader:(id)arg1;
- (bool)canRestart;
- (bool)canRollback;
- (void)cancelWithError:(id)arg1;
- (id)initWithService:(id)arg1 isReset:(bool)arg2 metadata:(id)arg3;
- (bool)isResetSync;
- (bool)isSending;
- (bool)metadataModified;
- (void)setCanRestart:(bool)arg1;
- (void)setCanRollback:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSessionMetadata:(id)arg1;
- (void)setState:(long long)arg1;
- (void)start:(id /* block */)arg1;
- (long long)state;
- (bool)wasCancelled;

@end
