/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicCompleteOfferEntityProvider : MusicInterleavedEntityProvider {
    unsigned long long  _completionOfferingRevisionID;
    bool  _hasValidCompletionOffering;
    unsigned long long  _loadedCompletionOfferingRevisionID;
    <MusicEntityProviding> * _localEntityProvider;
    NSOperationQueue * _operationQueue;
    bool  _shouldIncludeStoreCompleteOffer;
    bool  _storeCompleteOfferAvailable;
    <MusicEntityProviding> * _storeEntityProvider;
}

@property (nonatomic, retain) <MusicEntityProviding> *localEntityProvider;
@property (nonatomic) bool shouldIncludeStoreCompleteOffer;
@property (getter=isStoreCompleteOfferAvailable, nonatomic, readonly) bool storeCompleteOfferAvailable;

- (void).cxx_destruct;
- (void)_entityProviderDidInvalidateNotification:(id)arg1;
- (void)_localEntityProviderDidInvalidateNotification:(id)arg1;
- (void)_reloadCompleteOffering;
- (void)_subscriptionStatusDidChangeNotification:(id)arg1;
- (void)_updateEntityProviders;
- (void)_updateStoreCompleteOfferAvailable;
- (void)dealloc;
- (bool)hasMultipleEntitiesIncludingStoreContent;
- (id)init;
- (bool)isStoreCompleteOfferAvailable;
- (id)localEntityProvider;
- (void)setLocalEntityProvider:(id)arg1;
- (void)setShouldIncludeStoreCompleteOffer:(bool)arg1;
- (bool)shouldIncludeStoreCompleteOffer;

@end
