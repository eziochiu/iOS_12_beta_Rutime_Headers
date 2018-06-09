/* made by EzioChiu.
 */

@protocol IKDataSourceElementImplementing <NSObject>

@required

- (IKViewElement *)actualElementForProxyElement:(IKViewElement *)arg1;
- (void)applyUpdatesWithImplementation:(void *)arg1 usingUpdater:(void *)arg2; // needs 2 arg types, found 6: <IKDataSourceElementImplementing> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, IKDataSourceElement *, id /* block */, void*
- (void)configureUpdatesWithImplementation:(id <IKDataSourceElementImplementing>)arg1;
- (IKViewElement *)elementForItemAtIndex:(long long)arg1;
- (long long)indexOfItemForChildElement:(IKViewElement *)arg1;
- (void)initializeWithElementFactory:(IKViewElementFactory *)arg1;
- (IKElementChangeSet *)itemsChangeset;
- (void)loadIndex:(long long)arg1;
- (long long)numberOfItems;
- (IKViewElement *)prototypeForItemAtIndex:(long long)arg1;
- (NSArray *)prototypes;
- (void)resetUpdates;
- (void)teardown;
- (void)unloadIndex:(long long)arg1;
- (void)updateStylesUsingUpdater:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
