/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDApplicationRegistry : HMFObject <HMFLogging, HMFMessageReceiver, LSApplicationWorkspaceObserverProtocol> {
    LSApplicationWorkspace * _appWorkspace;
    NSMutableDictionary * _applications;
    HMFMessageDispatcher * _messageDispatcher;
    HMDApplicationMonitor * _monitor;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _xpcQueue;
}

@property (nonatomic, retain) LSApplicationWorkspace *appWorkspace;
@property (nonatomic, retain) NSMutableDictionary *applications;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMDApplicationMonitor *monitor;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *xpcQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_startObservingAppUninstalls;
- (void)_stopObservingAppUninstalls;
- (id)appWorkspace;
- (id)applications;
- (void)applicationsDidUninstall:(id)arg1;
- (void)dealloc;
- (id)ignoredForegroundAppBundleIdentifiers;
- (id)init;
- (id)initWithMessageDispatcher:(id)arg1 xpcQueue:(id)arg2;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)monitor;
- (void)processTerminated:(id)arg1;
- (void)setAppWorkspace:(id)arg1;
- (void)setApplications:(id)arg1;
- (void)setMessageDispatcher:(id)arg1;
- (void)setMonitor:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setXpcQueue:(id)arg1;
- (void)startMonitoringConnection:(id)arg1;
- (void)stopMonitoringConnection:(id)arg1;
- (id)uuid;
- (id)xpcQueue;

@end
