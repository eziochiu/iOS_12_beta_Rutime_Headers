/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFHeuristicsMailboxPredictor : NSObject <MFMailboxPredictor> {
    NSMutableString * _debugLog;
    <MFQueryableLibraryAdapter> * _library;
    NSCache * _mailboxIDCache;
    NSDictionary * _parameters;
    <MFUserProfileProvider> * _userProfileProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableString *debugLog;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MFQueryableLibraryAdapter> *library;
@property (nonatomic, retain) NSCache *mailboxIDCache;
@property (nonatomic, retain) NSDictionary *parameters;
@property (readonly) Class superclass;
@property (nonatomic, retain) <MFUserProfileProvider> *userProfileProvider;

- (id)_allowedRecipientsForMessage:(id)arg1;
- (id)_conversationIDCountsForMessage:(id)arg1;
- (id)_countsForField:(id)arg1 message:(id)arg2;
- (bool)_isAllowedRecipient:(id)arg1;
- (bool)_limitToRecents;
- (id)_listIDCountsForMessage:(id)arg1;
- (id)_mergeDefaultParameters:(id)arg1 withParameters:(id)arg2;
- (bool)_modeParameterIs:(id)arg1;
- (id)_normalizedTermFrequencyTopHitFromDictionary:(id)arg1 withThreshold:(double)arg2;
- (id)_objectWithMeasure:(double)arg1 timesHigherThanFollowUpInMeasures:(id)arg2;
- (id)_orderedModePredictionForMessage:(id)arg1;
- (id)_predictionsForMessage:(id)arg1 limit:(unsigned long long)arg2;
- (id)_recipientCountsForMessage:(id)arg1;
- (id)_removeSpecialMailboxesInCounts:(id)arg1 message:(id)arg2;
- (id)_senderCountsForMessage:(id)arg1;
- (id)_summedWeightedPredictionsForMessage:(id)arg1 limit:(unsigned long long)arg2;
- (id)_topHitFromMailboxDictionary:(id)arg1;
- (id)_topHitFromMailboxDictionary:(id)arg1 message:(id)arg2;
- (id)_userCreatedMailboxIDs;
- (id)_weightedModePredictionsForMessage:(id)arg1;
- (void)dealloc;
- (id)debugLog;
- (id)initWithUserProfileProvider:(id)arg1 libraryAdapter:(id)arg2;
- (id)initWithUserProfileProvider:(id)arg1 libraryAdapter:(id)arg2 parameters:(id)arg3;
- (id)library;
- (id)mailboxIDCache;
- (id)parameters;
- (id)predictMailboxIDsForMessages:(id)arg1 limit:(unsigned long long)arg2 diagnostics:(id*)arg3;
- (void)setDebugLog:(id)arg1;
- (void)setLibrary:(id)arg1;
- (void)setMailboxIDCache:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setUserProfileProvider:(id)arg1;
- (id)userProfileProvider;

@end
