/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelMoviePlaybackItemMetadata : MPModelSongPlaybackItemMetadata {
    MPModelGenericObject * _modelGenericObject;
    MPModelMovie * _movie;
}

@property (nonatomic, retain) MPModelMovie *movie;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)requiredProperties;

- (void).cxx_destruct;
- (void)_invalidateModelObjectPlaybackItemMetadata;
- (bool)allowsInitiatingPlayWhileDownload;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)contentTitle;
- (unsigned long long)contentType;
- (double)expectedDuration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isExplicitTrack;
- (id)localFileAsset;
- (id)mediaItem;
- (id)modelGenericObject;
- (id)movie;
- (id)playbackPosition;
- (void)setMovie:(id)arg1;
- (long long)storeAdamID;
- (id)storeAsset;
- (unsigned long long)storeSagaID;
- (long long)storeSubscriptionAdamID;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)mqf_playbackItemMetadataModelObject;

@end
