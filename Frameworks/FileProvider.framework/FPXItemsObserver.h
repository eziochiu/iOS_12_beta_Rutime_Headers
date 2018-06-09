/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPXItemsObserver : FPXObserver <NSFileProviderEnumerationObserver> {
    id /* block */  _finishedBlock;
    NSMutableArray * _items;
    NSData * _syncAnchor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ finishedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) NSData *syncAnchor;

- (void).cxx_destruct;
- (void)didEnumerateItems:(id)arg1;
- (void)finishEnumeratingUpToPage:(id)arg1;
- (void)finishEnumeratingWithError:(id)arg1;
- (id /* block */)finishedBlock;
- (id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2;
- (void)setFinishedBlock:(id /* block */)arg1;
- (void)setSyncAnchor:(id)arg1;
- (id)syncAnchor;

@end
