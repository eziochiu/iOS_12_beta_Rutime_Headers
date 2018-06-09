/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface CompositionTrackGroup : NSObject {
    struct opaqueCMFormatDescription { } * _audioFormatDescription;
    AVMutableComposition * _composition;
    NSMutableArray * _extraAudioTrackGroups;
    bool  _isExporting;
    bool  _isFlexMusic;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastRampToZeroEnd;
    NSString * _preferredAudioTimePitchAlgorithm;
    bool  _seenMoreThanOneASBD;
    bool  _seenSpeedClip;
    NSString * _timePitchAlgorithm;
    AVMutableAudioMixInputParameters * m_audioInputParameters;
    NSMutableArray * m_audioSegments;
    AVMutableCompositionTrack * m_audioTrack;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  m_cursor;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  m_cursorAtLastVideoInsertion;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  m_cursorForMovieAudio;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  m_fadeOutDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  m_fadeOutStart;
    NSDictionary * m_flexTrackInfoDict;
    NSString * m_groupLabel;
    bool  m_shouldAddVolumePointsAsWorkaround;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  m_timeOfLastRequest;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  m_timeOfLastVolumeChange;
    NSMutableArray * m_videoSegments;
    AVMutableCompositionTrack * m_videoTrack;
    bool  m_videoTrackInUse;
    float  m_volumeAtLastVolumeChange;
    float  m_volumeChangePending;
}

@property (nonatomic, readonly) int actualVideoTrackID;
@property (nonatomic, retain) struct opaqueCMFormatDescription { }*audioFormatDescription;
@property (nonatomic, retain) AVMutableAudioMixInputParameters *audioParameters;
@property (nonatomic, readonly) NSArray *audioSegments;
@property (nonatomic, retain) AVMutableCompositionTrack *audioTrack;
@property (nonatomic, retain) AVMutableComposition *composition;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } cursor;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } cursorAtLastVideoInsertion;
@property (nonatomic, retain) NSMutableArray *extraAudioTrackGroups;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } fadeOutDuration;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } fadeOutStart;
@property (nonatomic, retain) NSDictionary *fmTrackInfoDict;
@property (nonatomic) bool isExporting;
@property (nonatomic) bool isFlexMusic;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } lastRampToZeroEnd;
@property (nonatomic, retain) NSString *preferredAudioTimePitchAlgorithm;
@property (nonatomic) bool seenMoreThanOneASBD;
@property (nonatomic) bool seenSpeedClip;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } timeOfLastRequest;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } timeOfLastVolumeChange;
@property (nonatomic) NSString *timePitchAlgorithm;
@property (nonatomic, readonly) int usableVideoTrackID;
@property (nonatomic, readonly) NSArray *videoSegments;
@property (nonatomic, retain) AVMutableCompositionTrack *videoTrack;
@property (nonatomic) float volumeAtLastVolumeChange;
@property (nonatomic) float volumeChangePending;

+ (id)visualDescriptionForSegments:(id)arg1;

- (void)_updateIsFlexMusic:(id)arg1;
- (int)actualVideoTrackID;
- (void)addExtraAudioTrackGroup:(id)arg1;
- (void)apply:(id)arg1;
- (void)applyAudioMixParameters:(id)arg1;
- (void)applyCompositionItem:(id)arg1;
- (void)applyCompositionItem:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)applyCompositionItem:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 videoOnly:(bool)arg3;
- (void)applyCompositionItem:(id)arg1 videoOnly:(bool)arg2;
- (void)applyCompositionItemAsLoopedAudio:(id)arg1 forTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;
- (void)applyFlexAudioMix:(id)arg1;
- (void)applyPaddingToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)apply_version1;
- (void)apply_version2:(id)arg1;
- (id)apply_version2_to_track:(id)arg1 withSegments:(id)arg2 assets:(id)arg3;
- (bool)asbd:(struct opaqueCMFormatDescription { }*)arg1 isEqualTo:(struct opaqueCMFormatDescription { }*)arg2;
- (struct opaqueCMFormatDescription { }*)audioFormatDescription;
- (id)audioParameters;
- (id)audioSegments;
- (id)audioTrack;
- (bool)commitPendingVolumeToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)commitVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (id)composition;
- (bool)containsAudioSegments;
- (bool)containsSegments;
- (bool)containsVideoSegments;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })cursor;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })cursorAtLastVideoInsertion;
- (void)dealloc;
- (id)description;
- (id)extraAudioTrackGroups;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })fadeOutDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })fadeOutStart;
- (void)fixAVFoundationsMistake;
- (id)fmTrackInfoDict;
- (id)initWithLabel:(id)arg1;
- (bool)isExporting;
- (bool)isFlexMusic;
- (id)label;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastRampToZeroEnd;
- (float)linearFadeOutValueForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)markDirty;
- (id)preferredAudioTimePitchAlgorithm;
- (void)removeExtraAudioTrackGroups;
- (bool)requestVolume:(float)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (bool)requestVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (bool)requestVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 fillEmptySegment:(bool)arg4;
- (void)resetVolumeState;
- (bool)seenMoreThanOneASBD;
- (bool)seenSpeedClip;
- (void)setAudioFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
- (void)setAudioParameters:(id)arg1;
- (void)setAudioTrack:(id)arg1;
- (void)setComposition:(id)arg1;
- (void)setExtraAudioTrackGroups:(id)arg1;
- (void)setFadeOutDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setFadeOutStart:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (float)setFadedVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (void)setFmTrackInfoDict:(id)arg1;
- (void)setIsExporting:(bool)arg1;
- (void)setIsFlexMusic:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLastRampToZeroEnd:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreferredAudioTimePitchAlgorithm:(id)arg1;
- (void)setSeenMoreThanOneASBD:(bool)arg1;
- (void)setSeenSpeedClip:(bool)arg1;
- (void)setTimeOfLastRequest:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTimeOfLastVolumeChange:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTimePitchAlgorithm:(id)arg1;
- (void)setVideoTrack:(id)arg1;
- (void)setVolumeAtLastVolumeChange:(float)arg1;
- (void)setVolumeChangePending:(float)arg1;
- (bool)shouldAddVolumePointsAsWorkaround;
- (bool)shouldCommitVolume:(float)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeOfLastRequest;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeOfLastVolumeChange;
- (id)timePitchAlgorithm;
- (int)usableVideoTrackID;
- (bool)validate;
- (id)videoSegments;
- (id)videoTrack;
- (float)volumeAtLastVolumeChange;
- (float)volumeChangePending;

@end
