/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchShareParticipantKeyOperation : CKDDatabaseOperation {
    NSDictionary * _baseTokensByShareID;
    NSDictionary * _childRecordIDsByShareID;
    bool  _hasAttemptedShareUpdate;
    NSMutableArray * _shareIDs;
    id /* block */  _shareParticipantKeyFetchedBlock;
    NSMutableDictionary * _sharesNeedingUpdateByID;
}

@property (nonatomic, retain) NSDictionary *baseTokensByShareID;
@property (nonatomic, retain) NSDictionary *childRecordIDsByShareID;
@property (nonatomic) bool hasAttemptedShareUpdate;
@property (nonatomic, retain) NSMutableArray *shareIDs;
@property (nonatomic, copy) id /* block */ shareParticipantKeyFetchedBlock;
@property (nonatomic, retain) NSMutableDictionary *sharesNeedingUpdateByID;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleFetchedShare:(id)arg1 withID:(id)arg2 error:(id)arg3;
- (id)_participantKeyFromShare:(id)arg1 withError:(id*)arg2;
- (void)_performCallbackForShareID:(id)arg1 withParticipantKey:(id)arg2 error:(id)arg3;
- (void)_sendErrorForFailedShares;
- (id)activityCreate;
- (id)baseTokensByShareID;
- (id)childRecordIDsByShareID;
- (void)fetchSharesFromServer;
- (bool)hasAttemptedShareUpdate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (void)setBaseTokensByShareID:(id)arg1;
- (void)setChildRecordIDsByShareID:(id)arg1;
- (void)setHasAttemptedShareUpdate:(bool)arg1;
- (void)setShareIDs:(id)arg1;
- (void)setShareParticipantKeyFetchedBlock:(id /* block */)arg1;
- (void)setSharesNeedingUpdateByID:(id)arg1;
- (id)shareIDs;
- (id /* block */)shareParticipantKeyFetchedBlock;
- (id)sharesNeedingUpdateByID;
- (void)updateShares;

@end
