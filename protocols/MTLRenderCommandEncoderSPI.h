/* made by EzioChiu.
 */

@protocol MTLRenderCommandEncoderSPI <MTLRenderCommandEncoder>

@required

- (void)addSplitHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLRenderCommandEncoderSPI> *, unsigned long long, void*
- (bool)isMemorylessRender;
- (void)setDepthClipModeSPI:(unsigned long long)arg1;
- (void)setFragmentTexture:(id <MTLTexture>)arg1 atTextureIndex:(unsigned long long)arg2 samplerState:(id <MTLSamplerState>)arg3 atSamplerIndex:(unsigned long long)arg4;
- (void)setLineWidth:(float)arg1;

@optional

- (void)setAlphaTestReferenceValue:(float)arg1;
- (void)setClipPlane:(float)arg1 p2:(float)arg2 p3:(float)arg3 p4:(float)arg4 atIndex:(unsigned long long)arg5;
- (void)setColorResolveTexture:(id <MTLTexture>)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 atIndex:(unsigned long long)arg5;
- (void)setColorResolveTexture:(id <MTLTexture>)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(bool)arg5 atIndex:(unsigned long long)arg6;
- (void)setCommandDataCorruptModeSPI:(unsigned long long)arg1;
- (void)setDepthCleared;
- (void)setDepthResolveTexture:(id <MTLTexture>)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4;
- (void)setDepthResolveTexture:(id <MTLTexture>)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(bool)arg5;
- (void)setFragmentSamplerState:(id <MTLSamplerState>)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 lodBias:(float)arg4 atIndex:(unsigned long long)arg5;
- (void)setPointSize:(float)arg1;
- (void)setPrimitiveRestartEnabled:(bool)arg1;
- (void)setPrimitiveRestartEnabled:(bool)arg1 index:(unsigned long long)arg2;
- (void)setProvokingVertexMode:(unsigned long long)arg1;
- (void)setStencilCleared;
- (void)setVertexSamplerState:(id <MTLSamplerState>)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 lodBias:(float)arg4 atIndex:(unsigned long long)arg5;
- (void)setViewportTransformEnabled:(bool)arg1;

@end
