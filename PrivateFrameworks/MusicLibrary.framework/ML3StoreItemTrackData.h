/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3StoreItemTrackData : NSObject {
    NSArray * _lookupItems;
    NSArray * _parsedStoreItemsImportProperties;
    NSDateFormatter * _storePlatformDateFormatter;
    NSData * _trackData;
}

@property (nonatomic, readonly) NSArray *parsedStoreItemsImportProperties;
@property (nonatomic, readonly) unsigned long long trackCount;
@property (nonatomic, readonly) NSData *trackData;

- (void).cxx_destruct;
- (id)_allSongItemsFromCollectionLookupItem:(id)arg1;
- (id)_allSongItemsFromLookupItems:(id)arg1;
- (id)_artworkTokenForItemWithCollectionID:(long long)arg1 itemID:(long long)arg2;
- (id)_artworkTokenFromLookupItem:(id)arg1;
- (id)_bestAlbumArtworkImageURLFromStoreArtworkVariants:(id)arg1;
- (id)_bestArtworkImageURLFromStoreArtworkVariants:(id)arg1 cropStyle:(id)arg2;
- (id)_bestPlaylistArtworkImageURLFromStoreArtworkVariants:(id)arg1;
- (long long)_episodeTypeFromVideoSubTypeString:(id)arg1;
- (id)_importDictionaryForLookupItem:(id)arg1 parentCollectionCache:(id)arg2;
- (id)_lookupItemArtworksForArtworkDictionaries:(id)arg1;
- (id)_parentDictForItemAlbumId:(id)arg1;
- (bool)_platformMetadataItem:(id)arg1 matchesKind:(id)arg2;
- (bool)_platformMetadataItemIsAUCAudioKind:(id)arg1;
- (bool)_platformMetadataItemIsAUCKind:(id)arg1;
- (bool)_platformMetadataItemIsAUCVideoKind:(id)arg1;
- (bool)_platformMetadataItemIsMovieKind:(id)arg1;
- (bool)_platformMetadataItemIsMusicKind:(id)arg1;
- (bool)_platformMetadataItemIsMusicVideoKind:(id)arg1;
- (bool)_platformMetadataItemIsSongKind:(id)arg1;
- (bool)_platformMetadataItemIsTVShowKind:(id)arg1;
- (bool)_platformMetadataItemIsVideoKind:(id)arg1;
- (double)_songDurationFromOffersArray:(id)arg1;
- (id)_storeItemsImportPropertiesFromLookupItems:(id)arg1;
- (id)_storeItemsImportPropertiesFromTrackData:(id)arg1;
- (id)_storePlatformDateFormatter;
- (id)initWithLookupItems:(id)arg1;
- (id)initWithTrackData:(id)arg1;
- (id)parsedStoreItemsImportProperties;
- (unsigned long long)trackCount;
- (id)trackData;

@end
