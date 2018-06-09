/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDClientHandler : NSObject <CDPDaemonProtocol> {
    unsigned long long  _clientType;
    NSXPCConnection * _connection;
    unsigned long long  _entitlements;
    id  _notificationObject;
}

- (void).cxx_destruct;
- (bool)_allowDataRecovery;
- (bool)_allowFollowUps;
- (bool)_allowRecoveryKey;
- (bool)_allowStateMachineAccess;
- (bool)_allowUtilityAccess;
- (void)_performRecoveryWithContext:(id)arg1 uiProvider:(id)arg2 authProvider:(id)arg3 errorProviuder:(id)arg4 resultParser:(id)arg5 secureBackUpController:(id)arg6 completion:(id /* block */)arg7;
- (id)_preflightContext:(id)arg1;
- (void)_removeObserver;
- (void)_startObservingConnectionStateForRepairWithStateMachine:(id)arg1;
- (void)clearFollowUpWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)deleteRecoveryKeyWithContext:(id)arg1 uiProvider:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchManateeAvailabilityWithCompletion:(id /* block */)arg1;
- (void)finishOfflineLocalSecretChangeWithContext:(id)arg1 uiProvider:(id)arg2 completion:(id /* block */)arg3;
- (void)generateNewRecoveryKeyWithContext:(id)arg1 uiProvider:(id)arg2 completion:(id /* block */)arg3;
- (void)generateRandomRecoveryKeyWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)handleCloudDataProtectionStateWithContext:(id)arg1 uiProvider:(id)arg2 completion:(id /* block */)arg3;
- (void)hasLocalSecretWithCompletion:(id /* block */)arg1;
- (id)initWithConnection:(id)arg1 entitlements:(unsigned long long)arg2 clientType:(unsigned long long)arg3;
- (void)isICDPEnabledForDSID:(id)arg1 checkWithServer:(bool)arg2 completion:(id /* block */)arg3;
- (void)isUserVisibleKeychainSyncEnabledWithCompletion:(id /* block */)arg1;
- (void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 context:(id)arg3 uiProvider:(id)arg4 completion:(id /* block */)arg5;
- (void)performRecoveryWithContext:(id)arg1 uiProvider:(id)arg2 authProvider:(id)arg3 completion:(id /* block */)arg4;
- (void)postFollowUpWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)recoverAndSynchronizeSquirrelWithContext:(id)arg1 uiProvider:(id)arg2 completion:(id /* block */)arg3;
- (void)recoverSquirrelWithContext:(id)arg1 uiProvider:(id)arg2 completion:(id /* block */)arg3;
- (void)removeNonViewAwarePeersFromCircleWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)repairCloudDataProtectionStateWithContext:(id)arg1 uiProvider:(id)arg2 completion:(id /* block */)arg3;
- (void)setUserVisibleKeychainSyncEnabled:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)shouldPerformRepairForContext:(id)arg1 completion:(id /* block */)arg2;
- (void)startCircleApplicationApprovalServerWithContext:(id)arg1 completion:(id /* block */)arg2;

@end
