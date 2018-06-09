/* made by EzioChiu.
 */

@protocol REElementDataSourceDelegate <NSObject>

@required

- (void)addElements:(NSArray *)arg1 toSectionWithIdentifier:(NSString *)arg2;
- (void)dataBecameAvailable;
- (NSObject<OS_dispatch_queue> *)elementOperationQueue;
- (void)fetchElementWithIdentifierVisible:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)hasElementWithId:(NSString *)arg1 inSectionWithIdentifier:(NSString *)arg2;
- (void)invalidateElements;
- (void)refreshElement:(REElement *)arg1;
- (void)reloadElement:(REElement *)arg1;
- (void)removeElementsWithIds:(NSArray *)arg1;

@optional

- (void)addElements:(NSArray *)arg1 toSection:(unsigned long long)arg2;
- (bool)hasElementWithId:(NSString *)arg1 inSection:(unsigned long long)arg2;
- (void)removeElements:(NSArray *)arg1 fromSection:(unsigned long long)arg2;

@end
