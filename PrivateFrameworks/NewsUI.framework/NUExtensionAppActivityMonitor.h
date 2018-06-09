/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUExtensionAppActivityMonitor : NSObject <FCAppActivityMonitor, SXAppStateMonitor> {
    NSMutableSet * _activeObserverBlocks;
    NSMutableSet * _backgroundObserverBlocks;
    NSNotificationCenter * _notificationCenter;
    NSHashTable * _observers;
}

@property (nonatomic, readonly) NSMutableSet *activeObserverBlocks;
@property (nonatomic, readonly) NSMutableSet *backgroundObserverBlocks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activeObserverBlocks;
- (void)addObserver:(id)arg1;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (id)backgroundObserverBlocks;
- (void)dealloc;
- (id)initWithNotificationCenter:(id)arg1;
- (id)notificationCenter;
- (id)observers;
- (void)performOnApplicationDidBecomeActive:(id /* block */)arg1;
- (void)performOnApplicationDidEnterBackground:(id /* block */)arg1;

@end
