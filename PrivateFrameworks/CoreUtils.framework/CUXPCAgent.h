/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUXPCAgent : NSObject <NSXPCListenerDelegate> {
    id /* block */  _connectionEndedHandler;
    id /* block */  _connectionStartedHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSXPCInterface * _exportedInterface;
    id  _exportedObject;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    NSXPCListenerEndpoint * _listenerEndpoint;
    NSXPCInterface * _remoteObjectInterface;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    NSXPCConnection * _xpcCnx;
    struct NSMutableSet { Class x1; } * _xpcCnxSet;
    NSXPCListener * _xpcListener;
}

@property (nonatomic, copy) id /* block */ connectionEndedHandler;
@property (nonatomic, copy) id /* block */ connectionStartedHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) NSXPCInterface *exportedInterface;
@property (nonatomic, retain) id exportedObject;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) NSXPCListenerEndpoint *listenerEndpoint;
@property (nonatomic, retain) NSXPCInterface *remoteObjectInterface;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_connectionInvalidated:(id)arg1;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (bool)activateDirectAndReturnError:(id*)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id /* block */)connectionEndedHandler;
- (id /* block */)connectionStartedHandler;
- (void)dealloc;
- (id)dispatchQueue;
- (id)exportedInterface;
- (id)exportedObject;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)listenerEndpoint;
- (id)remoteObjectInterface;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)setConnectionEndedHandler:(id /* block */)arg1;
- (void)setConnectionStartedHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setExportedInterface:(id)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setListenerEndpoint:(id)arg1;
- (void)setRemoteObjectInterface:(id)arg1;

@end
