/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGNotificationListener : NSObject {
    id /* block */  _callback;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    struct __CFString { } * _notification;
}

- (void).cxx_destruct;
- (void)_notify;
- (void)dealloc;
- (id)initWithNotification:(struct __CFString { }*)arg1 callback:(id /* block */)arg2;
- (bool)unsubscribe;

@end
