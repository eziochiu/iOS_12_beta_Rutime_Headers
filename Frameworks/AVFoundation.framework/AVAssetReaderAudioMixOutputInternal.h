/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetReaderAudioMixOutputInternal : NSObject {
    AVAudioMix * audioMix;
    AVAudioOutputSettings * audioOutputSettings;
    NSMutableDictionary * audioTapProcessorsForTracks;
    NSString * audioTimePitchAlgorithm;
    NSMutableDictionary * audioTimePitchAlgorithmsForTracks;
    NSArray * audioTracks;
    NSMutableDictionary * audioVolumeCurvesForTracks;
}

@end
