/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISLivePhotoSeekBehavior : ISBehavior {
    bool  _isSeeking;
    bool  _needsSeek;
    bool  _needsTransitionToVideo;
    id /* block */  _seekCompletionHandler;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _seekTime;
}

@property (nonatomic, copy) id /* block */ seekCompletionHandler;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } seekTime;

- (void).cxx_destruct;
- (void)_callSeekCompletionHandler:(bool)arg1;
- (void)_handleDidSeekToSeekTime:(bool)arg1;
- (void)_seekIfNeeded;
- (void)activeDidChange;
- (long long)behaviorType;
- (id)initWithInitialLayoutInfo:(id)arg1 seekTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id /* block */)seekCompletionHandler;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })seekTime;
- (void)setSeekCompletionHandler:(id /* block */)arg1;
- (void)setSeekTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
