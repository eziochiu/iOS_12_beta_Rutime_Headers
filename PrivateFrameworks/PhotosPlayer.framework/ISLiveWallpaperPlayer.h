/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISLiveWallpaperPlayer : ISBasePlayer {
    bool  __active;
    ISDisplayLink * __displayLink;
    float  __playRate;
    bool  __seeking;
    double  _force;
    double  _smoothedVelocity;
    bool  _touching;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _videoDuration;
}

@property (setter=_setActive:, nonatomic) bool _active;
@property (setter=_setDisplayLink:, nonatomic) ISDisplayLink *_displayLink;
@property (setter=_setPlayRate:, nonatomic) float _playRate;
@property (getter=_isSeeking, setter=_setSeeking:, nonatomic) bool _seeking;
@property (nonatomic) double force;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (getter=isTouching, nonatomic) bool touching;

- (bool)_active;
- (id)_displayLink;
- (void)_handleDidFinishSeeking:(bool)arg1;
- (bool)_isSeeking;
- (float)_playRate;
- (void)_seekVideoToBeginning;
- (void)_seekVideoToEnd;
- (void)_setActive:(bool)arg1;
- (void)_setDisplayLink:(id)arg1;
- (void)_setPlayRate:(float)arg1;
- (void)_setSeeking:(bool)arg1;
- (void)_update;
- (void)_updatePlayer;
- (void)didPerformChanges;
- (double)force;
- (bool)isPlaying;
- (bool)isTouching;
- (void)setForce:(double)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)setTouching:(bool)arg1;
- (void)statusDidChange;

@end
