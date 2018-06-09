/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUVideoPlaybackFrameRequest : NURenderRequest {
    NUColorSpace * _colorSpace;
    struct __CVBuffer { } * _destinationBuffer;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _evaluationTime;
    struct { 
        long long numerator; 
        long long denominator; 
    }  _renderScale;
    NSDictionary * _videoFrames;
}

@property (nonatomic, retain) NUColorSpace *colorSpace;
@property (nonatomic, retain) struct __CVBuffer { }*destinationBuffer;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } evaluationTime;
@property (nonatomic) struct { long long x1; long long x2; } renderScale;
@property (nonatomic, copy) NSDictionary *videoFrames;

- (void).cxx_destruct;
- (id)colorSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct __CVBuffer { }*)destinationBuffer;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })evaluationTime;
- (id)initWithComposition:(id)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (struct { long long x1; long long x2; })renderScale;
- (void)setColorSpace:(id)arg1;
- (void)setDestinationBuffer:(struct __CVBuffer { }*)arg1;
- (void)setEvaluationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setRenderScale:(struct { long long x1; long long x2; })arg1;
- (void)setVideoFrames:(id)arg1;
- (void)submit:(id /* block */)arg1;
- (id)videoFrames;

@end
