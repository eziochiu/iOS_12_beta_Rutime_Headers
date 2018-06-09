/* made by EzioChiu.
 */

@protocol XCTTestScheduler

@required

- (<XCTTestSchedulerDelegate> *)delegate;
- (NSObject<OS_dispatch_queue> *)delegateQueue;
- (void)setDelegate:(id <XCTTestSchedulerDelegate>)arg1;
- (void)setDelegateQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setWorkerQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)startWithTestIdentifiersToRun:(NSSet *)arg1 testIdentifiersToSkip:(NSSet *)arg2;
- (void)workerDidBecomeAvailable:(id <XCTTestSchedulerWorker>)arg1;
- (NSObject<OS_dispatch_queue> *)workerQueue;

@end
