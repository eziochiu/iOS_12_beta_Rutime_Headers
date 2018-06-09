/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLSharedEventListenerInternal : MTLSharedEventListener {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    struct IONotificationPort { } * _notificationPort;
}

- (void)_notifyEventPort:(unsigned int)arg1 event:(id)arg2 atValue:(unsigned long long)arg3 block:(id /* block */)arg4;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (id)initWithDispatchQueue:(id)arg1;

@end
