/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISLivePhotoVitalityBehavior : ISBehavior {
    bool  __shouldPlayAfterPreparation;
    unsigned long long  _assetOptions;
    id  _easeOutObserver;
    bool  _pauseDuringTransition;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _photoTime;
    double  _photoTransitionDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _playDuration;
    float  _playRate;
    bool  _playing;
    bool  _playingBeyondPhoto;
    bool  _prepared;
    bool  _preparing;
    id  _transitionToPhotoObserver;
}

@property (setter=_setShouldPlayAfterPreparation:, nonatomic) bool _shouldPlayAfterPreparation;
@property (nonatomic, readonly) unsigned long long assetOptions;
@property (nonatomic) <ISLivePhotoVitalityBehaviorDelegate> *delegate;
@property (nonatomic, readonly) bool pauseDuringTransition;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoTime;
@property (nonatomic, readonly) double photoTransitionDuration;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } playDuration;
@property (nonatomic, readonly) float playRate;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (getter=isPlayingBeyondPhoto, setter=_setPlayingBeyondPhoto:, nonatomic) bool playingBeyondPhoto;
@property (getter=isPrepared, setter=_setPrepared:, nonatomic) bool prepared;
@property (getter=_isPreparing, setter=_setPreparing:, nonatomic) bool preparing;

- (void).cxx_destruct;
- (void)_didReachTransitionTime;
- (void)_didReachTransitionToPhotoTime;
- (void)_handleDidFinishPreroll;
- (void)_handleDidSeekToStartTime;
- (bool)_isPreparing;
- (void)_setPlayingBeyondPhoto:(bool)arg1;
- (void)_setPrepared:(bool)arg1;
- (void)_setPreparing:(bool)arg1;
- (void)_setShouldPlayAfterPreparation:(bool)arg1;
- (bool)_shouldPlayAfterPreparation;
- (void)_startObservingVideo;
- (void)_startVideoPlayback;
- (void)_stopObservingVideo;
- (void)activeDidChange;
- (unsigned long long)assetOptions;
- (long long)behaviorType;
- (void)cancelSettleToPhoto;
- (void)dealloc;
- (id)initWithInitialLayoutInfo:(id)arg1 photoTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 playDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 playRate:(float)arg4 photoTransitionDuration:(double)arg5 pauseDuringTransition:(bool)arg6 assetOptions:(unsigned long long)arg7;
- (bool)isPlaying;
- (bool)isPlayingBeyondPhoto;
- (bool)isPrepared;
- (bool)pauseDuringTransition;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoTime;
- (double)photoTransitionDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })playDuration;
- (float)playRate;
- (void)playVitality;
- (void)prepareForVitality;

@end
