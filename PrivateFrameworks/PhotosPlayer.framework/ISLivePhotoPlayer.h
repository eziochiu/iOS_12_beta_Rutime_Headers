/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISLivePhotoPlayer : ISBasePlayer <ISChangeObserver, ISLivePhotoSettleBehaviorDelegate> {
    bool  __settleAutomaticallyWhenReady;
    bool  __shouldPlayVitalityWhenReady;
    bool  __shouldPrepareForHintWhenReady;
    bool  __shouldPrepareForVitalityWhenReady;
    long long  __styleToPlayWhenReady;
    NSDate * __vitalityTimeoutDate;
    long long  _currentPlaybackStyle;
    int  _fadeInRequestID;
    bool  _hinting;
    bool  _immediatelyShowsPhotoWhenPlaybackEnds;
    struct { 
        bool scale; 
        bool apertureMode; 
    }  _isValid;
    double  _lastAppliedScale;
    bool  _playbackAllowed;
    NSMutableSet * _playbackFilters;
    bool  _playingVitality;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _seekTime;
    long long  _targetReadiness;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _trimTimeRange;
    ISLivePhotoVitalityFilter * _vitalityFilter;
}

@property (nonatomic, readonly) bool _canPlayVitality;
@property (setter=_setSettleAutomaticallyWhenReady:, nonatomic) bool _settleAutomaticallyWhenReady;
@property (setter=_setShouldPlayVitalityWhenReady:, nonatomic) bool _shouldPlayVitalityWhenReady;
@property (setter=_setShouldPrepareForHintWhenReady:, nonatomic) bool _shouldPrepareForHintWhenReady;
@property (setter=_setShouldPrepareForVitalityWhenReady:, nonatomic) bool _shouldPrepareForVitalityWhenReady;
@property (setter=_setStyleToPlayWhenReady:, nonatomic) long long _styleToPlayWhenReady;
@property (setter=_setVitalityTimeoutDate:, nonatomic, retain) NSDate *_vitalityTimeoutDate;
@property (setter=_setCurrentPlaybackStyle:, nonatomic) long long currentPlaybackStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHinting, setter=_setHinting:, nonatomic) bool hinting;
@property (nonatomic) bool immediatelyShowsPhotoWhenPlaybackEnds;
@property (getter=isPlaybackAllowed, nonatomic) bool playbackAllowed;
@property (nonatomic, readonly) NSSet *playbackFilters;
@property (getter=isPlayingVitality, setter=_setPlayingVitality:, nonatomic) bool playingVitality;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } seekTime;
@property (readonly) Class superclass;
@property (nonatomic) long long targetReadiness;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } trimTimeRange;
@property (nonatomic, retain) ISLivePhotoVitalityFilter *vitalityFilter;

- (void).cxx_destruct;
- (bool)_canPlayVitality;
- (double)_coalescedPlaybackFilterHintProgress;
- (long long)_coalescedPlaybackFilterState;
- (void)_configurePlaybackFilter:(id)arg1;
- (void)_configurePlaybackFilters;
- (id)_createVitalityBehavior;
- (void)_fadeInAudio;
- (void)_handlePlaybackFilterDidChange;
- (void)_handleVitalityFilterDidChange:(id)arg1;
- (void)_invalidateApertureMode;
- (void)_invalidateScale;
- (double)_photoTransitionDuration;
- (void)_playIfNeeded;
- (void)_prepareForVitalityIfNeeded;
- (void)_resetPlaybackFilters;
- (void)_setCurrentPlaybackStyle:(long long)arg1;
- (void)_setHinting:(bool)arg1;
- (void)_setPlayingVitality:(bool)arg1;
- (void)_setSettleAutomaticallyWhenReady:(bool)arg1;
- (void)_setShouldPlayVitalityWhenReady:(bool)arg1;
- (void)_setShouldPrepareForHintWhenReady:(bool)arg1;
- (void)_setShouldPrepareForVitalityWhenReady:(bool)arg1;
- (void)_setStyleToPlayWhenReady:(long long)arg1;
- (void)_setVitalityTimeoutDate:(id)arg1;
- (bool)_settleAutomaticallyWhenReady;
- (bool)_shouldPlayVitalityWhenReady;
- (bool)_shouldPrepareForHintWhenReady;
- (bool)_shouldPrepareForVitalityWhenReady;
- (long long)_styleToPlayWhenReady;
- (void)_updateApertureModeIfNeeded;
- (void)_updateHintingAndVitality;
- (void)_updatePlayerItemLoadingTarget;
- (void)_updateScaleIfNeeded;
- (id)_vitalityTimeoutDate;
- (void)activeBehaviorDidChange;
- (void)addPlaybackFilter:(id)arg1;
- (void)configurePlayerItem;
- (long long)currentPlaybackStyle;
- (void)didPerformChanges;
- (bool)immediatelyShowsPhotoWhenPlaybackEnds;
- (id)init;
- (bool)isHinting;
- (bool)isPlaybackAllowed;
- (bool)isPlayingVitality;
- (double)lastAppliedScale;
- (void)livePhotoPlaybackBehaviorDidBeginPlaying:(id)arg1;
- (void)livePhotoPlaybackBehaviorDidFinish:(id)arg1;
- (void)livePhotoSettleBehaviorDidFinish:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)playHintWhenReady;
- (void)playVitality;
- (id)playbackFilters;
- (void)playerItemDidChange;
- (void)prepareForHintWhenReady;
- (void)prepareForVitality;
- (void)removePlaybackFilter:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })seekTime;
- (void)setImmediatelyShowsPhotoWhenPlaybackEnds:(bool)arg1;
- (void)setPlaybackAllowed:(bool)arg1;
- (void)setSeekTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completion:(id /* block */)arg2;
- (void)setTargetReadiness:(long long)arg1;
- (void)setTrimTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setVitalityFilter:(id)arg1;
- (void)startPlaybackWithStyle:(long long)arg1;
- (void)startPlaybackWithStyle:(long long)arg1 settleAutomatically:(bool)arg2;
- (void)startPlaybackWithStyleWhenReady:(long long)arg1;
- (void)startPlaybackWithStyleWhenReady:(long long)arg1 settleAutomatically:(bool)arg2;
- (void)statusDidChange;
- (void)stopPlayback;
- (void)stopPlaybackAnimated:(bool)arg1;
- (long long)targetReadiness;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })trimTimeRange;
- (double)videoWillPlayToPhotoInterval;
- (void)vitalityBehaviorDidBeginPlaying:(id)arg1;
- (void)vitalityBehaviorDidEndPlaying:(id)arg1;
- (bool)vitalityBehaviorShouldEndPlayingAtPhoto:(id)arg1;
- (id)vitalityFilter;

@end
