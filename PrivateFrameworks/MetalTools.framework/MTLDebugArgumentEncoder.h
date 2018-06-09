/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugArgumentEncoder : MTLToolsArgumentEncoder {
    <MTLBuffer> * _currentBuffer;
    unsigned long long  _currentOffset;
    struct StructType { struct vector<MemberRef, std::__1::allocator<MemberRef> > { struct MemberRef {} *x_1_1_1; struct MemberRef {} *x_1_1_2; struct __compressed_pair<MemberRef *, std::__1::allocator<MemberRef> > { struct MemberRef {} *x_3_2_1; } x_1_1_3; } x1; } * _reflectionParser;
}

- (void*)constantDataAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithBaseObject:(id)arg1 structType:(id)arg2 parent:(id)arg3;
- (void)setArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (void)setArgumentBuffer:(id)arg1 startOffset:(unsigned long long)arg2 arrayElement:(unsigned long long)arg3;
- (void)setArgumentBuffer:(id)arg1 startOffset:(unsigned long long)arg2 elementIndex:(unsigned long long)arg3;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setComputePipelineState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setComputePipelineStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setIndirectCommandBuffer:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setIndirectCommandBuffers:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setRenderPipelineState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setRenderPipelineStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end
