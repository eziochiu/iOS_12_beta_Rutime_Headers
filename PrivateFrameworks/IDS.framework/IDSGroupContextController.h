/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSGroupContextController : NSObject <IDSGroupContextNotifyingObserverDelegate, IDSTransactionLogTaskHandlerDelegate> {
    <IDSGroupContextControllerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    CUTPromiseSeal * _seal;
    NSString * _serviceName;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IDSGroupContextControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) CUTPromiseSeal *seal;
@property (nonatomic, retain) NSString *serviceName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_contentWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didCacheGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)didCreateGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)didReceiveDecryptionFailureForGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)didReceiveRegistrationIdentityUpdateWithCompletion:(id /* block */)arg1;
- (void)didUpdateGroup:(id)arg1 withNewGroup:(id)arg2 completion:(id /* block */)arg3;
- (void)groupContextWithCompletion:(id /* block */)arg1;
- (id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
- (void)persistedTokenForTaskHandler:(id)arg1 completion:(id /* block */)arg2;
- (void)qGroupContextWithDeviceIdentity:(id)arg1 completion:(id /* block */)arg2;
- (void)qSetupSeal;
- (id)queue;
- (void)scheduleTransactionLogTask:(id)arg1;
- (id)seal;
- (id)serviceName;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSeal:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)taskHandler:(id)arg1 accountInfoForAliases:(id)arg2 completion:(id /* block */)arg3;
- (void)taskHandler:(id)arg1 groupsWithGroupIDs:(id)arg2 completion:(id /* block */)arg3;
- (void)taskHandler:(id)arg1 messagesFromToken:(id)arg2 completion:(id /* block */)arg3;
- (void)taskHandler:(id)arg1 participantsWithDestinations:(id)arg2 completion:(id /* block */)arg3;
- (void)taskHandler:(id)arg1 persistToken:(id)arg2 completion:(id /* block */)arg3;

@end
