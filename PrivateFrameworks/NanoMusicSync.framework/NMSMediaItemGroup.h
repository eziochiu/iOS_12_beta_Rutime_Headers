/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSMediaItemGroup : NSObject {
    NSDictionary * _itemSizesDict;
    bool  _offPowerSyncAllowed;
    NMSMediaContainerQuotaData * _quotaData;
    id  _referenceObj;
    unsigned long long  _type;
}

@property (nonatomic, readonly) bool isEstimate;
@property (nonatomic, retain) NSDictionary *itemSizesDict;
@property (nonatomic) bool offPowerSyncAllowed;
@property (nonatomic, retain) NMSMediaContainerQuotaData *quotaData;
@property (nonatomic, retain) id referenceObj;
@property (nonatomic) unsigned long long type;

+ (id)_fetchSizeDictForItems:(id)arg1;
+ (id)_itemsForContainerClass:(Class)arg1 containerIDs:(id)arg2 includingNonLibraryContent:(bool)arg3 sizesDictOut:(id*)arg4;
+ (id)itemGroupWithLibraryHeavyRotationRecommendation:(id)arg1 albumID:(id)arg2;
+ (id)itemGroupWithLibraryHeavyRotationRecommendation:(id)arg1 playlistID:(id)arg2;
+ (id)itemGroupWithPersistentIDs:(id)arg1;
+ (id)itemGroupWithPodcastFeedURL:(id)arg1 downloadOrder:(unsigned long long)arg2;
+ (id)itemGroupWithQuotaRefObj:(id)arg1;
+ (id)itemGroupWithStoreRecommendation:(id)arg1;
+ (id)itemGroupWithSyncedAlbumID:(id)arg1;
+ (id)itemGroupWithSyncedPlaylistID:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithType:(unsigned long long)arg1 refObj:(id)arg2 offPowerSyncAllowed:(bool)arg3 quotaRefObj:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContainer:(id)arg1;
- (bool)isEstimate;
- (id)itemList;
- (id)itemSizesDict;
- (id)libraryIdentifiers;
- (id)libraryIdentifiersForContainerType:(unsigned long long)arg1;
- (bool)offPowerSyncAllowed;
- (id)quotaData;
- (id)referenceObj;
- (void)setItemSizesDict:(id)arg1;
- (void)setOffPowerSyncAllowed:(bool)arg1;
- (void)setQuotaData:(id)arg1;
- (void)setReferenceObj:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
