/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItemTrack : NSObject {
    AVPlayerItemTrackInternal * _playerItemTrack;
}

@property (nonatomic, readonly) AVAssetTrack *assetTrack;
@property (nonatomic, readonly) float currentVideoFrameRate;
@property (getter=isEnabled, nonatomic) bool enabled;

+ (id)playerItemTrackWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 readyForInspection:(bool)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5;

- (void)_attachToFigPlaybackItemOfPlayerItem:(id)arg1;
- (id)_initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 readyForInspection:(bool)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5;
- (id)_playerItem;
- (void)_respondToFigPlaybackItemBecomingReadyForInpection;
- (void)_transferActiveHapticChannelIndexToFig;
- (void)_transferCachedValuesToFig;
- (void)_transferDisableColorMatchingToFig;
- (void)_transferEnabledToFig;
- (void)_transferHapticVolumeToFig;
- (void)_transferLoudnessInfoToFig;
- (void)_transferVideoEnhancementOptionsToFig;
- (id)_weakReferenceToPlayerItem;
- (long long)activeHapticChannelIndex;
- (id)assetTrack;
- (float)currentVideoFrameRate;
- (void)dealloc;
- (id)description;
- (bool)disableColorMatching;
- (id)fallbackTrack;
- (void)finalize;
- (float)hapticVolume;
- (unsigned long long)hash;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id)loudnessInfo;
- (void)setActiveHapticChannelIndex:(long long)arg1;
- (void)setDisableColorMatching:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHapticVolume:(float)arg1;
- (void)setLoudnessInfo:(id)arg1;
- (void)setVideoEnhancementFilterOptions:(id)arg1;
- (int)trackID;
- (id)videoEnhancementFilterOptions;

@end
