/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSMetricsDatabase : NSObject <AMSSQLiteConnectionDelegate> {
    AMSSQLiteConnection * _connection;
    NSString * _containerId;
    <AMSMetricsBagContract> * _contract;
    NSObject<OS_dispatch_queue> * _internalQueue;
    long long  _keepAliveCount;
}

@property (nonatomic, retain) AMSSQLiteConnection *connection;
@property (nonatomic, retain) NSString *containerId;
@property (nonatomic, retain) <AMSMetricsBagContract> *contract;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) long long keepAliveCount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_lockedById;
- (void)_performTransaction:(id /* block */)arg1;
- (void)close;
- (id)connection;
- (bool)connectionNeedsResetForCorruption:(id)arg1;
- (id)containerId;
- (id)contract;
- (long long)countAllEventsWithLock:(bool)arg1 error:(id*)arg2;
- (void)dropAllEventsWithLockOnly:(bool)arg1 error:(id*)arg2;
- (void)dropEvents:(id)arg1 error:(id*)arg2;
- (void)enumerateEventsForURL:(id)arg1 lockedOnly:(bool)arg2 objectBlock:(id /* block */)arg3;
- (void)enumerateReportURLsWithLockOnly:(bool)arg1 block:(id /* block */)arg2;
- (id)initWithContainerId:(id)arg1 contract:(id)arg2;
- (void)insertEvents:(id)arg1 error:(id*)arg2;
- (id)internalQueue;
- (long long)keepAliveCount;
- (void)lockAllEventsWithError:(id*)arg1;
- (void)setConnection:(id)arg1;
- (void)setContainerId:(id)arg1;
- (void)setContract:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setKeepAliveCount:(long long)arg1;
- (void)unlockAllEventsWithError:(id*)arg1;

@end
