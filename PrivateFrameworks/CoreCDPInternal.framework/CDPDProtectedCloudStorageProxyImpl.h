/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDProtectedCloudStorageProxyImpl : NSObject <CDPDProtectedCloudStorageProxy>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_performPCSBlock:(id /* block */)arg1 error:(id*)arg2;
- (struct _PCSIdentitySetData { }*)pcsIdentityCreateWithInfo:(id)arg1 error:(id*)arg2;
- (bool)pcsIdentityMigrateToStingrayWithInfo:(id)arg1 error:(id*)arg2;
- (bool)pcsIdentityMigrateToiCDPWithInfo:(id)arg1 error:(id*)arg2;
- (bool)pcsIdentitySetCompanionInCircle:(struct _PCSIdentitySetData { }*)arg1 error:(id*)arg2;
- (bool)pcsIdentitySetIsInICDPLocal:(struct _PCSIdentitySetData { }*)arg1 error:(id*)arg2;
- (bool)pcsIdentitySetIsInICDPNetwork:(struct _PCSIdentitySetData { }*)arg1 options:(id)arg2 error:(id*)arg3;
- (struct _PCSIdentitySetData { }*)pcsIdentitySetupWithInfo:(id)arg1 error:(id*)arg2;
- (bool)pcsRestoreLocalBackup:(id)arg1 error:(id*)arg2;
- (bool)pcsSynchronizeKeysWithInfo:(id)arg1 error:(id*)arg2;

@end
