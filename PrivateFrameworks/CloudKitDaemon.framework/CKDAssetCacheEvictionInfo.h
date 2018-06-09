/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAssetCacheEvictionInfo : NSObject {
    NSMutableOrderedSet * _assetHandleItemIDsToDelete;
    bool  _clearRegisteredItems;
    CKDClientContext * _clientContext;
    bool  _evictNow;
    bool  _forced;
    NSMutableOrderedSet * _itemIDsToUnregister;
}

@property (nonatomic, retain) NSMutableOrderedSet *assetHandleItemIDsToDelete;
@property bool clearRegisteredItems;
@property (nonatomic, retain) CKDClientContext *clientContext;
@property bool evictNow;
@property bool forced;
@property (nonatomic, retain) NSMutableOrderedSet *itemIDsToUnregister;

- (void).cxx_destruct;
- (id)assetHandleItemIDsToDelete;
- (bool)clearRegisteredItems;
- (id)clientContext;
- (bool)evictNow;
- (bool)forced;
- (id)initWithClientContext:(id)arg1 forced:(bool)arg2 evictNow:(bool)arg3;
- (id)itemIDsToUnregister;
- (void)setAssetHandleItemIDsToDelete:(id)arg1;
- (void)setClearRegisteredItems:(bool)arg1;
- (void)setClientContext:(id)arg1;
- (void)setEvictNow:(bool)arg1;
- (void)setForced:(bool)arg1;
- (void)setItemIDsToUnregister:(id)arg1;

@end
