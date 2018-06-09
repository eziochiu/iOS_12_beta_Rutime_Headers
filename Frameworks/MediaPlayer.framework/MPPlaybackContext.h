/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlaybackContext : NSObject <NSSecureCoding> {
    NSString * _playActivityFeatureName;
    NSData * _playActivityRecommendationData;
    MPAVItem * _playerCurrentItem;
    long long  _repeatType;
    bool  _requireFinalTracklist;
    bool  _shouldRestartPlayback;
    bool  _shouldStartPlayback;
    long long  _shuffleType;
    NSString * _siriAssetInfo;
    NSString * _siriReferenceIdentifier;
    NSDictionary * _siriWHAMetricsInfo;
    long long  _startIndex;
}

@property (getter=mpcReporting_isQuickPlay, nonatomic, readonly) bool mpcReporting_quickPlay;
@property (nonatomic, copy) NSString *playActivityFeatureName;
@property (nonatomic, copy) NSData *playActivityRecommendationData;
@property (nonatomic, retain) MPAVItem *playerCurrentItem;
@property (nonatomic) long long repeatType;
@property (nonatomic) bool requireFinalTracklist;
@property (nonatomic) bool shouldRestartPlayback;
@property (nonatomic) bool shouldStartPlayback;
@property (nonatomic) long long shuffleType;
@property (nonatomic, copy) NSString *siriAssetInfo;
@property (nonatomic, copy) NSString *siriReferenceIdentifier;
@property (nonatomic, copy) NSDictionary *siriWHAMetricsInfo;
@property (nonatomic) long long startIndex;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (Class)queueFeederClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)playActivityFeatureName;
- (id)playActivityRecommendationData;
- (id)playerCurrentItem;
- (long long)repeatType;
- (bool)requireFinalTracklist;
- (void)setPlayActivityFeatureName:(id)arg1;
- (void)setPlayActivityRecommendationData:(id)arg1;
- (void)setPlayerCurrentItem:(id)arg1;
- (void)setRepeatType:(long long)arg1;
- (void)setRequireFinalTracklist:(bool)arg1;
- (void)setShouldRestartPlayback:(bool)arg1;
- (void)setShouldStartPlayback:(bool)arg1;
- (void)setShuffleType:(long long)arg1;
- (void)setSiriAssetInfo:(id)arg1;
- (void)setSiriReferenceIdentifier:(id)arg1;
- (void)setSiriWHAMetricsInfo:(id)arg1;
- (void)setStartIndex:(long long)arg1;
- (bool)shouldRestartPlayback;
- (bool)shouldStartPlayback;
- (long long)shuffleType;
- (id)siriAssetInfo;
- (id)siriReferenceIdentifier;
- (id)siriWHAMetricsInfo;
- (long long)startIndex;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (void)getRemotePlaybackQueueRepresentationWithPlayerPath:(id)arg1 completion:(id /* block */)arg2;
- (bool)mpcReporting_isQuickPlay;

@end
