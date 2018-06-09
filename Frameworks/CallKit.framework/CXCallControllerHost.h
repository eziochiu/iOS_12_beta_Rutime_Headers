/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallControllerHost : NSObject <CXCallControllerHostConnectionDelegate, NSXPCListenerDelegate> {
    NSMutableDictionary * _callUUIDToCallMap;
    int  _clientsShouldConnectToken;
    NSMutableSet * _connections;
    <CXCallControllerHostDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCListener * _xpcListener;
}

@property (nonatomic, retain) NSMutableDictionary *callUUIDToCallMap;
@property (nonatomic, readonly) int clientsShouldConnectToken;
@property (nonatomic, retain) NSMutableSet *connections;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXCallControllerHostDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCListener *xpcListener;

- (void).cxx_destruct;
- (id)_callsForCallControllerHostConnection:(id)arg1;
- (void)_performDelegateCallback:(id /* block */)arg1;
- (void)addOrUpdateCall:(id)arg1;
- (void)callControllerHostConnection:(id)arg1 requestCalls:(id /* block */)arg2;
- (void)callControllerHostConnection:(id)arg1 requestTransaction:(id)arg2 completion:(id /* block */)arg3;
- (void)callControllerHostConnectionInvalidated:(id)arg1;
- (id)callUUIDToCallMap;
- (int)clientsShouldConnectToken;
- (id)connections;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)init;
- (id)initWithCalls:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)queue;
- (void)removeCall:(id)arg1;
- (void)setCallUUIDToCallMap:(id)arg1;
- (void)setConnections:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setXpcListener:(id)arg1;
- (id)xpcListener;

@end
