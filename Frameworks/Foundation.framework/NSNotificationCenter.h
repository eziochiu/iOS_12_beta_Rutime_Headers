/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSNotificationCenter : NSObject {
    void * _callback;
    void * _impl;
    void * _pad;
}

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_defaultCenterWithoutCreating;
+ (id)defaultCenter;

- (unsigned long long)_addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 options:(unsigned long long)arg5;
- (void)_removeObserver:(unsigned long long)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(id /* block */)arg4;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)init;
- (bool)isEmpty;
- (void)postNotification:(id)arg1;
- (void)postNotificationName:(id)arg1 object:(id)arg2;
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;

// Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant

- (void)postNotificationNameOnMainThread:(id)arg1 object:(id)arg2 userInfo:(id)arg3 waitUntilDone:(bool)arg4;
- (void)postNotificationNameOnMainThreadHandler:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (void)__mainThreadPostNotification:(id)arg1;
- (void)__mainThreadPostNotificationName:(id)arg1 object:(id)arg2;
- (void)__mainThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)postNotificationName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (id)mf_addImmediateObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)mf_removeObservers:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

- (id)mtNotifiyingQueue;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

- (id)tsu_addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(id /* block */)arg4;

@end
