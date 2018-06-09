/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelGenericObject : MPModelObject

@property (nonatomic, retain) MPModelAlbum *album;
@property (nonatomic, retain) MPModelArtist *artist;
@property (nonatomic, retain) MPModelMediaClip *mediaClip;
@property (nonatomic, retain) MPModelMovie *movie;
@property (nonatomic, retain) MPModelPlaylist *playlist;
@property (nonatomic, retain) MPModelPlaylistEntry *playlistEntry;
@property (nonatomic, retain) MPModelPodcast *podcast;
@property (nonatomic, retain) MPModelPodcastEpisode *podcastEpisode;
@property (nonatomic, retain) MPModelRadioStation *radioStation;
@property (nonatomic, retain) MPModelTVSeason *season;
@property (nonatomic, retain) MPModelTVShow *show;
@property (nonatomic, retain) MPModelSong *song;
@property (nonatomic, retain) MPModelTVEpisode *tvEpisode;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)__album_KEY;
+ (id)__artist_KEY;
+ (id)__mediaClip_KEY;
+ (id)__movie_KEY;
+ (id)__playlistEntry_KEY;
+ (id)__playlist_KEY;
+ (id)__podcastEpisode_KEY;
+ (id)__podcast_KEY;
+ (id)__radioStation_KEY;
+ (id)__season_KEY;
+ (id)__show_KEY;
+ (id)__song_KEY;
+ (id)__tvEpisode_KEY;
+ (id)genericObjectWithModelObject:(id)arg1;
+ (id)kindWithRelationshipKinds:(id)arg1;
+ (id)requiredStoreLibraryPersonalizationProperties;

- (id)anyObject;
- (id)flattenedGenericObject;
- (id)identifiers;
- (id)mediaItemPropertyValues;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)storeItemMetadataRequestItemIdentifier;
- (bool)storeItemMetadataRequestNeedsPersonalization;
- (long long)type;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mpc_remotePlaybackQueueRequiredProperties;
+ (id)mqf_requiredPlaybackProperties;

- (id)MPC_modelObjectWithStoreFrontLocalEquivalentModelObject:(id)arg1;
- (id)mpc_protoContainerRepresentation;
- (id)mpc_protoItemRepresentation;
- (id)mqf_playbackItemMetadataModelObject;

@end
