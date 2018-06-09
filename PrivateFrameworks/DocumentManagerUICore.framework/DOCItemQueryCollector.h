/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCItemQueryCollector : NSObject {
    bool  _gathering;
    unsigned long long  _itemOrigin;
    DOCItemQueryDescriptor * _itemQueryDescriptor;
    NSMutableDictionary * _itemsByBundleAndID;
    NSDate * _lastStartOfRecovery;
    unsigned long long  _numberOfRecoveryAttempts;
    NSMutableSet * _observers;
    NSObject<OS_dispatch_queue> * _processingQueue;
    CSSearchQuery * _query;
    NSObject<OS_dispatch_queue> * _queryingQueue;
}

@property (getter=isGathering, nonatomic) bool gathering;
@property (nonatomic) unsigned long long itemOrigin;
@property (nonatomic, retain) DOCItemQueryDescriptor *itemQueryDescriptor;
@property (nonatomic, retain) NSMutableSet *observers;
@property (nonatomic, retain) CSSearchQuery *query;

+ (id)processingQueue;
+ (id)queryingQueue;

- (void).cxx_destruct;
- (void)_cleanUp;
- (void)_commonInit;
- (id)_filterItems:(id)arg1 forObserver:(id)arg2 excludedItemIDs:(id*)arg3;
- (unsigned long long)_itemOriginForItems:(id)arg1;
- (void)_start;
- (void)_stop;
- (void)addObserver:(id)arg1;
- (id)allItems;
- (id)allItemsForObserver:(id)arg1;
- (id)description;
- (id)filteredItemsForObserver:(id)arg1 fromItems:(id)arg2;
- (id)init;
- (bool)isGathering;
- (bool)isQueryCancelled:(id)arg1;
- (unsigned long long)itemOrigin;
- (id)itemQueryDescriptor;
- (id)itemsByBundleAndID;
- (id)observers;
- (id)query;
- (void)query:(id)arg1 didFinishWithError:(id)arg2;
- (void)query:(id)arg1 didRemoveIdentifiers:(id)arg2 inBundle:(id)arg3;
- (void)query:(id)arg1 didUpdateItems:(id)arg2;
- (void)queryDidFinishGathering:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setGathering:(bool)arg1;
- (void)setItemOrigin:(unsigned long long)arg1;
- (void)setItemQueryDescriptor:(id)arg1;
- (void)setNeedsItemOriginUpdateForObservers:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setQuery:(id)arg1;
- (bool)shouldFilterUpdatesForObserver:(id)arg1;
- (void)start;
- (void)stop;

@end
