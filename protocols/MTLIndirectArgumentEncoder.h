/* made by EzioChiu.
 */

@protocol MTLIndirectArgumentEncoder <NSObject>

@required

- (unsigned long long)alignment;
- (void*)constantDataAtIndex:(unsigned long long)arg1;
- (<MTLDevice> *)device;
- (unsigned long long)encodedLength;
- (NSString *)label;
- (void)setBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setIndirectArgumentBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2;
- (void)setIndirectArgumentBuffer:(id <MTLBuffer>)arg1 startOffset:(unsigned long long)arg2 arrayElement:(unsigned long long)arg3;
- (void)setLabel:(NSString *)arg1;
- (void)setRenderPipelineState:(id <MTLRenderPipelineState>)arg1 atIndex:(unsigned long long)arg2;
- (void)setRenderPipelineStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setSamplerState:(id <MTLSamplerState>)arg1 atIndex:(unsigned long long)arg2;
- (void)setSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setTexture:(id <MTLTexture>)arg1 atIndex:(unsigned long long)arg2;
- (void)setTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end
