/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreModelGenericObjectBuilder : MPStoreModelObjectBuilder {
    MPStoreModelAlbumBuilder * _albumBuilder;
    MPStoreModelArtistBuilder * _artistBuilder;
    NSMapTable * _baseContentItemIDToOccurrenceCount;
    MPStoreModelMovieBuilder * _movieBuilder;
    MPStoreModelPlaylistBuilder * _playlistBuilder;
    bool  _shouldUsePlaylistEntry;
    bool  _shouldUseUniqueContentItemIDs;
    MPStoreModelSongBuilder * _songBuilder;
    MPStoreModelTVEpisodeBuilder * _tvEpisodeBuilder;
    MPStoreModelTVSeasonBuilder * _tvSeasonBuilder;
    MPStoreModelTVShowBuilder * _tvShowBuilder;
}

@property (nonatomic) bool shouldUsePlaylistEntry;
@property (nonatomic) bool shouldUseUniqueContentItemIDs;

- (void).cxx_destruct;
- (id)_modelObjectWithUniqueContentItemIDForModelObject:(id)arg1;
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2;
- (void)setShouldUsePlaylistEntry:(bool)arg1;
- (void)setShouldUseUniqueContentItemIDs:(bool)arg1;
- (bool)shouldUsePlaylistEntry;
- (bool)shouldUseUniqueContentItemIDs;

@end
