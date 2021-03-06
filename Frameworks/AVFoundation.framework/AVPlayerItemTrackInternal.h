/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItemTrackInternal : NSObject {
    long long  activeHapticChannelIndex;
    bool  activeHapticChannelIndexWasSet;
    AVAsset * asset;
    bool  disableColorMatching;
    bool  disableColorMatchingWasSet;
    bool  enabled;
    bool  enabledWasSet;
    struct OpaqueFigPlaybackItem { } * figPlaybackItem;
    bool  figPlaybackItemIsReadyForInspection;
    float  hapticVolume;
    bool  hapticVolumeWasSet;
    NSDictionary * loudnessInfo;
    int  trackID;
    NSDictionary * videoEnhancementFilterOptions;
    NSString * videoFieldMode;
    AVWeakReference * weakReferenceToPlayerItem;
}

@end
