/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAutoEditAudioLayoutController : NSObject {
    MiroMemory * _activeMemory;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastBeatTime;
    NSArray * _layoutClips;
    MiroAutoEditLogger * _logger;
    Project * _project;
}

@property (nonatomic) MiroMemory *activeMemory;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } lastBeatTime;
@property (nonatomic, retain) NSArray *layoutClips;
@property (nonatomic, retain) MiroAutoEditLogger *logger;
@property (nonatomic, retain) Project *project;

- (void).cxx_destruct;
- (void)_applyComputedVolumesForClips:(id)arg1;
- (id)_applyFrozenVolumeAndReturnRemainingItems;
- (bool)_attemptToRollEditFromTime:(int)arg1 toTime:(int)arg2 firstClip:(id)arg3 secondClip:(id)arg4 failureReasons:(id)arg5 allowSlack:(bool)arg6;
- (bool)_clipLimitsRoll:(id)arg1;
- (unsigned long long)_computeMuteStateForClip:(id)arg1 hasAnalysis:(bool)arg2 hasVoice:(bool)arg3 hasVoiceAndFaces:(bool)arg4;
- (void)_computeVolumesForClip:(id)arg1 loudnessValues:(id)arg2 peakValues:(id)arg3 returnNormalVolume:(float*)arg4 returnDimmedVolume:(float*)arg5;
- (void)_enumerateClipsWithAudio:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)_hasVoiceAndFacesForClip:(id)arg1 gatherLoudness:(id*)arg2 peak:(id*)arg3 voiceRanges:(id*)arg4;
- (id)_interestingBeatTimedMetaItemsForFlexAudioClip:(id)arg1 forFrameTime:(int)arg2 withGranularity:(id)arg3;
- (id)_onsetDrivenInterestingBeatsForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 metadataDict:(id)arg2;
- (id)_rollCutsToBeatsWithGranularity:(id)arg1 excludingTimes:(id)arg2;
- (id)_segmentAndBeatsBasedInterestingBeatsForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 metadataDict:(id)arg2;
- (id)_timedMetadataItemAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forFlexAudioClip:(id)arg2 withIdentifier:(id)arg3;
- (id)activeMemory;
- (void)analyzeLoudness:(id)arg1;
- (void)applyAudioFadeHandles;
- (void)applyAudioPolishToProject:(id)arg1 activeMemory:(id)arg2 layoutClips:(id)arg3;
- (void)applyBackgroundAudioVolume;
- (void)applyClipVolumes;
- (void)applyJAndLCuts;
- (unsigned long long)indexOfClipInLayoutClips:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastBeatTime;
- (id)layoutClips;
- (id)logger;
- (id)project;
- (void)rollCutsToBeats;
- (void)setActiveMemory:(id)arg1;
- (void)setLastBeatTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLayoutClips:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)setProject:(id)arg1;

@end
