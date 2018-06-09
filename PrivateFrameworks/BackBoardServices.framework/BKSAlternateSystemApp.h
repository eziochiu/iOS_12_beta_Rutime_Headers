/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSAlternateSystemApp : NSObject <BKSAlternateSystemAppClientProtocol> {
    NSString * _bundleId;
    NSXPCConnection * _connection;
    <BKSAlternateSystemAppDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _state;
    NSObject<OS_dispatch_semaphore> * _stateChangeSemaphore;
    bool  _stateChangeWaiter;
}

@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BKSAlternateSystemAppDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long state;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *stateChangeSemaphore;
@property (nonatomic) bool stateChangeWaiter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleInterruptedConnection;
- (void)_handleInvalidatedConnection;
- (void)_queue_changeState:(long long)arg1;
- (void)_queue_ensureConnection;
- (void)_queue_invalidate;
- (void)_waitForState:(long long)arg1;
- (void)activate;
- (void)alternateSystemAppWithBundleID:(id)arg1 didExitWithContext:(id)arg2;
- (void)alternateSystemAppWithBundleID:(id)arg1 failedToOpenWithResult:(id)arg2;
- (void)alternateSystemAppWithBundleIDDidOpen:(id)arg1;
- (void)alternateSystemAppWithBundleIDDidTerminate:(id)arg1;
- (id)bundleId;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (void)didBlockSystemAppForAlternateSystemApp;
- (void)didUnblockSystemAppForAlternateSystemApp;
- (id)initWithBundleId:(id)arg1;
- (id)queue;
- (void)setBundleId:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setStateChangeSemaphore:(id)arg1;
- (void)setStateChangeWaiter:(bool)arg1;
- (long long)state;
- (id)stateChangeSemaphore;
- (bool)stateChangeWaiter;
- (void)terminate;

@end
