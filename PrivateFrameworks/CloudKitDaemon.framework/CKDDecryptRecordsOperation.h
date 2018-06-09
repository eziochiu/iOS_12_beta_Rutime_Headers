/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDDecryptRecordsOperation : CKDDatabaseOperation {
    bool  _forcePCSDecrypt;
    bool  _markedToFinish;
    unsigned long long  _maxUnwrapAttempts;
    NSMutableArray * _outstandingDecryptions;
    NSObject<OS_dispatch_group> * _recordDecryptGroup;
    NSObject<OS_dispatch_queue> * _recordDecryptQueue;
    bool  _started;
    NSDictionary * _webSharingIdentityDataByRecordID;
}

@property (nonatomic) bool forcePCSDecrypt;
@property (getter=isMarkedToFinish) bool markedToFinish;
@property (nonatomic) unsigned long long maxUnwrapAttempts;
@property (nonatomic, retain) NSMutableArray *outstandingDecryptions;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *recordDecryptGroup;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *recordDecryptQueue;
@property (getter=isStarted) bool started;
@property (nonatomic, retain) NSDictionary *webSharingIdentityDataByRecordID;

- (void).cxx_destruct;
- (void)_clearProtectionDataForRecordInfo:(id)arg1;
- (void)_decryptRecordInfo:(id)arg1;
- (void)_decryptRecordInfo:(id)arg1 usingWebSharingIdentityData:(id)arg2;
- (void)_decryptRecordInfo:(id)arg1 usingZonePCS:(id)arg2;
- (id)_decryptRecordPCSForRecord:(id)arg1 usingChainPCS:(id)arg2;
- (id)_decryptRecordPCSForRecord:(id)arg1 usingSharePCS:(id)arg2;
- (void)_finishDecryptOperation;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProtectionDataForRecordInfo:(id)arg1;
- (void)_handleShareProtectionDataForRecordInfo:(id)arg1;
- (void)_handleZoneProtectionDataForRecordInfo:(id)arg1;
- (id)_possiblyWrapError:(id)arg1 forRecordWithID:(id)arg2 withCode:(long long)arg3 format:(id)arg4;
- (void)_recordInfoWasDecrypted:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)_unwrapAssetKeyForAsset:(id)arg1 inRecordWithID:(id)arg2 forField:(id)arg3 withPCS:(struct _OpaquePCSShareProtection { }*)arg4;
- (id)_unwrapEncryptedPropertiesForRecordValueStore:(id)arg1 withPCS:(struct _OpaquePCSShareProtection { }*)arg2;
- (id)_unwrapEncryptedPropertiesOnRecord:(id)arg1 withPCS:(struct _OpaquePCSShareProtection { }*)arg2;
- (id)_unwrapPackageAssets:(id)arg1 inRecordWithID:(id)arg2 forField:(id)arg3 withPCS:(struct _OpaquePCSShareProtection { }*)arg4;
- (id)activityCreate;
- (void)decryptRecord:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)finishDecryption;
- (bool)forcePCSDecrypt;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (bool)isMarkedToFinish;
- (bool)isStarted;
- (void)main;
- (unsigned long long)maxUnwrapAttempts;
- (bool)operationShouldBeFlowControlled;
- (id)outstandingDecryptions;
- (id)recordDecryptGroup;
- (id)recordDecryptQueue;
- (void)setForcePCSDecrypt:(bool)arg1;
- (void)setMarkedToFinish:(bool)arg1;
- (void)setMaxUnwrapAttempts:(unsigned long long)arg1;
- (void)setOutstandingDecryptions:(id)arg1;
- (void)setRecordDecryptGroup:(id)arg1;
- (void)setRecordDecryptQueue:(id)arg1;
- (void)setStarted:(bool)arg1;
- (void)setWebSharingIdentityDataByRecordID:(id)arg1;
- (bool)shouldCheckAppVersion;
- (id)webSharingIdentityDataByRecordID;

@end
