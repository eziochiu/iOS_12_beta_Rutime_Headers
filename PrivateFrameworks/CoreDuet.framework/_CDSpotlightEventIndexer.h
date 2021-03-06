/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDSpotlightEventIndexer : NSObject {
    _CDEventIndexerContext * _context;
    _CDSpotlightEventIndexerDataSource * _dataSource;
    CSSearchableIndex * _index;
}

@property (nonatomic, retain) _CDEventIndexerContext *context;
@property (nonatomic, readonly) _CDSpotlightEventIndexerDataSource *dataSource;
@property (nonatomic, readonly) CSSearchableIndex *index;
@property (getter=isIndexing, nonatomic, readonly) bool indexing;

+ (id)keyPathsForValuesAffectingIndexing;

- (void).cxx_destruct;
- (void)_beginIndexingFromLatestSpotlightClientState;
- (void)beginIndexingWithBatchSize:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)context;
- (id)dataSource;
- (void)finishIndexing;
- (id)index;
- (void)indexAdditionsAsBatch;
- (void)indexDeletionsAsBatch;
- (id)initWithDataSource:(id)arg1;
- (bool)isIndexing;
- (void)setContext:(id)arg1;

@end
