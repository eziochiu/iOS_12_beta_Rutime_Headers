/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKLRUCache : NSObject {
    unsigned long long  _currentCost;
    PKLRUCacheItem * _firstItem;
    long long  _freeItemCount;
    PKLRUCacheItem * _freeItems;
    NSMapTable * _itemTable;
    PKLRUCacheItem * _lastItem;
    unsigned long long  _totalCostLimit;
}

@property (nonatomic, readonly, copy) NSArray *allObjects;
@property (nonatomic) long long freeItemCount;
@property (nonatomic) unsigned long long totalCostLimit;

- (void).cxx_destruct;
- (void)_addItem:(id)arg1;
- (void)_removeItem:(id)arg1;
- (id)allObjects;
- (void)dealloc;
- (long long)freeItemCount;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setFreeItemCount:(long long)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)setTotalCostLimit:(unsigned long long)arg1;
- (unsigned long long)totalCostLimit;

@end
