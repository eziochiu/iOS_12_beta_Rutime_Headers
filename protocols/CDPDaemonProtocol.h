/* made by EzioChiu.
 */

@protocol CDPDaemonProtocol

@required

- (void)clearFollowUpWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CDPFollowUpContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)deleteRecoveryKeyWithContext:(void *)arg1 uiProvider:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CDPContext *, <CDPStateUIProviderInternal> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)fetchManateeAvailabilityWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)finishOfflineLocalSecretChangeWithContext:(void *)arg1 uiProvider:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CDPContext *, <CDPStateUIProviderInternal> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)generateNewRecoveryKeyWithContext:(void *)arg1 uiProvider:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CDPContext *, <CDPStateUIProviderInternal> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)generateRandomRecoveryKeyWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CDPContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)handleCloudDataProtectionStateWithContext:(void *)arg1 uiProvider:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: CDPContext *, <CDPStateUIProviderInternal> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, void*
- (void)hasLocalSecretWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)isICDPEnabledForDSID:(void *)arg1 checkWithServer:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)isUserVisibleKeychainSyncEnabledWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)localSecretChangedTo:(void *)arg1 secretType:(void *)arg2 context:(void *)arg3 uiProvider:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSString *, unsigned long long, CDPContext *, <CDPStateUIProviderInternal> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)performRecoveryWithContext:(void *)arg1 uiProvider:(void *)arg2 authProvider:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: CDPContext *, <CDPStateUIProviderInternal> *, <CDPAuthProviderInternal> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)postFollowUpWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CDPFollowUpContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)recoverAndSynchronizeSquirrelWithContext:(void *)arg1 uiProvider:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CDPContext *, <CDPStateUIProviderInternal> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)recoverSquirrelWithContext:(void *)arg1 uiProvider:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CDPContext *, <CDPStateUIProviderInternal> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)removeNonViewAwarePeersFromCircleWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CDPContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)repairCloudDataProtectionStateWithContext:(void *)arg1 uiProvider:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CDPContext *, <CDPStateUIProviderInternal> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setUserVisibleKeychainSyncEnabled:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)shouldPerformRepairForContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CDPContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)startCircleApplicationApprovalServerWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CDPContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
