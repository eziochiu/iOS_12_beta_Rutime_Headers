/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSInstallProgressService : NSObject <NSXPCListenerDelegate> {
    NSMutableSet * _inactiveInstalls;
    NSObject<OS_dispatch_queue> * _installControlsQueue;
    NSMutableDictionary * _installIndexes;
    NSMutableSet * _observers;
    NSObject<OS_dispatch_queue> * _observersQueue;
    NSMutableOrderedSet * _orderedInstalls;
    LSInstallProgressList * _progresses;
    bool  _usingNetwork;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)beginListening;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_LSFindPlaceholderApplications;
- (void)_placeholderIconUpdatedForApp:(id)arg1;
- (id)_prepareApplicationProxiesForNotification:(int)arg1 identifiers:(id)arg2 withPlugins:(bool)arg3 options:(id)arg4;
- (void)addObserver:(id)arg1;
- (void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(id)arg3;
- (void)handleCancelInstallationForApp:(id)arg1;
- (id)init;
- (void)installationEndedForApplication:(id)arg1 withState:(unsigned long long)arg2;
- (void)installationFailedForApplication:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)parentProgressForApplication:(id)arg1 andPhase:(unsigned long long)arg2 isActive:(bool)arg3;
- (void)rebuildInstallIndexes;
- (void)removeObserver:(id)arg1;
- (void)restoreInactiveInstalls;
- (void)sendAppControlsNotificationForApp:(id)arg1 withName:(id)arg2;
- (void)sendNetworkUsageChangedNotification;
- (void)sendNotification:(id)arg1 ForPlugins:(id)arg2;
- (void)sendNotification:(int)arg1 forAppProxies:(id)arg2 Plugins:(bool)arg3;
- (void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(bool)arg3;
- (void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(bool)arg3 options:(id)arg4;

@end
