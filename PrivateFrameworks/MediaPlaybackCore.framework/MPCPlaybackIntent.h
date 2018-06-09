/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlaybackIntent : NSObject {
    NSString * _localizedTitle;
    NSString * _playActivityFeatureName;
    NSData * _playActivityRecommendationData;
    bool  _preventAutomaticPlayback;
    <MPCPlaybackIntentDataSource> * _resolvedTracklistDataSource;
    long long  _shuffleMode;
    NSString * _siriAssetInfo;
    NSString * _siriReferenceIdentifier;
    long long  _tracklistSource;
    <NSSecureCoding> * _tracklistToken;
}

@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, copy) NSString *playActivityFeatureName;
@property (nonatomic, copy) NSData *playActivityRecommendationData;
@property (nonatomic) bool preventAutomaticPlayback;
@property (nonatomic) long long shuffleMode;
@property (nonatomic, copy) NSString *siriAssetInfo;
@property (nonatomic, copy) NSString *siriReferenceIdentifier;
@property (nonatomic, readonly) <MPCPlaybackIntentDataSource> *tracklistDataSource;
@property (nonatomic) long long tracklistSource;
@property (nonatomic, retain) <NSSecureCoding> *tracklistToken;

+ (id)intentFromQueueDescriptor:(id)arg1;
+ (id)radioPlaybackIntentFromAlbum:(id)arg1;
+ (id)radioPlaybackIntentFromArtist:(id)arg1;
+ (id)radioPlaybackIntentFromSong:(id)arg1;
+ (id)radioPlaybackIntentWithStation:(id)arg1;
+ (id)radioPlaybackIntentWithStationStringID:(id)arg1;
+ (id)radioPlaybackIntentWithStationURL:(id)arg1;
+ (id)tracklistDataSourceForSource:(long long)arg1;

- (void).cxx_destruct;
- (id)description;
- (void)getPlaybackContextWithCompletion:(id /* block */)arg1;
- (void)getRemotePlaybackQueueRepresentationWithPlayerPath:(id)arg1 completion:(id /* block */)arg2;
- (void)getRepresentativeMetadataWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)localizedTitle;
- (id)playActivityFeatureName;
- (id)playActivityRecommendationData;
- (bool)preventAutomaticPlayback;
- (void)setLocalizedTitle:(id)arg1;
- (void)setPlayActivityFeatureName:(id)arg1;
- (void)setPlayActivityRecommendationData:(id)arg1;
- (void)setPreventAutomaticPlayback:(bool)arg1;
- (void)setShuffleMode:(long long)arg1;
- (void)setSiriAssetInfo:(id)arg1;
- (void)setSiriReferenceIdentifier:(id)arg1;
- (void)setTracklistSource:(long long)arg1;
- (void)setTracklistToken:(id)arg1;
- (long long)shuffleMode;
- (id)siriAssetInfo;
- (id)siriReferenceIdentifier;
- (id)tracklistDataSource;
- (long long)tracklistSource;
- (id)tracklistToken;

@end
