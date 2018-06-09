/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDExtendedDatabaseTransaction : NSObject {
    NSObject<OS_dispatch_source> * _automaticRollbackTimer;
    NSObject<OS_dispatch_semaphore> * _completionSemaphore;
    double  _continuationTimeout;
    NSObject<OS_dispatch_queue> * _dataQueue;
    HDDatabase * _database;
    NSError * _lastError;
    id /* block */  _pendingWork;
    bool  _pendingWorkDidSucceed;
    NSObject<OS_dispatch_semaphore> * _pendingWorkSemaphore;
    unsigned long long  _status;
    NSUUID * _transactionIdentifier;
    NSObject<OS_dispatch_queue> * _transactionQueue;
    double  _transactionTimeout;
}

@property (nonatomic, retain) NSObject<OS_dispatch_source> *automaticRollbackTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *completionSemaphore;
@property (nonatomic, readonly) double continuationTimeout;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dataQueue;
@property (nonatomic, readonly) HDDatabase *database;
@property (nonatomic, retain) NSError *lastError;
@property (nonatomic, copy) id /* block */ pendingWork;
@property (nonatomic) bool pendingWorkDidSucceed;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *pendingWorkSemaphore;
@property (nonatomic) unsigned long long status;
@property (nonatomic, readonly, copy) NSUUID *transactionIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *transactionQueue;
@property (nonatomic, readonly) double transactionTimeout;

- (void).cxx_destruct;
- (void)_enableAutomaticRollbackTimer;
- (void)_transaction_runTransactionWithOptions:(unsigned long long)arg1;
- (id)automaticRollbackTimer;
- (bool)commitWithErrorOut:(id*)arg1;
- (id)completionSemaphore;
- (double)continuationTimeout;
- (id)dataQueue;
- (id)database;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1 options:(unsigned long long)arg2 transactionTimeout:(double)arg3 continuationTimeout:(double)arg4 error:(id*)arg5;
- (id)lastError;
- (id /* block */)pendingWork;
- (bool)pendingWorkDidSucceed;
- (id)pendingWorkSemaphore;
- (bool)performInTransactionWithErrorOut:(id*)arg1 block:(id /* block */)arg2;
- (bool)rollbackDueToError:(id)arg1 errorOut:(id*)arg2;
- (void)setAutomaticRollbackTimer:(id)arg1;
- (void)setCompletionSemaphore:(id)arg1;
- (void)setDataQueue:(id)arg1;
- (void)setLastError:(id)arg1;
- (void)setPendingWork:(id /* block */)arg1;
- (void)setPendingWorkDidSucceed:(bool)arg1;
- (void)setPendingWorkSemaphore:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setTransactionQueue:(id)arg1;
- (unsigned long long)status;
- (id)transactionIdentifier;
- (id)transactionQueue;
- (double)transactionTimeout;

@end