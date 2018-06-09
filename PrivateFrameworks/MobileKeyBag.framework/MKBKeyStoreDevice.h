/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileKeyBag.framework/MobileKeyBag
 */

@interface MKBKeyStoreDevice : NSObject

+ (id)sharedService;

- (int)ChangeSystemSecretWithEscrow:(id)arg1 FromOldPasscode:(id)arg2 ToNew:(id)arg3 withOpaqueDats:(id)arg4 withKeepState:(int)arg5;
- (bool)MKBUserSessionSetInternalTest:(bool)arg1 WithReturnedError:(id*)arg2;
- (int)SeshatDebug:(int)arg1;
- (int)SeshatEnroll:(id)arg1;
- (int)SeshatReport;
- (int)SeshatUnlock:(id)arg1;
- (id)_CreateMKBServerConnection;
- (bool)addSyncServiceSource:(id)arg1 ToUserSessionWithID:(int)arg2 WithReturnedError:(id*)arg3;
- (int)changeClassKeysGenerationWithSecret:(id)arg1 withGenerationOption:(int)arg2;
- (int)changeSystemSecretFromOldPasscode:(id)arg1 ToNew:(id)arg2 withOpaqueData:(id)arg3;
- (id)configureLoginUI:(int)arg1 WithReturnedError:(id*)arg2;
- (id)copySytemSecretBlob;
- (id)createUserSession:(id)arg1 withSecret:(id)arg2 withOpaqueData:(id)arg3 withreturnedError:(id*)arg4;
- (int)currentSyncBubbledIDWithReturnedError:(id*)arg1;
- (bool)deleteUserSessionBlobWithReturnedError:(id*)arg1;
- (bool)deleteUserSessionSecureBlobWithReturnedError:(id*)arg1;
- (id)foregroundUserSessionAtrributesWithReturnedError:(id*)arg1;
- (id)getBackupkeyForInodeOrCryptoID:(unsigned long long)arg1 withreturnValue:(int*)arg2;
- (bool)getDeviceLockStateForUser:(int)arg1 extendedState:(bool)arg2 withLockStateInfo:(int*)arg3;
- (id)getFileHandleForData:(id)arg1;
- (id)getLockStateForUser:(int)arg1;
- (int)isKeyRollingWithKeyStatus:(int*)arg1;
- (int)limitNumberOfUserSessionsTo:(int)arg1 WithReturnedError:(id*)arg2;
- (id)listAllUserSessionIDSWithReturnedError:(id*)arg1;
- (id)listAllUserSyncBubbleIDsWithReturnedError:(id*)arg1;
- (id)listSyncServiceSourcesForUserSession:(id)arg1 WithReturnedError:(id*)arg2;
- (id)loadUserSession:(id)arg1 withSecret:(id)arg2 withreturnedError:(id*)arg3;
- (int)migrateFS;
- (id)migrateUserSession:(id)arg1 fromPath:(id)arg2 withSecret:(id)arg3 withOpaqueData:(id)arg4 withreturnedError:(id*)arg5;
- (bool)mountUserSessionVolumeforID:(int)arg1 WithReturnedError:(id*)arg2;
- (int)passcodeUnlockFailed;
- (int)passcodeUnlockStart;
- (int)passcodeUnlockSuccess;
- (int)registerOTABackup:(id)arg1 withSecret:(id)arg2;
- (bool)removeAllUserSyncBubbleIDsWithReturnedError:(id*)arg1;
- (bool)removeSyncServiceSource:(id)arg1 ToUserSessionWithID:(int)arg2 WithReturnedError:(id*)arg3;
- (bool)removeUserSession:(id)arg1 withreturnedError:(id*)arg2;
- (id)retriveUserSessionBlobWithreturnedError:(id*)arg1;
- (id)retriveUserSessionSecureBlobWithreturnedError:(id*)arg1;
- (bool)setUserSessionDeviceConfigurations:(int)arg1 WithReturnedError:(id*)arg2;
- (bool)setUserSessionSecureBackupBlob:(id)arg1 WithReturnedError:(id*)arg2;
- (id)setuserSessionAttributes:(id)arg1 WithReturnedError:(id*)arg2;
- (int)startBackupSession;
- (bool)startUserSyncBubbleToSession:(int)arg1 WithReturnedError:(id*)arg2;
- (int)stashCommit;
- (int)stashCreateWithSecret:(id)arg1 withMode:(int)arg2;
- (int)stashDestroy;
- (id)stashLoad;
- (int)stashVerifywithValidity:(int*)arg1;
- (int)stopBackupSession;
- (bool)stopUserSyncBubbleToSession:(int)arg1 WithReturnedError:(id*)arg2;
- (id)switchBlockTasksInfoWithReturnedError:(id*)arg1;
- (bool)switchToLoginUIWithReturnedError:(id*)arg1;
- (bool)switchUserSession:(id)arg1 withOpaqueData:(id)arg2 withreturnedError:(id*)arg3;
- (bool)unloadUserSession:(id)arg1 withreturnedError:(id*)arg2;
- (bool)unmountUserSessionVolumeforID:(int)arg1 WithReturnedError:(id*)arg2;
- (id)userSessionAttributesForSession:(id)arg1 WithReturnedError:(id*)arg2;
- (id)userSessionLRUInfoWithReturnedError:(id*)arg1;

@end
