/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDelegationConsumerServiceSession : NSObject <ICDelegationConsumerNetServiceDelegate, ICDelegationServiceConnectionDelegate> {
    NSMutableArray * _acceptedConnections;
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    ICDelegationConsumerNetService * _netService;
    NSMutableArray * _pendingUserIdentities;
    ICDelegationConsumerServiceProtocolHandler * _protocolHandler;
    ICDelegationConsumerServiceRequest * _request;
    id /* block */  _responseHandler;
    NSMutableDictionary * _sessionIDToRequestInfoMap;
    NSObject<OS_dispatch_source> * _timeoutDispatchSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) ICDelegationConsumerServiceRequest *request;
@property (nonatomic, readonly) id /* block */ responseHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleTimeout;
- (void)_stop;
- (void)dealloc;
- (void)delegationConsumerNetService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
- (void)delegationServiceConnection:(id)arg1 didEncouterError:(id)arg2;
- (bool)delegationServiceConnection:(id)arg1 didReceiveRequest:(id)arg2;
- (void)delegationServiceConnectionDidClose:(id)arg1;
- (id)initWithRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (id)request;
- (id /* block */)responseHandler;
- (void)start;
- (void)stop;

@end
