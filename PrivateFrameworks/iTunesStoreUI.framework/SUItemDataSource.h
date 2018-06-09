/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUItemDataSource : NSObject

+ (void)setSharedDataSource:(id)arg1;
+ (id)sharedDataSource;

- (id)_newDownloadForDocumentItem:(id)arg1 storeOffer:(id)arg2;
- (id)_newDownloadForPodcastEpisode:(id)arg1 storeOffer:(id)arg2;
- (id)_newDownloadMetadataForPodcastEpisode:(id)arg1 storeOffer:(id)arg2;
- (id)_newTonePurchaseWithPurchase:(id)arg1;
- (id)_thumbnailImageForItem:(id)arg1;
- (long long)estimatedDiskSpaceNeededForItem:(id)arg1 storeOffer:(id)arg2;
- (long long)itemTypeForItem:(id)arg1;
- (long long)itemTypeForTypeString:(id)arg1;
- (id)newDisplayItemValidationTestsForItem:(id)arg1;
- (id)newExternalDownloadWithItem:(id)arg1 storeOffer:(id)arg2;
- (id)newItemWithItemDictionary:(id)arg1;
- (id)newPurchaseWithItem:(id)arg1 storeOffer:(id)arg2;
- (id)typeStringForItemType:(long long)arg1;

@end
