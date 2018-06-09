/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ICReindexAllItemsOperation : ICIndexItemsOperation

- (void)main;
- (id)objectIDsToIndexFromDataSource:(id)arg1;
- (id)searchableItemIdentifiersToDeleteFromDataSource:(id)arg1;
- (bool)shouldDeleteAllItemsBeforeIndexing;

@end
