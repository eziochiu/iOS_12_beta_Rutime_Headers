/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDProcessInfo : HMFObject <HMFLogging> {
    HMDApplicationInfo * _appInfo;
    NSHashTable * _connectionProxies;
    int  _pid;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSArray * _runningReasons;
    unsigned long long  _state;
    bool  _viewService;
    NSObject<OS_dispatch_queue> * _xpcQueue;
}

@property (nonatomic, readonly) HMDApplicationInfo *appInfo;
@property (getter=isBackgrounded, nonatomic, readonly) bool background;
@property (getter=isBackgroundUpgradedToForeground, nonatomic, readonly) bool backgroundUpgradedToForeground;
@property (nonatomic, readonly) NSHashTable *connectionProxies;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isForegrounded, nonatomic, readonly) bool foreground;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, retain) NSArray *runningReasons;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic, readonly) bool suspended;
@property (getter=isTerminated, nonatomic, readonly) bool terminated;
@property (getter=isViewService, nonatomic, readonly) bool viewService;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *xpcQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_activeRequestIdentifiers;
- (void)activate;
- (void)addConnectionProxy:(id)arg1;
- (id)appInfo;
- (id)connectionProxies;
- (void)deactivate;
- (id)description;
- (id)init;
- (id)initWithConnectionProxy:(id)arg1 application:(id)arg2 processId:(int)arg3 xpcQueue:(id)arg4;
- (void)initiateRefresh;
- (bool)isBackgroundUpgradedToForeground;
- (bool)isBackgrounded;
- (bool)isForegrounded;
- (bool)isSuspended;
- (bool)isTerminated;
- (bool)isViewService;
- (id)logIdentifier;
- (int)pid;
- (id)propertyQueue;
- (unsigned long long)proxyCount;
- (void)removeConnectionProxy:(id)arg1;
- (id)runningReasons;
- (void)setRunningReasons:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
- (id)xpcQueue;

@end
