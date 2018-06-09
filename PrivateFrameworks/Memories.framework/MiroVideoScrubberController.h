/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroVideoScrubberController : NSObject {
    MiroScrubberSeekRequest * __activeSeekRequest;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  __avPlayerCurrentTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  __avPlayerDuration;
    MiroScrubberSeekRequest * __pendingSeekRequest;
    double  __playheadTime;
    AVPlayer * _avPlayer;
    bool  _avPlayerCurrentTimeNeedsUpdate;
    bool  _avPlayerDurationNeedsUpdate;
    <MiroVideoScrubberControllerDelegate> * _delegate;
    double  _estimatedDuration;
    bool  _needsUpdate;
    id  _playerObserver;
    struct { 
        bool respondsToDidUpdate; 
        bool respondsToLengthForDuration; 
        bool respondsToDesiredSeekTime; 
    }  _videoScrubberDelegateFlags;
}

@property (setter=_setActiveSeekRequest:, nonatomic, retain) MiroScrubberSeekRequest *_activeSeekRequest;
@property (setter=_setAvPlayerCurrentTime:, nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } _avPlayerCurrentTime;
@property (setter=_setAvPlayerDuration:, nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } _avPlayerDuration;
@property (setter=_setPendingSeekRequest:, nonatomic, retain) MiroScrubberSeekRequest *_pendingSeekRequest;
@property (setter=_setPlayheadTime:, nonatomic) double _playheadTime;
@property (nonatomic, readonly) AVPlayer *avPlayer;
@property (nonatomic) <MiroVideoScrubberControllerDelegate> *delegate;
@property (nonatomic, readonly) double estimatedDuration;
@property (nonatomic, readonly) double length;
@property (nonatomic) double playheadProgress;

- (void).cxx_destruct;
- (id)_activeSeekRequest;
- (void)_addObservers;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_avPlayerCurrentTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_avPlayerDuration;
- (double)_duration;
- (void)_handleTimeoutCallbackForSeekRequest:(id)arg1;
- (void)_invalidate;
- (void)_invalidateAvPlayerCurrentTime;
- (void)_invalidateAvPlayerDuration;
- (double)_lengthForDuration:(double)arg1;
- (void)_loadedDurationDidChange;
- (id)_pendingSeekRequest;
- (void)_playerDidChange:(id)arg1;
- (void)_playerItemDurationDidChange;
- (void)_playerItemStatusDidChange;
- (void)_playerStatusDidChange;
- (double)_playheadTime;
- (double)_progressForTime:(double)arg1;
- (void)_removeObservers;
- (void)_seekRequest:(id)arg1 didFinish:(bool)arg2;
- (void)_seekToTime:(double)arg1;
- (void)_setActiveSeekRequest:(id)arg1;
- (void)_setAvPlayerCurrentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setAvPlayerDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setPendingSeekRequest:(id)arg1;
- (void)_setPlayheadProgress:(double)arg1 andSeekVideoPlayer:(bool)arg2;
- (void)_setPlayheadTime:(double)arg1;
- (double)_timeForProgress:(double)arg1;
- (void)_updateAvPlayerCurrentTimeIfNeeded;
- (void)_updateAvPlayerDurationIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateSeeking;
- (id)avPlayer;
- (void)dealloc;
- (id)delegate;
- (double)estimatedDuration;
- (id)init;
- (id)initWithAvPlayer:(id)arg1 estimatedDuration:(double)arg2;
- (double)length;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (double)playheadProgress;
- (void)setDelegate:(id)arg1;
- (void)setPlayheadProgress:(double)arg1;

@end
