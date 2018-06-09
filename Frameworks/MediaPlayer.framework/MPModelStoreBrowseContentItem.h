/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelStoreBrowseContentItem : MPModelObject

@property (nonatomic, retain) MPModelAlbum *album;
@property (nonatomic, retain) MPModelArtist *artist;
@property (nonatomic, copy) NSString *artistUploadedContentType;
@property (nonatomic, retain) MPModelCurator *curator;
@property (nonatomic) long long detailedItemType;
@property (nonatomic, retain) MPModelTVEpisode *episode;
@property (nonatomic) unsigned long long itemType;
@property (nonatomic, retain) MPModelMediaClip *mediaClip;
@property (nonatomic, retain) MPModelMovie *movie;
@property (nonatomic, retain) MPModelPlaylist *playlist;
@property (nonatomic, retain) MPModelRadioStation *radioStation;
@property (nonatomic, retain) MPModelTVSeason *season;
@property (nonatomic, retain) MPModelTVShow *show;
@property (nonatomic, retain) MPModelTVShowCreator *showCreator;
@property (nonatomic, retain) MPModelSocialPerson *socialPerson;
@property (nonatomic, retain) MPModelSong *song;

+ (id)__album_KEY;
+ (id)__artistUploadedContentType_KEY;
+ (id)__artist_KEY;
+ (id)__curator_KEY;
+ (id)__detailedItemType_KEY;
+ (id)__episode_KEY;
+ (id)__itemType_KEY;
+ (id)__mediaClip_KEY;
+ (id)__movie_KEY;
+ (id)__playlist_KEY;
+ (id)__radioStation_KEY;
+ (id)__season_KEY;
+ (id)__showCreator_KEY;
+ (id)__show_KEY;
+ (id)__socialPerson_KEY;
+ (id)__song_KEY;
+ (id)requiredStoreLibraryPersonalizationProperties;

- (id)innerObject;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;

@end
