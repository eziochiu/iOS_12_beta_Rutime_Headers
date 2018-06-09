/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKMetalShader : NSObject {
    PKMetalShader * _addBlendModeShader;
    long long  _blendMode;
    unsigned long long  _colorAttachmentIndex;
    <MTLFunction> * _fragmentFunction;
    PKMetalShader * _maxBlendModeShader;
    PKMetalShader * _noBlendModeShader;
    unsigned long long  _numColorAttachments;
    <MTLRenderPipelineState> * _pipelineState;
    MTLRenderPipelineDescriptor * _sharedPipelineDescriptor;
    unsigned long long  _stencilPixelFormat;
    <MTLFunction> * _vertexFunction;
}

@property (nonatomic, readonly) <MTLRenderPipelineState> *pipelineState;

- (void).cxx_destruct;
- (void)createPipelineState;
- (id)init;
- (id)initWithVertexFunction:(id)arg1 fragmentFunction:(id)arg2 blendMode:(long long)arg3 colorAttachmentIndex:(unsigned long long)arg4 sharedPipelineDescriptor:(id)arg5 numColorAttachments:(unsigned long long)arg6;
- (id)initWithVertexFunction:(id)arg1 fragmentFunction:(id)arg2 sharedPipelineDescriptor:(id)arg3 numColorAttachments:(unsigned long long)arg4;
- (id)newShaderWithBlendMode:(long long)arg1;
- (id)pipelineState;
- (id)shaderWithBlendMode:(long long)arg1;

@end
