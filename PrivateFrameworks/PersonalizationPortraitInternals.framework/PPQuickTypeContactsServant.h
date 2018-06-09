/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPQuickTypeContactsServant : NSObject <PPQuickTypeServantProtocol> {
    NSCache * _cachedNameLookups;
    bool  _consultScorerForImmediateResult;
    PPContactScorer * _contactScorer;
    <SGSuggestionsServiceContactsProtocol> * _contactService;
    NSObject<OS_dispatch_semaphore> * _initializationComplete;
    PPContact * _meContact;
    NSCache * _meQuickTypeItemCache;
    NSArray * _peopleKeysToFetch;
    CNContactStore * _store;
}

+ (id)_supportedPeopleSemanticTypes;

- (void).cxx_destruct;
- (id)_applySmartLimitingToCandidates:(id)arg1 clientLimit:(unsigned long long)arg2 explanationSet:(id)arg3;
- (bool)_isMeCardQuery:(id)arg1;
- (bool)_isSemanticTagEligible:(unsigned char)arg1;
- (id)_lookupPeopleWithNamePrefix:(id)arg1 recipients:(id)arg2 explanationSet:(id)arg3;
- (id)_lookupPeopleWithNamePrefixUncached:(id)arg1 recipients:(id)arg2 explanationSet:(id)arg3;
- (id)_lookupScoredPeopleWithNamePrefix:(id)arg1 recipients:(id)arg2 explanationSet:(id)arg3;
- (id)_mePredictionCacheKeyForQuery:(id)arg1;
- (id)_predictMeCardDetailForQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3;
- (id)_predictMeCardDetailForQuery:(id)arg1 limit:(unsigned long long)arg2 fromSemanticTextField:(bool)arg3 explanationSet:(id)arg4;
- (id)_predictionForPeopleQuery:(id)arg1 fromEligibleSemanticTextField:(bool)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4;
- (void)_preloadContacts;
- (void)_registerForNotifications;
- (id)_selfContactQueryqueryFromSemanticTagquery:(id)arg1;
- (void)_warmUpFormatters;
- (void)clearCaches;
- (id)init;
- (id)initWithOptions:(unsigned char)arg1;
- (id)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3;
- (void)setCachedNameLookup:(id)arg1;
- (void)setContactScorer:(id)arg1;
- (void)setContactService:(id)arg1;
- (void)setStore:(id)arg1;

@end
