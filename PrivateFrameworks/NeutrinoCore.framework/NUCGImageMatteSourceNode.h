/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUCGImageMatteSourceNode : NUSourceNode {
    NUCGAuxiliaryImageProperties * _auxiliaryImageProperties;
    NUCGImageSourceNode * _sourceNode;
}

@property (retain) NUCGImageSourceNode *sourceNode;

- (void).cxx_destruct;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3;
- (id)_evaluatePortraitEffectsMatte:(out id*)arg1;
- (bool)canPropagateOriginalDepthData;
- (id)initWithSettings:(id)arg1;
- (id)initWithSourceNode:(id)arg1 auxiliaryImageProperties:(id)arg2;
- (id)pipelineOptionsForPipelineState:(id)arg1 error:(out id*)arg2;
- (struct { long long x1; long long x2; })pixelSize;
- (void)setSourceNode:(id)arg1;
- (id)sourceNode;
- (long long)sourceOrientation;

@end