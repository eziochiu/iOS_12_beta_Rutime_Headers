/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUSourceNode : NURenderNode {
    NURenderNode * _originalNode;
    <NUSourceDerivation> * _sourceDerivation;
}

@property NURenderNode *originalNode;
@property (readonly) struct { long long x1; long long x2; } pixelSize;
@property (retain) <NUSourceDerivation> *sourceDerivation;
@property (readonly) long long sourceOrientation;

- (void).cxx_destruct;
- (id)_addOrientationNode:(id)arg1 sourceSettings:(id)arg2 error:(out id*)arg3;
- (id)_addResampleNode:(id)arg1 subsampleNode:(id)arg2;
- (id)_addScaleNode:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4;
- (id)_evaluateGeometrySpaceMap:(out id*)arg1;
- (id)_evaluateImageGeometry:(out id*)arg1;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3;
- (id)initWithSettings:(id)arg1;
- (bool)isGeometryNode;
- (bool)isValid:(out id*)arg1;
- (bool)load:(out id*)arg1;
- (long long)normalizeSubsampleFactor:(long long)arg1;
- (id)originalNode;
- (id)pipelineOptionsForPipelineState:(id)arg1 error:(out id*)arg2;
- (struct { long long x1; long long x2; })pixelSize;
- (id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id*)arg5;
- (id)preparedNodeWithSourceNode:(id)arg1 sourceSettings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (void)setOriginalNode:(id)arg1;
- (void)setSourceDerivation:(id)arg1;
- (id)sourceDerivation;
- (id)sourceOptionsForSettings:(id)arg1 error:(out id*)arg2;
- (long long)sourceOrientation;
- (bool)supportsPipelineState:(id)arg1 error:(out id*)arg2;

@end
