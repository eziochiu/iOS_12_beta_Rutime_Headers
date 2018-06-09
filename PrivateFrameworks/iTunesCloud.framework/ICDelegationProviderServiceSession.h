/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDelegationProviderServiceSession : NSObject <ICDelegationServiceConnectionDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    ICDelegationServiceConnection * _connection;
    <ICDelegationProviderServiceSessionDelegate> * _delegate;
    NSArray * _delegationAccountUUIDs;
    ICDelegationProviderNetService * _netService;
    ICDelegationProviderServiceProtocolHandler * _protocolHandler;
    ICRequestContext * _requestContext;
    NSMutableDictionary * _sessionIDToStreamContext;
    long long  _state;
    NSArray * _userIdentities;
    ICUserIdentityStore * _userIdentityStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICDelegationProviderServiceSessionDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *delegationAccountUUIDs;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ICDelegationProviderNetService *netService;
@property (nonatomic, readonly, copy) ICRequestContext *requestContext;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *userIdentities;
@property (nonatomic, readonly) ICUserIdentityStore *userIdentityStore;

- (void).cxx_destruct;
- (void)_finishWithError:(id)arg1;
- (void)_handleStartDelegationResponse:(id)arg1;
- (void)_startDelegation;
- (id)delegate;
- (id)delegationAccountUUIDs;
- (void)delegationServiceConnection:(id)arg1 didEncouterError:(id)arg2;
- (void)delegationServiceConnectionDidClose:(id)arg1;
- (id)initWithUserIdentities:(id)arg1 userIdentityStore:(id)arg2 requestContext:(id)arg3 netService:(id)arg4 delegationAccountUUIDs:(id)arg5;
- (id)netService;
- (id)requestContext;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;
- (id)userIdentities;
- (id)userIdentityStore;

@end
