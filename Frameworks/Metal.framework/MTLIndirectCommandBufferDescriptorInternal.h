/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIndirectCommandBufferDescriptorInternal : MTLIndirectCommandBufferDescriptor {
    unsigned long long  _commandTypes;
    bool  _inheritBuffers;
    bool  _inheritPipelineState;
    unsigned long long  _maxFragmentBufferBindCount;
    unsigned long long  _maxKernelBufferBindCount;
    unsigned long long  _maxVertexBufferBindCount;
}

- (unsigned long long)commandTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)inheritBuffers;
- (bool)inheritPipelineState;
- (id)init;
- (unsigned long long)maxFragmentBufferBindCount;
- (unsigned long long)maxVertexBufferBindCount;
- (void)setCommandTypes:(unsigned long long)arg1;
- (void)setInheritBuffers:(bool)arg1;
- (void)setInheritPipelineState:(bool)arg1;
- (void)setMaxFragmentBufferBindCount:(unsigned long long)arg1;
- (void)setMaxVertexBufferBindCount:(unsigned long long)arg1;

@end
