/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugIndirectRenderCommand : MTLToolsIndirectRenderCommand {
    MTLIndirectCommandBufferDescriptor * _desc;
    <MTLIndirectCommandBufferSPI> * _iCB;
    unsigned long long  _index;
}

@property (readonly) unsigned long long index;
@property (readonly) <MTLIndirectCommandBuffer> *indirectCommandBuffer;

- (void)dealloc;
- (void)drawIndexedPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 controlPointIndexBuffer:(id)arg6 controlPointIndexBufferOffset:(unsigned long long)arg7 instanceCount:(unsigned long long)arg8 baseInstance:(unsigned long long)arg9 tessellationFactorBuffer:(id)arg10 tessellationFactorBufferOffset:(unsigned long long)arg11 tessellationFactorBufferInstanceStride:(unsigned long long)arg12;
- (void)drawIndexedPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 controlPointIndexBuffer:(id)arg6 controlPointIndexBufferOffset:(unsigned long long)arg7 instanceCount:(unsigned long long)arg8 baseInstance:(unsigned long long)arg9 tessellationFactorBuffer:(id)arg10 tessellationFactorBufferOffset:(unsigned long long)arg11 tessellationFactorBufferInstanceStride:(unsigned long long)arg12 tessellationFactorBufferScale:(float)arg13;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8;
- (void)drawPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseInstance:(unsigned long long)arg7 tessellationFactorBuffer:(id)arg8 tessellationFactorBufferOffset:(unsigned long long)arg9 tessellationFactorBufferInstanceStride:(unsigned long long)arg10;
- (void)drawPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseInstance:(unsigned long long)arg7 tessellationFactorBuffer:(id)arg8 tessellationFactorBufferOffset:(unsigned long long)arg9 tessellationFactorBufferInstanceStride:(unsigned long long)arg10 tessellationFactorBufferScale:(float)arg11;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5;
- (unsigned long long)index;
- (id)indirectCommandBuffer;
- (id)initWithBaseObject:(id)arg1 descriptor:(id)arg2 indexCount:(unsigned long long)arg3 indirectCommandBuffer:(id)arg4;
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setRenderPipelineState:(id)arg1;
- (void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;

@end
