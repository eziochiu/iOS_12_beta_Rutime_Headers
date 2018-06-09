/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAcceptSharesOperation : CKDDatabaseOperation {
    id /* block */  _acceptCompletionBlock;
    NSMutableArray * _acceptedShareURLsToFetch;
    NSMutableDictionary * _clientProvidedMetadatasByURL;
    unsigned long long  _numShareAcceptAttempts;
    NSMutableDictionary * _shareMetadatasToAcceptByURL;
    NSMutableArray * _shareURLsToAccept;
}

@property (nonatomic, copy) id /* block */ acceptCompletionBlock;
@property (nonatomic, retain) NSMutableArray *acceptedShareURLsToFetch;
@property (nonatomic, retain) NSMutableDictionary *clientProvidedMetadatasByURL;
@property (nonatomic) unsigned long long numShareAcceptAttempts;
@property (nonatomic, retain) NSMutableDictionary *shareMetadatasToAcceptByURL;
@property (nonatomic, retain) NSMutableArray *shareURLsToAccept;

- (void).cxx_destruct;
- (bool)_acceptShares;
- (id)_addSelfIdentityToShareMetadataPublicPCS:(id)arg1 forShareWithURL:(id)arg2 error:(id*)arg3;
- (bool)_callingParticipantOONForShareMetadata:(id)arg1;
- (void)_decryptShareMetadata;
- (void)_fetchAcceptedShares;
- (void)_fetchMetadataForShares;
- (bool)_fillInPublicKeyIntoAcceptMetadata:(id)arg1 serviceType:(unsigned long long)arg2 keyVersion:(unsigned long long)arg3 error:(id*)arg4;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleShareURLAccepted:(id)arg1 forShare:(id)arg2 responseCode:(id)arg3;
- (id)_keySwapForOONParticipant:(id)arg1;
- (void)_performCallbackForURL:(id)arg1 withShare:(id)arg2 error:(id)arg3;
- (void)_prepareShareMetadata;
- (bool)_validateInvitedPCSCanBeDecryptedForShare:(id)arg1;
- (id /* block */)acceptCompletionBlock;
- (id)acceptedShareURLsToFetch;
- (id)activityCreate;
- (id)clientProvidedMetadatasByURL;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (unsigned long long)numShareAcceptAttempts;
- (void)setAcceptCompletionBlock:(id /* block */)arg1;
- (void)setAcceptedShareURLsToFetch:(id)arg1;
- (void)setClientProvidedMetadatasByURL:(id)arg1;
- (void)setNumShareAcceptAttempts:(unsigned long long)arg1;
- (void)setShareMetadatasToAcceptByURL:(id)arg1;
- (void)setShareURLsToAccept:(id)arg1;
- (id)shareMetadatasToAcceptByURL;
- (id)shareURLsToAccept;

@end
