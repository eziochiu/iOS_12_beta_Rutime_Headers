/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRemotePlaybackQueue : NSObject <NSSecureCoding> {
    struct _MRSystemAppPlaybackQueue { } * _mediaRemotePlaybackQueue;
}

@property (nonatomic) long long replaceIntent;
@property (getter=isRequestingImmediatePlayback, nonatomic) bool requestingImmediatePlayback;
@property (nonatomic) bool shouldOverrideManuallyCuratedQueue;
@property (nonatomic, readonly, copy) NSString *siriAssetInfo;
@property (nonatomic, copy) NSString *siriRecommendationIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *siriWHAMetricsInfo;
@property (nonatomic, copy) NSDictionary *userInfo;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { }*)arg1;
+ (void)registerRemotePlaybackQueueClass:(Class)arg1 forPlaybackQueueType:(int)arg2;
+ (bool)supportsSecureCoding;

- (struct _MRSystemAppPlaybackQueue { }*)_mediaRemotePlaybackQueue;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { }*)arg1;
- (bool)isRequestingImmediatePlayback;
- (long long)replaceIntent;
- (void)setReplaceIntent:(long long)arg1;
- (void)setRequestingImmediatePlayback:(bool)arg1;
- (void)setShouldOverrideManuallyCuratedQueue:(bool)arg1;
- (void)setSiriRecommendationIdentifier:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)shouldOverrideManuallyCuratedQueue;
- (id)siriAssetInfo;
- (id)siriRecommendationIdentifier;
- (id)siriWHAMetricsInfo;
- (id)userInfo;
- (bool)verifyWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (void)createPlaybackContextWithCompletion:(id /* block */)arg1;
- (void)getPlaybackContextWithCompletion:(id /* block */)arg1;
- (void)getRemoteRepresentationForPlayerPath:(id)arg1 completion:(id /* block */)arg2;

@end
