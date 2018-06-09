/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKNotificationCenter : NSObject {
    NSObject<OS_dispatch_queue> * _registrationQueue;
    NSMutableDictionary * _registrationsByNotificationName;
}

+ (id)defaultCenter;

- (void).cxx_destruct;
- (void)_handleNotification:(id)arg1;
- (void)_postNotificationName:(id)arg1;
- (void)_queue_registerObserver:(id)arg1 selector:(SEL)arg2 forNotificationName:(id)arg3;
- (void)_queue_unregisterObserver:(id)arg1 forNotificationName:(id)arg2 cleanupIfLastObserver:(bool)arg3;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 notificationName:(id)arg3;
- (id)init;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 notificationName:(id)arg2;

@end
