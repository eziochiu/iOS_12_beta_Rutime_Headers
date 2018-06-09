/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDistributedNotificationCenter : NSNotificationCenter

@property bool suspended;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)defaultCenter;
+ (id)notificationCenterForType:(id)arg1;

- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 suspensionBehavior:(unsigned long long)arg5;
- (id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(id /* block */)arg4;
- (id)addObserverForName:(id)arg1 object:(id)arg2 suspensionBehavior:(unsigned long long)arg3 queue:(id)arg4 usingBlock:(id /* block */)arg5;
- (id)init;
- (void)postNotification:(id)arg1;
- (void)postNotificationName:(id)arg1 object:(id)arg2;
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 deliverImmediately:(bool)arg4;
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 options:(unsigned long long)arg4;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)setSuspended:(bool)arg1;
- (bool)suspended;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (void)_handleNotification:(id)arg1;
- (id)_internalNameForNotificationName:(id)arg1;
- (void)weak_addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)weak_removeObserver:(id)arg1;
- (void)weak_removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;

@end
