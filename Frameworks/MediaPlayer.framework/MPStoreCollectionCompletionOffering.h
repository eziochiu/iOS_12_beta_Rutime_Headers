/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreCollectionCompletionOffering : NSObject {
    MPMediaQuery * _localItemsQuery;
    MPStoreOfferMediaItemCollection * _mergedCollection;
    MPStoreOfferMediaItemCollection * _offeredCollection;
    long long  _preferredStoreOfferVariant;
}

@property (nonatomic, readonly) MPStoreOfferMediaItemCollection *itemsWithCompletionsCollection;
@property (nonatomic, readonly) NSArray *localItems;
@property (nonatomic, readonly) MPStoreOfferMediaItemCollection *mergedCollection;
@property (nonatomic, readonly) MPStoreOfferMediaItemCollection *offeredCollection;
@property (nonatomic, readonly) long long preferredStoreOfferVariant;

- (void).cxx_destruct;
- (id)initWithOfferedCollection:(id)arg1 localItemsQuery:(id)arg2 preferredStoreOfferVariant:(long long)arg3;
- (id)itemsWithCompletionsCollection;
- (id)localItems;
- (id)mergedCollection;
- (id)offeredCollection;
- (long long)preferredStoreOfferVariant;

@end
