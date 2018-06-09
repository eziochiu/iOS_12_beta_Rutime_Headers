/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelArtist : MPModelPerson

@property (nonatomic) long long albumCount;
@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, copy) id /* block */ editorialArtworkCatalogBlock;
@property (nonatomic, copy) MPModelGenre *genre;
@property (nonatomic) bool hasBiography;
@property (nonatomic, copy) NSDate *libraryAddedDate;
@property (nonatomic) long long songCount;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)__albumCount_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__genre_KEY;
+ (id)__hasBiography_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)__songCount_KEY;
+ (id)kindWithAlbumKind:(id)arg1;

- (id)artworkCatalog;
- (id)editorialArtworkCatalog;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)_radioStationMatchMetadata;
- (bool)_shouldMatchArtist;
- (id)mpc_radioContentReference;

@end
