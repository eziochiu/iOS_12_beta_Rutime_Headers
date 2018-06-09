/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCQueryObservation : NSObject <DOCItemQueryObserver> {
    DOCSpotlightCollection * _collection;
    unsigned long long  _maximumNumberOfItems;
    NSFileProviderEnumerationProperties * _properties;
}

@property DOCSpotlightCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maximumNumberOfItems;
@property (retain) NSFileProviderEnumerationProperties *properties;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collection;
- (bool)collector:(id)arg1 canRemoveItemIDs:(id)arg2;
- (void)collector:(id)arg1 didEncounterError:(id)arg2;
- (void)collector:(id)arg1 didGatherItems:(id)arg2;
- (void)collector:(id)arg1 didRemoveItemIDs:(id)arg2;
- (void)collector:(id)arg1 didUpdateItemOrigin:(unsigned long long)arg2;
- (void)collector:(id)arg1 didUpdateItems:(id)arg2;
- (bool)collector:(id)arg1 itemIsSufficient:(id)arg2;
- (id)description;
- (id)initWithProperties:(id)arg1 collection:(id)arg2 maximumNumberOfItems:(unsigned long long)arg3;
- (id)itemPredicateForCollector:(id)arg1;
- (unsigned long long)maximumNumberOfItems;
- (unsigned long long)maximumNumberOfItemsForCollector:(id)arg1;
- (id)properties;
- (void)setCollection:(id)arg1;
- (void)setMaximumNumberOfItems:(unsigned long long)arg1;
- (void)setProperties:(id)arg1;

@end
