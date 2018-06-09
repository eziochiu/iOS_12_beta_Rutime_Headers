/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDSpotlightEventIndexerDataSource : NSObject {
    <_DKKnowledgeQuerying> * _knowledgeStore;
    _DKEventStream * _stream;
}

@property (nonatomic, readonly) <_DKKnowledgeQuerying> *knowledgeStore;
@property (nonatomic, readonly) _DKEventStream *stream;

- (void).cxx_destruct;
- (id)bundleIDToSearchableItemsDictionaryFromEvents:(id)arg1;
- (id)bundleIDToSearchableItemsDictionaryWithCreationDateInInterval:(id)arg1 limit:(long long)arg2 nextBatch:(bool*)arg3 latestCreationDate:(id*)arg4 error:(id*)arg5;
- (id)earliestEventCreationDateWithError:(id*)arg1;
- (id)initWithKnowledgeStore:(id)arg1 eventStream:(id)arg2;
- (id)knowledgeStore;
- (id)searchableItemIdentifiersForTombstonedEventsInInterval:(id)arg1 latestTombstoneDate:(id*)arg2 error:(id*)arg3;
- (id)searchableItemUniqueIdentifierForEventUUID:(id)arg1;
- (id)stream;

@end
