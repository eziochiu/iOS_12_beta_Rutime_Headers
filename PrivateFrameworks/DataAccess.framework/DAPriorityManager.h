/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAPriorityManager : NSObject {
    BKSApplicationStateMonitor * _appStateMonitor;
    NSMutableDictionary * _cachedAppState;
    NSMapTable * _clientsToPriorityRequests;
    int  _currentPriority;
    long long  _foregroundDataclasses;
}

@property (nonatomic, retain) BKSApplicationStateMonitor *appStateMonitor;
@property (nonatomic, retain) NSMutableDictionary *cachedAppState;
@property (nonatomic, retain) NSMapTable *clientsToPriorityRequests;
@property (nonatomic, readonly) int currentPriority;
@property (nonatomic) long long foregroundDataclasses;

+ (id)sharedManager;
+ (void)vendPriorityManagers;

- (void).cxx_destruct;
- (void)_applicationStateChanged:(id)arg1;
- (int)_recalculatePriority;
- (void)_setForegroundDataclasses:(long long)arg1;
- (void)_setNewPriority;
- (void)_updateForegroundDataclasses;
- (id)appIDsToDataclasses;
- (id)appStateMonitor;
- (void)bumpDataclassesToUIPriority:(long long)arg1;
- (id)cachedAppState;
- (id)clientsToPriorityRequests;
- (int)currentPriority;
- (void)dealloc;
- (long long)foregroundDataclasses;
- (id)init;
- (void)requestPriority:(int)arg1 forClient:(id)arg2 dataclasses:(long long)arg3;
- (void)setAppStateMonitor:(id)arg1;
- (void)setCachedAppState:(id)arg1;
- (void)setClientsToPriorityRequests:(id)arg1;
- (void)setForegroundDataclasses:(long long)arg1;
- (id)stateString;

@end