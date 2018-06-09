/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface _EKNotificationMonitor : NSObject {
    NSMutableSet * _alertedNotificationsThatFailedToMarkAlerted;
    bool  _allowedToMarkAlerted;
    NSArray * _eventNotificationReferences;
    EKEventStore * _eventStore;
    id /* block */  _eventStoreGetter;
    bool  _initialCheck;
    bool  _loadRecentlyRepliedNotifications;
    NSDate * _nextFireTime;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    long long  _notificationTypes;
    bool  _pendingChanges;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _registerForDarwinNotifications;
    NSArray * _reminderNotificationReferences;
    bool  _running;
    bool  _shouldInstallPersistentTimer;
    NSTimer * _syncTimer;
    PCPersistentTimer * _timer;
    NSObject<OS_dispatch_queue> * _timerQueue;
    bool  _useSyncIdleTimer;
}

@property (nonatomic) bool allowedToMarkAlerted;
@property (nonatomic, readonly) unsigned long long eventNotificationCount;
@property (nonatomic, readonly) NSArray *eventNotificationReferences;
@property (nonatomic, readonly) unsigned long long notificationCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic, readonly) NSArray *notificationReferences;
@property (nonatomic, readonly) NSArray *reminderNotificationReferences;

+ (id)logHandle;
+ (id)requestedDarwinNotifications;

- (void).cxx_destruct;
- (void)_alertPrefChanged;
- (void)_databaseChanged;
- (id)_eventStore;
- (id)_fetchEventNotificationReferencesFromEventStore:(id)arg1;
- (void)_killSyncTimer;
- (void)_notificationCountChangedExternally;
- (void)_notifyForUnalertedNotifications:(id)arg1;
- (unsigned long long)_reminderNotificationCount;
- (void)_resetSyncTimer;
- (void)_resetTimer;
- (void)_syncDidEnd;
- (void)_syncDidStart;
- (void)_syncTimerFired:(id)arg1;
- (void)_timerFired;
- (void)adjust;
- (bool)allowedToMarkAlerted;
- (void)attemptReload;
- (void)attemptReloadSynchronously:(bool)arg1;
- (void)dealloc;
- (unsigned long long)eventNotificationCount;
- (id)eventNotificationReferences;
- (void)handleDarwinNotification:(id)arg1;
- (id)init;
- (id)initByHandlingOnlyEvents:(bool)arg1 eventStore:(id)arg2;
- (id)initByHandlingTypes:(long long)arg1 bulletinBoardWithEventStoreGetter:(id /* block */)arg2;
- (void)killTimer;
- (unsigned long long)notificationCount;
- (id)notificationQueue;
- (id)notificationReferences;
- (id)reminderNotificationReferences;
- (void)setAllowedToMarkAlerted:(bool)arg1;
- (void)start;
- (void)stop;
- (bool)wantsEvents;
- (bool)wantsReminders;

@end
