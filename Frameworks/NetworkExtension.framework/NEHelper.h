/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEHelper : NSObject {
    NSObject<OS_xpc_object> * _connection;
    id /* block */  _incomingMessageHandler;
    NSObject<OS_xpc_object> * _initMessage;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (copy) id /* block */ incomingMessageHandler;
@property (readonly) NSObject<OS_xpc_object> *initMessage;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id /* block */)incomingMessageHandler;
- (id)initMessage;
- (id)initWithDelegateClassID:(int)arg1 queue:(id)arg2;
- (id)queue;
- (void)sendRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)setIncomingMessageHandler:(id /* block */)arg1;

@end
