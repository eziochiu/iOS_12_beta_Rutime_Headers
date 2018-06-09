/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFTRSession : NSObject {
    bool  _activateCalled;
    TRAnisetteDataHandler * _anisetteDataHandler;
    bool  _connected;
    id /* block */  _disconnectHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableDictionary * _handlerMap;
    bool  _invalidateCalled;
    id /* block */  _sendEventImpHandler;
    id /* block */  _sendRequestImpHandler;
    SFSession * _session;
}

@property (getter=isConnected, nonatomic) bool connected;
@property (nonatomic, copy) id /* block */ disconnectHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ sendEventImpHandler;
@property (nonatomic, copy) id /* block */ sendRequestImpHandler;
@property (nonatomic, retain) SFSession *session;
@property (nonatomic, readonly) TRSession *trSession;

- (void).cxx_destruct;
- (void)_cleanup;
- (id)_decodeTRMessageData:(id)arg1 kindOfClass:(Class)arg2;
- (void)activate;
- (void)dealloc;
- (void)disconnect;
- (id /* block */)disconnectHandler;
- (id)dispatchQueue;
- (void)handleEvent:(id)arg1 flags:(unsigned int)arg2;
- (void)handleRequest:(id)arg1 flags:(unsigned int)arg2 responseHandler:(id /* block */)arg3;
- (id)init;
- (void)invalidate;
- (bool)isConnected;
- (void)sendEvent:(id)arg1;
- (id /* block */)sendEventImpHandler;
- (void)sendRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (id /* block */)sendRequestImpHandler;
- (id)session;
- (void)setConnected:(bool)arg1;
- (void)setDisconnectHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setEventHandler:(id /* block */)arg1 forEventClass:(Class)arg2;
- (void)setRequestHandler:(id /* block */)arg1 forRequestClass:(Class)arg2;
- (void)setSendEventImpHandler:(id /* block */)arg1;
- (void)setSendRequestImpHandler:(id /* block */)arg1;
- (void)setSession:(id)arg1;
- (id)trSession;

@end
