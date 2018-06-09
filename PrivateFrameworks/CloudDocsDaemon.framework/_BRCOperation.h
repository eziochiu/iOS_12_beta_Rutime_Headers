/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface _BRCOperation : NSOperation {
    NSObject<OS_os_activity> * _Activity;
    NSMutableArray * _associatedEventMetrics;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSObject<OS_os_transaction> * _executionTransaction;
    id /* block */  _finishBlock;
    NSDate * _finishDate;
    bool  _finished;
    NSObject<OS_dispatch_group> * _group;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSError * _lastError;
    NSDate * _lastTryDate;
    unsigned long long  _logSections;
    id /* block */  _mainBlock;
    NSDate * _nextTryDate;
    BRCThrottle * _operationFailureThrottle;
    CKOperationGroup * _operationGroup;
    BRCThrottle * _operationThrottle;
    unsigned char  _operationUUID;
    NSObject<OS_dispatch_source> * _retryTimer;
    NSDate * _startDate;
    BRCSyncContext * _syncContext;
    long long  _throttleHash;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) NSError *error;
@property (getter=isExecuting, nonatomic) bool executing;
@property (nonatomic, copy) id /* block */ finishBlock;
@property (getter=isFinished, nonatomic) bool finished;
@property (nonatomic, retain) CKOperationGroup *group;
@property (nonatomic, readonly) unsigned long long logSections;
@property (nonatomic, copy) id /* block */ mainBlock;
@property (nonatomic) BRCThrottle *operationFailureThrottle;
@property (nonatomic, readonly) NSUUID *operationID;
@property (nonatomic) BRCThrottle *operationThrottle;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) BRCSyncContext *syncContext;
@property (nonatomic, readonly) bool usesBackgroundSession;

- (void).cxx_destruct;
- (void)_completedWithResult:(id)arg1 error:(id)arg2;
- (void)_executeWithPreviousError:(id)arg1;
- (bool)_finishIfCancelled;
- (void)_main;
- (void)_scheduleExecutionWithPreviousError:(id)arg1;
- (void)addSubOperation:(id)arg1;
- (void)addSubOperation:(id)arg1 overrideContext:(id)arg2 allowsCellularAccess:(id)arg3;
- (void)associateCKOperationsToEventMetric:(id)arg1;
- (id)callbackQueue;
- (void)cancel;
- (void)completedWithResult:(id)arg1 error:(id)arg2;
- (id)createActivity;
- (void)dealloc;
- (id)description;
- (id)descriptionWithContext:(id)arg1;
- (id)error;
- (id /* block */)finishBlock;
- (bool)finishIfCancelled;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)group;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 syncContext:(id)arg2;
- (id)initWithName:(id)arg1 syncContext:(id)arg2 group:(id)arg3;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (unsigned long long)logSections;
- (void)main;
- (id /* block */)mainBlock;
- (id)operationFailureThrottle;
- (id)operationID;
- (id)operationThrottle;
- (void)schedule;
- (void)setExecuting:(bool)arg1;
- (void)setFinishBlock:(id /* block */)arg1;
- (void)setFinished:(bool)arg1;
- (void)setGroup:(id)arg1;
- (void)setMainBlock:(id /* block */)arg1;
- (void)setOperationFailureThrottle:(id)arg1;
- (void)setOperationThrottle:(id)arg1;
- (bool)shouldRetryForError:(id)arg1;
- (void)start;
- (id)startDate;
- (id)stateWithContext:(id)arg1;
- (id)subclassableDescriptionWithContext:(id)arg1;
- (id)syncContext;
- (bool)usesBackgroundSession;

@end
