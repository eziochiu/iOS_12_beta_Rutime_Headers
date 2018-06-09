/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

@interface IXAppInstallObserver : NSObject <IXAppInstallObserverProtocol, NSXPCListenerDelegate> {
    <IXAppInstallObserverDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <IXAppInstallObserverDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (oneway void)_client_coordinatorDidCompleteSuccessfullyWithSeed:(id)arg1;
- (oneway void)_client_coordinatorDidInstallPlaceholderWithSeed:(id)arg1;
- (oneway void)_client_coordinatorShouldBeginRestoringUserDataWithSeed:(id)arg1;
- (oneway void)_client_coordinatorShouldPauseWithSeed:(id)arg1;
- (oneway void)_client_coordinatorShouldPrioritizeWithSeed:(id)arg1;
- (oneway void)_client_coordinatorShouldResumeWithSeed:(id)arg1;
- (oneway void)_client_coordinatorWithSeed:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
- (oneway void)_client_coordinatorWithSeed:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;
- (oneway void)_client_shouldPrioritizeAppWithBundleID:(id)arg1;
- (void)_internalInit;
- (id)_oncePerBootUniqueIdentifierForServiceName:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)initTransientForClients:(id)arg1 delegate:(id)arg2;
- (id)initWithMachServiceName:(id)arg1 forClients:(id)arg2 delegate:(id)arg3;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)setListener:(id)arg1;

@end
