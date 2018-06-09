/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUVideoFrameSourceNode : NUSourceNode {
    long long  _orientation;
}

- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateImageProperties:(out id*)arg1;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3;
- (id)initWithSettings:(id)arg1;
- (id)initWithSettings:(id)arg1 orientation:(long long)arg2;
- (struct { long long x1; long long x2; })pixelSize;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;
- (long long)sourceOrientation;

@end
