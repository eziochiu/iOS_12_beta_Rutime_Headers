/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMutableAudioMixInputParameters : AVAudioMixInputParameters {
    AVMutableAudioMixInputParametersInternal * _mutableInputParameters;
}

@property (nonatomic, retain) const struct opaqueMTAudioProcessingTap { }*audioTapProcessor;
@property (nonatomic, copy) NSString *audioTimePitchAlgorithm;
@property (nonatomic) int trackID;

+ (id)audioMixInputParameters;
+ (id)audioMixInputParametersWithTrack:(id)arg1;

- (const struct opaqueMTAudioProcessingTap { }*)audioTapProcessor;
- (id)audioTimePitchAlgorithm;
- (void)setAudioTapProcessor:(struct opaqueMTAudioProcessingTap { }*)arg1;
- (void)setAudioTimePitchAlgorithm:(id)arg1;
- (void)setTrackID:(int)arg1;
- (void)setVolume:(float)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (int)trackID;

@end
