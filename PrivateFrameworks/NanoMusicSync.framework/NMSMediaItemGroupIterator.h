/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSMediaItemGroupIterator : NSObject {
    unsigned long long  _currentContainerIndex;
    unsigned long long  _currentItemIndex;
    NSMutableArray * _indexesToBeRemoved;
    NSArray * _itemGroups;
    NSMutableDictionary * _itemSizesDict;
    NSMutableOrderedSet * _mutableItemListWithinQuota;
    NSMutableOrderedSet * _mutableOffPowerItemListWithinQuota;
    unsigned long long  _nominatedItemSize;
    NSMutableArray * _remainingContainers;
    NSMutableArray * _remainingItemLists;
    unsigned long long  _sizeForItemListWithinQuota;
    unsigned long long  _sizeForOffPowerItemListWithinQuota;
}

@property (nonatomic) unsigned long long currentContainerIndex;
@property (nonatomic) unsigned long long currentItemIndex;
@property (nonatomic, retain) NSMutableArray *indexesToBeRemoved;
@property (nonatomic, retain) NSArray *itemGroups;
@property (nonatomic, readonly) NSArray *itemListWithinQuota;
@property (nonatomic, retain) NSMutableDictionary *itemSizesDict;
@property (nonatomic, readonly) unsigned long long iteratingOrder;
@property (nonatomic, retain) NSMutableOrderedSet *mutableItemListWithinQuota;
@property (nonatomic, retain) NSMutableOrderedSet *mutableOffPowerItemListWithinQuota;
@property (nonatomic, readonly) unsigned long long nominatedItemSize;
@property (nonatomic, readonly) NSArray *offPowerItemListWithinQuota;
@property (nonatomic, retain) NSMutableArray *remainingContainers;
@property (nonatomic, retain) NSMutableArray *remainingItemLists;
@property (nonatomic, readonly) unsigned long long sizeForItemListWithinQuota;
@property (nonatomic, readonly) unsigned long long sizeForOffPowerItemListWithinQuota;

- (void).cxx_destruct;
- (void)_continueToNextIdentifier;
- (void)_generateItemListAndSizesDictIfNecessary;
- (void)_markToBeRemoved;
- (void)addCurrentIdentifierToWithinQuotaList;
- (unsigned long long)currentContainerIndex;
- (id)currentIdentifier;
- (unsigned long long)currentItemIndex;
- (id)identifiersForContainersOfType:(unsigned long long)arg1;
- (id)indexesToBeRemoved;
- (id)initWithItemGroups:(id)arg1;
- (bool)isCurrentIdentifierEstimate;
- (bool)isCurrentItemDownloadableOffPower;
- (id)itemGroupForIdentifiers:(id)arg1;
- (id)itemGroups;
- (id)itemListWithinQuota;
- (id)itemSizeForCurrentIdentifier;
- (id)itemSizesDict;
- (unsigned long long)iteratingOrder;
- (id)mediaContainersAboveQuota;
- (id)mutableItemListWithinQuota;
- (id)mutableOffPowerItemListWithinQuota;
- (unsigned long long)nominatedItemSize;
- (id)offPowerItemListWithinQuota;
- (id)remainingContainers;
- (id)remainingItemLists;
- (void)removeCurrentIdentifier;
- (void)resetToIterateOverQuotaIdentifiers;
- (void)setCurrentContainerIndex:(unsigned long long)arg1;
- (void)setCurrentItemIndex:(unsigned long long)arg1;
- (void)setIndexesToBeRemoved:(id)arg1;
- (void)setItemGroups:(id)arg1;
- (void)setItemSizesDict:(id)arg1;
- (void)setMutableItemListWithinQuota:(id)arg1;
- (void)setMutableOffPowerItemListWithinQuota:(id)arg1;
- (void)setRemainingContainers:(id)arg1;
- (void)setRemainingItemLists:(id)arg1;
- (unsigned long long)sizeForItemListWithinQuota;
- (unsigned long long)sizeForOffPowerItemListWithinQuota;
- (void)skipCurrentIdentifier;

@end
