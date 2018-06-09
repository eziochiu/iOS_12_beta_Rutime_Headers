/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCMediaRemoteNullController : MPCMediaRemoteController {
    MPCFuture * _contentItemArtworkForIdentifierFuture;
    MPCFuture * _contentItemForIdentifierFuture;
    MPCFuture * _playQueueIdentifiersFuture;
}

+ (bool)_shouldRegisterForNotifications;

- (void).cxx_destruct;
- (id)_init;
- (long long)contentItemArtworkCacheStateForIdentifier:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)contentItemArtworkForContentItemIdentifier:(id)arg1 artworkIdentifier:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (long long)contentItemCacheStateForIdentifier:(id)arg1;
- (id)contentItemForIdentifier:(id)arg1;
- (void)invalidateAllTokens;
- (long long)playQueueIdentifiersCacheStateForRange:(struct _MSVSignedRange { long long x1; long long x2; })arg1;
- (id)playQueueIdentifiersForRange:(struct _MSVSignedRange { long long x1; long long x2; })arg1;
- (id)playQueueIdentifiersForRequest:(void*)arg1;
- (id)playbackState;
- (long long)playbackStateCacheState;
- (id)playingIdentifier;
- (long long)playingIdentifierCacheState;
- (void)sendCommand:(unsigned int)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)supportedCommands;
- (long long)supportedCommandsCacheState;
- (void)updateOptimisticStateForCommand:(unsigned int)arg1 options:(id)arg2;

@end
