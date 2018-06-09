/* made by EzioChiu.
 */

@protocol MTLIndirectRenderCommand <NSObject>

@required

- (void)drawIndexedPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id <MTLBuffer>)arg4 patchIndexBufferOffset:(unsigned long long)arg5 controlPointIndexBuffer:(id <MTLBuffer>)arg6 controlPointIndexBufferOffset:(unsigned long long)arg7 instanceCount:(unsigned long long)arg8 baseInstance:(unsigned long long)arg9 tessellationFactorBuffer:(id <MTLBuffer>)arg10 tessellationFactorBufferOffset:(unsigned long long)arg11 tessellationFactorBufferInstanceStride:(unsigned long long)arg12;
- (void)drawIndexedPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id <MTLBuffer>)arg4 patchIndexBufferOffset:(unsigned long long)arg5 controlPointIndexBuffer:(id <MTLBuffer>)arg6 controlPointIndexBufferOffset:(unsigned long long)arg7 instanceCount:(unsigned long long)arg8 baseInstance:(unsigned long long)arg9 tessellationFactorBuffer:(id <MTLBuffer>)arg10 tessellationFactorBufferOffset:(unsigned long long)arg11 tessellationFactorBufferInstanceStride:(unsigned long long)arg12 tessellationFactorBufferScale:(float)arg13;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id <MTLBuffer>)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8;
- (void)drawPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id <MTLBuffer>)arg4 patchIndexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseInstance:(unsigned long long)arg7 tessellationFactorBuffer:(id <MTLBuffer>)arg8 tessellationFactorBufferOffset:(unsigned long long)arg9 tessellationFactorBufferInstanceStride:(unsigned long long)arg10;
- (void)drawPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id <MTLBuffer>)arg4 patchIndexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseInstance:(unsigned long long)arg7 tessellationFactorBuffer:(id <MTLBuffer>)arg8 tessellationFactorBufferOffset:(unsigned long long)arg9 tessellationFactorBufferInstanceStride:(unsigned long long)arg10 tessellationFactorBufferScale:(float)arg11;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5;
- (void)reset;
- (void)setFragmentBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setRenderPipelineState:(id <MTLRenderPipelineState>)arg1;
- (void)setVertexBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;

@end
