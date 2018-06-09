/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATTaskBlockServer : NSObject <CATTaskServerDelegate> {
    NSArray * _clientSessions;
    id /* block */  _didInvalidate;
    id /* block */  _sessionDidConnect;
    id /* block */  _sessionDidDisconnect;
    id /* block */  _sessionDidInterruptWithError;
    id /* block */  _sessionDidInvalidate;
    id /* block */  _sessionDidReceiveNotification;
    NSMutableSet * mLongRunningOperationRequestClassNames;
    NSMapTable * mLongRunningOperationsByUUID;
    NSMutableDictionary * mOperationBlocksByRequestClassName;
    CATTaskServer * mServer;
}

@property (nonatomic, readonly, copy) NSArray *clientSessions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didInvalidate;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ sessionDidConnect;
@property (nonatomic, copy) id /* block */ sessionDidDisconnect;
@property (nonatomic, copy) id /* block */ sessionDidInterruptWithError;
@property (nonatomic, copy) id /* block */ sessionDidInvalidate;
@property (nonatomic, copy) id /* block */ sessionDidReceiveNotification;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelLongRunningOperationsForRequestClass:(Class)arg1;
- (id)clientSessions;
- (id)createClientTransport;
- (void)dealloc;
- (id /* block */)didInvalidate;
- (void)disconnectAllClientSessions;
- (id)init;
- (void)invalidate;
- (void)postNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (void)registerBlock:(id /* block */)arg1 forRequestClass:(Class)arg2;
- (void)registerLongRunningOperationForRequestClass:(Class)arg1;
- (void)server:(id)arg1 clientSession:(id)arg2 didInterruptWithError:(id)arg3;
- (void)server:(id)arg1 clientSession:(id)arg2 didReceiveNotificationWithName:(id)arg3 userInfo:(id)arg4;
- (id)server:(id)arg1 clientSession:(id)arg2 operationForRequest:(id)arg3 error:(id*)arg4;
- (void)server:(id)arg1 clientSessionDidConnect:(id)arg2;
- (void)server:(id)arg1 clientSessionDidDisconnect:(id)arg2;
- (void)server:(id)arg1 clientSessionDidInvalidate:(id)arg2;
- (void)serverDidInvalidate:(id)arg1;
- (id /* block */)sessionDidConnect;
- (id /* block */)sessionDidDisconnect;
- (id /* block */)sessionDidInterruptWithError;
- (id /* block */)sessionDidInvalidate;
- (id /* block */)sessionDidReceiveNotification;
- (void)setDidInvalidate:(id /* block */)arg1;
- (void)setSessionDidConnect:(id /* block */)arg1;
- (void)setSessionDidDisconnect:(id /* block */)arg1;
- (void)setSessionDidInterruptWithError:(id /* block */)arg1;
- (void)setSessionDidInvalidate:(id /* block */)arg1;
- (void)setSessionDidReceiveNotification:(id /* block */)arg1;

@end
