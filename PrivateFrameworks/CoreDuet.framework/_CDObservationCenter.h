/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDObservationCenter : NSObject {
    struct NSMapTable { Class x1; } * _senderToNotificationObserverObservers;
    struct NSMapTable { Class x1; } * _senderToNotificationObservers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 queue:(id)arg4 observerObserver:(bool)arg5 usingCall:(id)arg6;
- (struct NSMapTable { Class x1; }*)_notificationToObserverEntriesForSender:(id)arg1 observerObserver:(bool)arg2 shouldCreate:(bool)arg3;
- (struct NSMapTable { Class x1; }*)_observerToEntriesForSender:(id)arg1 name:(id)arg2 observerObserver:(bool)arg3 shouldCreate:(bool)arg4;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2 sender:(id)arg3 observerObserver:(bool)arg4;
- (void)_postObserverChangesNotificationWithObserverCounts:(id)arg1;
- (void)_removeObserver:(id)arg1 name:(id)arg2 observerObserver:(bool)arg3;
- (void)_removeObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 observerObserver:(bool)arg4 observerCounts:(id)arg5;
- (void)_removeObserver:(id)arg1 observerObserver:(bool)arg2;
- (void)addObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 queue:(id)arg4 usingBlock:(id /* block */)arg5;
- (void)addObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 queue:(id)arg4 usingSelector:(SEL)arg5;
- (void)addObserverChangesObserver:(id)arg1 onName:(id)arg2 queue:(id)arg3 usingBlock:(id /* block */)arg4;
- (void)addObserverChangesObserver:(id)arg1 onName:(id)arg2 queue:(id)arg3 usingSelector:(SEL)arg4;
- (id)init;
- (unsigned long long)observerCountOnName:(id)arg1;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2 sender:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 name:(id)arg2;
- (void)removeObserver:(id)arg1 name:(id)arg2 sender:(id)arg3;
- (void)removeObserverChangesObserver:(id)arg1 onName:(id)arg2;

@end
