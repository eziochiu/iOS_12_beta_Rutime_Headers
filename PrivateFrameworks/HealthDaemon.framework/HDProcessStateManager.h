/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDProcessStateManager : NSObject <HDDiagnosticObject> {
    BKSApplicationStateMonitor * _applicationMonitor;
    NSObject<OS_dispatch_queue> * _clientCalloutQueue;
    HDDaemon * _daemon;
    NSHashTable * _foregroundClientProcessObservers;
    NSMutableDictionary * _processInfoByBundleID;
    NSMutableDictionary * _processObserversByBundleID;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)applicationIsForeground:(id)arg1;
+ (id)bundleVersionStringForProcessIdentifier:(int)arg1;
+ (int)processIdentifierForApplicationIdentifier:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)_getApplicationStateForBundleIdentifier:(id)arg1;
- (void)_handleBackboardApplicationInfoChanged:(id)arg1;
- (void)_queue_handleBackboardApplicationInfoChanged:(id)arg1;
- (void)_queue_handleProcessInfoChangedWithAllPreviousProcessInfos:(id)arg1;
- (void)_queue_notifyObserversProcessWithBundleIdentifier:(id)arg1 processIdentifier:(int)arg2 applicationStateChanged:(unsigned int)arg3 previousApplicationState:(unsigned int)arg4;
- (bool)applicationIsForeground:(id)arg1;
- (id)bundleVersionStringForProcessIdentifier:(int)arg1;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)init;
- (id)initWithDaemon:(id)arg1;
- (bool)isApplicationStateForegroundForBundleIdentifier:(id)arg1;
- (bool)isApplicationStateSuspendedForBundleIdentifier:(id)arg1;
- (int)processIdentifierForApplicationIdentifier:(id)arg1;
- (void)registerForegroundClientProcessObserver:(id)arg1;
- (bool)registerObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)unregisterForegroundClientProcessObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1 forBundleIdentifier:(id)arg2;

@end
