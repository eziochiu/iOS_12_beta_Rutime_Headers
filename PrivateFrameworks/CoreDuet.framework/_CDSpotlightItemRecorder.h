/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDSpotlightItemRecorder : NSObject <CSSearchableIndexObserver, SpotlightReceiver> {
    NSMutableDictionary * _activityPerBundleRateLimit;
    NSObject<OS_dispatch_queue> * _activityRateLimiterQueue;
    NSObject<OS_dispatch_source> * _batchExecutionSource;
    NSObject<OS_dispatch_queue> * _batchExecutionSourceQueue;
    <_DKKnowledgeSaving><_DKKnowledgeEventStreamDeleting> * _knowledgeStore;
    NSMutableArray * _pendingOperations;
    NSObject<OS_dispatch_queue> * _pendingOperationsQueue;
    NSObject<OS_os_transaction> * _pendingOperationsTransaction;
    _DKPrivacyPolicyEnforcer * _privacyEnforcer;
    _DKRateLimitPolicyEnforcer * _rateLimitEnforcer;
    <_CDInteractionRecording><_CDInteractionDeleting> * _recorder;
}

@property (nonatomic, readonly) bool canRecordInteractions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <_CDInteractionRecording><_CDInteractionDeleting> *recorder;
@property (readonly) Class superclass;

+ (void)recordAggdReceiverAction:(long long)arg1 bundleID:(id)arg2 count:(unsigned long long)arg3;
+ (id)spotlightItemRecorder;
+ (id)spotlightItemRecorderWithInteractionRecorder:(id)arg1;
+ (id)spotlightItemRecorderWithInteractionRecorder:(id)arg1 knowledgeSaving:(id)arg2;
+ (id)spotlightItemRecorderWithKnowledgeSaving:(id)arg1;

- (void).cxx_destruct;
- (void)_addOrUpdateCoreDuetInteractions:(id)arg1 bundleID:(id)arg2;
- (void)_deleteKnowledgeEventsMatchingPredicate:(id)arg1;
- (void)_deleteKnowledgeEventsWithBundleID:(id)arg1;
- (void)_enqueueOperation:(id)arg1;
- (void)addInteractions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)addInteractions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)addOrUpdateSearchableItems:(id)arg1;
- (void)addOrUpdateSearchableItems:(id)arg1 bundleID:(id)arg2;
- (void)addOrUpdateSearchableItems:(id)arg1 bundleID:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)addUserAction:(id)arg1 withItem:(id)arg2;
- (void)addUserAction:(id)arg1 withItem:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)canRecordInteractions;
- (void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2;
- (void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)deleteAllSearchableItemsWithBundleID:(id)arg1;
- (void)deleteAllSearchableItemsWithBundleID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)deleteKnowledgeEventsMatchingPredicate:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)deleteKnowledgeEventsWithBundleID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)deleteSearchableItemsSinceDate:(id)arg1 bundleID:(id)arg2;
- (void)deleteSearchableItemsSinceDate:(id)arg1 bundleID:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)donateRelevantShortcuts:(id)arg1 bundleID:(id)arg2;
- (id)initWithInteractionRecorder:(id)arg1;
- (id)initWithInteractionRecorder:(id)arg1 knowledgeSaving:(id)arg2;
- (id)initWithInteractionRecorder:(id)arg1 knowledgeSaving:(id)arg2 rateLimitEnforcer:(id)arg3;
- (id)recorder;
- (void)registerSpotlightRecorderWithServiceName:(id)arg1;
- (void)runOperation:(id)arg1;
- (void)saveRateLimitedEvents:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setRecorder:(id)arg1;
- (id)supportedContentTypes;
- (id)supportedINIntentClassNames;
- (id)supportedUTIs;

@end
