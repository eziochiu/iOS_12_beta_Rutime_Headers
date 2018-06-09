/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSXPCConnectionListener : NSObject {
    NSObject<OS_xpc_object> * _connection;
    <BSXPCConnectionListenerHandler> * _handler;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _service;
}

@property (readonly) <BSXPCConnectionListenerHandler> *handler;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy) NSString *service;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)handler;
- (id)initWithConnection:(id)arg1 forService:(id)arg2 withHandler:(id)arg3 onQueue:(id)arg4;
- (void)invalidate;
- (id)queue;
- (id)service;

@end
