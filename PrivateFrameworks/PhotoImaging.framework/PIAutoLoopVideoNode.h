/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIAutoLoopVideoNode : NURenderNode {
    int  _fadeLength;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _frameDuration;
    int  _loopPeriod;
    int  _loopStart;
}

@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } fadeDuration;
@property (nonatomic, readonly) int fadeLength;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } fadeStartTime;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } frameDuration;
@property (nonatomic, readonly) NURenderNode *input;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } loopDuration;
@property (nonatomic, readonly) int loopPeriod;
@property (nonatomic, readonly) int loopStart;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } startTime;

- (id)_evaluateAudioMix:(out id*)arg1;
- (id)_evaluateVideo:(out id*)arg1;
- (id)_evaluateVideoComposition:(out id*)arg1;
- (id)_evaluateVideoProperties:(out id*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })fadeDuration;
- (int)fadeLength;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })fadeStartTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameDuration;
- (id)initWithInput:(id)arg1 frameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 settings:(id)arg3;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary { Class x1; }*)arg2;
- (id)input;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })loopDuration;
- (int)loopPeriod;
- (int)loopStart;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (bool)requiresAudioMix;
- (bool)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary { Class x1; }*)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })startTime;

@end
