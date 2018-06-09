/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASNotificationTracker : NSObject {
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    unsigned long long  _nextNotificationToken;
    NSMutableDictionary * _observers;
}

- (void).cxx_destruct;
- (bool)_deregisterHandlerWithToken:(id)arg1 waitOnPending:(bool)arg2;
- (void)dealloc;
- (bool)deregisterHandlerAsyncWithToken:(id)arg1;
- (bool)deregisterHandlerWithToken:(id)arg1;
- (id)init;
- (void)issueNotificationAsyncWithContext:(id)arg1;
- (void)issueNotificationAsyncWithContext:(id)arg1 callback:(id /* block */)arg2;
- (id)registerWithQueue:(id)arg1 handler:(id /* block */)arg2;

@end
