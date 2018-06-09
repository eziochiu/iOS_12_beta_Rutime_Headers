/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDSystemAvailabilityMonitor : NSObject {
    NSObject<OS_dispatch_queue> * _availabilityQueue;
    unsigned long long  _availabilityState;
    NSMutableSet * _watchers;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *availabilityQueue;
@property unsigned long long availabilityState;
@property (readonly) bool systemIsAvailable;
@property (nonatomic, retain) NSMutableSet *watchers;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (id)_init;
- (void)_notifyWatchersOfStateChange;
- (bool)_systemMayNowBeReady;
- (id)availabilityQueue;
- (unsigned long long)availabilityState;
- (void)dealloc;
- (id)init;
- (void)registerWatcher:(id)arg1;
- (void)setAvailabilityQueue:(id)arg1;
- (void)setAvailabilityState:(unsigned long long)arg1;
- (void)setWatchers:(id)arg1;
- (bool)systemIsAvailable;
- (void)unregisterWatcher:(id)arg1;
- (id)watchers;

@end