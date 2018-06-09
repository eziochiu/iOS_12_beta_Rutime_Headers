/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyShareHandler : CKDModifyRecordHandler {
    bool  _haveAddedOwnerToShare;
    bool  _isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;
    CKDModifyShareTokenURLRequest * _request;
}

@property (nonatomic) bool haveAddedOwnerToShare;
@property (nonatomic) bool isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;
@property (nonatomic, retain) CKDModifyShareTokenURLRequest *request;
@property (nonatomic, readonly) CKShare *share;
@property (nonatomic, readonly) CKRecordID *shareID;

+ (id)modifyHandlerForDeleteWithShareID:(id)arg1 operation:(id)arg2;
+ (id)modifyHandlerWithShare:(id)arg1 operation:(id)arg2;

- (void).cxx_destruct;
- (void)_addPublicKeyToSelfParticipant;
- (void)_alignParticipantPermissions;
- (bool)_cleanPublicPCSforShareWithError:(id*)arg1;
- (id)_createNewSharePCSDataWithError:(id*)arg1;
- (bool)_decryptSharePCSData;
- (id)_ensurePrivateParticipant:(id)arg1 isInInvitedSharePCS:(struct _OpaquePCSShareProtection { }*)arg2;
- (void)_fetchRootRecordPublicSharingIdentityWithCompletionHandler:(id /* block */)arg1;
- (void)_fetchSharePCSData;
- (void)_handleSharePCSData:(id)arg1 withError:(id)arg2;
- (id)_publicKeyForParticipant:(id)arg1 error:(id*)arg2;
- (id)_removePrivateParticipant:(id)arg1 fromInvitedSharePCS:(struct _OpaquePCSShareProtection { }*)arg2;
- (bool)_removePrivateParticipantsFromInvitedPCS:(struct _OpaquePCSShareProtection { }*)arg1 error:(id*)arg2;
- (id)_removePublicKey:(id)arg1 fromInvitedPCS:(struct _OpaquePCSShareProtection { }*)arg2;
- (bool)_serializePCSDataForShareWithError:(id*)arg1;
- (void)_setupParticipantsProtectionInfos;
- (bool)_updateSharePublicPCSWithError:(id*)arg1;
- (void)clearProtectionDataForRecord;
- (void)fetchSharePCSData;
- (bool)haveAddedOwnerToShare;
- (bool)isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;
- (bool)isCloudDocsContainer;
- (bool)isShare;
- (void)noteSideEffectRecordAbsent:(id)arg1;
- (void)noteSideEffectRecordPendingDelete:(id)arg1;
- (void)noteSideEffectRecordPendingModify:(id)arg1;
- (void)prepareForSave;
- (id)request;
- (void)savePCSDataToCache;
- (unsigned long long)serviceType;
- (void)setHaveAddedOwnerToShare:(bool)arg1;
- (void)setIsALegacyPublicShareThatNeedsOwnerPPPCSUpgrade:(bool)arg1;
- (void)setRequest:(id)arg1;
- (void)setServerRecord:(id)arg1;
- (id)share;
- (id)shareID;
- (id)sideEffectRecordIDs;
- (void)updateParticipantsForFetchedShare:(id)arg1 error:(id)arg2;

@end
