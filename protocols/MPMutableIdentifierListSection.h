/* made by EzioChiu.
 */

@protocol MPMutableIdentifierListSection <NSObject>

@required

- (void)applyChanges:(void *)arg1 itemLookupBlock:(void *)arg2; // needs 2 arg types, found 7: MPChangeDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSString *, id /* block */, long long, void*
- (void)insertItems:(NSArray *)arg1 afterItem:(NSString *)arg2;
- (void)insertItemsAtHead:(NSArray *)arg1;
- (void)insertItemsAtTail:(NSArray *)arg1;
- (NSArray *)itemIdentifiers;
- (void)moveItem:(NSString *)arg1 afterItem:(NSString *)arg2;
- (void)moveItemToHead:(NSString *)arg1;
- (void)moveItemToTail:(NSString *)arg1;
- (void)removeItem:(NSString *)arg1;
- (void)updateItem:(NSString *)arg1;

@end
