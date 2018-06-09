/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSActionListener : BSBaseXPCServer {
    NSObject<OS_dispatch_queue> * _queue;
    NSMapTable * _queue_portToContextMap;
}

- (void)_queue_cleanupContext:(struct { unsigned int x1; id x2; id /* block */ x3; }*)arg1 withResponse:(id)arg2;
- (void)clearListenerForToken:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;
- (id)listenForResponseWithHandler:(id /* block */)arg1 timeout:(unsigned long long)arg2;
- (void)queue_handleMessage:(id)arg1 client:(id)arg2;

@end
