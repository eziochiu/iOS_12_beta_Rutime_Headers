/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPVideoMetaMotionSegment : VCPMetaSegment {
    float  _absMotion;
    float  _stabilityScore;
}

@property float absMotion;
@property float stabilityScore;

- (float)absMotion;
- (void)finalizeAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)initWithAbsMotion:(float)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)mergeSegment:(id)arg1;
- (void)resetSegment:(float)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setAbsMotion:(float)arg1;
- (void)setStabilityScore:(float)arg1;
- (float)stabilityScore;
- (void)updateSegment:(float)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;

@end
