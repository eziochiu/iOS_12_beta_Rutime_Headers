/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreNetworkActivityTracing : NSObject {
    NSMutableDictionary * _activities;
    NSMutableSet * _connections;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedNetworkActivityTracing;

- (void).cxx_destruct;
- (void)_networkActivityActivate:(long long)arg1;
- (void)_networkActivityAddNWConnection:(id)arg1;
- (void)_networkActivityRemoveNWConnection:(id)arg1;
- (void)_networkActivityStart:(long long)arg1 activate:(bool)arg2;
- (void)_networkActivityStop:(long long)arg1;
- (void)_networkActivityTracingCancel;
- (id)init;
- (void)networkActivityActivate:(long long)arg1;
- (void)networkActivityAddNWConnection:(id)arg1;
- (void)networkActivityRemoveNWConnection:(id)arg1;
- (void)networkActivityStart:(long long)arg1 activate:(bool)arg2;
- (void)networkActivityStop:(long long)arg1;
- (void)networkActivityTracingCancel;

@end
