/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ICIndexItemsOperation : NSOperation {
    NSArray * _dataSources;
    NSError * _error;
    unsigned long long  _maxBytesPerBatch;
    CSSearchableIndex * _searchableIndex;
}

@property (nonatomic, copy) NSArray *dataSources;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) unsigned long long maxBytesPerBatch;
@property (nonatomic, retain) CSSearchableIndex *searchableIndex;

- (void).cxx_destruct;
- (id)dataSources;
- (void)deleteAllItems;
- (void)deleteItems;
- (id)error;
- (void)indexItems;
- (id)init;
- (id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2;
- (void)main;
- (unsigned long long)maxBytesPerBatch;
- (id)objectIDsToIndexFromDataSource:(id)arg1;
- (id)searchableIndex;
- (id)searchableItemIdentifiersToDeleteFromDataSource:(id)arg1;
- (void)setDataSources:(id)arg1;
- (void)setError:(id)arg1;
- (void)setMaxBytesPerBatch:(unsigned long long)arg1;
- (void)setSearchableIndex:(id)arg1;
- (bool)shouldDeleteAllItemsBeforeIndexing;

@end
