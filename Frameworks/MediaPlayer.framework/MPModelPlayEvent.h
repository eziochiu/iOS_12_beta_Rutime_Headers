/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelPlayEvent : MPModelObject

@property (nonatomic, retain) MPModelAlbum *album;
@property (nonatomic, retain) MPModelArtist *artist;
@property (nonatomic, copy) NSDate *datePlayed;
@property (nonatomic, retain) MPModelPlaylist *playlist;
@property (nonatomic, retain) MPModelRadioStation *radioStation;

+ (id)__album_KEY;
+ (id)__artist_KEY;
+ (id)__datePlayed_KEY;
+ (id)__playlist_KEY;
+ (id)__radioStation_KEY;

- (id)contentItemCollectionInfo;
- (long long)itemType;

@end
