/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchShareParticipantsOperation : CKOperation {
    NSMutableSet * _discoveredUserIdentities;
    id /* block */  _fetchShareParticipantsCompletionBlock;
    NSMutableDictionary * _lookupErrors;
    id /* block */  _shareParticipantFetchedBlock;
    NSArray * _userIdentityLookupInfos;
}

@property (nonatomic, retain) NSMutableSet *discoveredUserIdentities;
@property (nonatomic, copy) id /* block */ fetchShareParticipantsCompletionBlock;
@property (nonatomic, retain) NSMutableDictionary *lookupErrors;
@property (nonatomic, copy) id /* block */ shareParticipantFetchedBlock;
@property (nonatomic, copy) NSArray *userIdentityLookupInfos;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (id)discoveredUserIdentities;
- (id /* block */)fetchShareParticipantsCompletionBlock;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithUserIdentityLookupInfos:(id)arg1;
- (id)lookupErrors;
- (void)performCKOperation;
- (void)setDiscoveredUserIdentities:(id)arg1;
- (void)setFetchShareParticipantsCompletionBlock:(id /* block */)arg1;
- (void)setLookupErrors:(id)arg1;
- (void)setShareParticipantFetchedBlock:(id /* block */)arg1;
- (void)setUserIdentityLookupInfos:(id)arg1;
- (id /* block */)shareParticipantFetchedBlock;
- (id)userIdentityLookupInfos;

@end
