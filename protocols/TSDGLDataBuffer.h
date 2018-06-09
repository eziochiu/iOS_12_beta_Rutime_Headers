/* made by EzioChiu.
 */

@protocol TSDGLDataBuffer <NSObject, TSDGLDataBufferAccessor, TSDGPUDataBufferSharedAccessors>

@required

+ (<TSDGLDataBuffer> *)newDataBufferWithVertexAttributes:(NSArray *)arg1 meshSize:(struct CGSize { double x1; double x2; })arg2;
+ (<TSDGLDataBuffer> *)newDataBufferWithVertexAttributes:(NSArray *)arg1 quadParticleCount:(unsigned long long)arg2;
+ (<TSDGLDataBuffer> *)newDataBufferWithVertexAttributes:(NSArray *)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3;
+ (<TSDGLDataBuffer> *)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (<TSDGLDataBuffer> *)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { double x1; double x2; })arg3;
+ (<TSDGLDataBuffer> *)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { double x1; double x2; })arg3 textureFlipped:(bool)arg4 includeCenterAttribute:(bool)arg5;
+ (<TSDGLDataBuffer> *)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 textureFlipped:(bool)arg3;

- (unsigned short)GLushortForIndexElement:(unsigned long long)arg1;
- (void)disableDataBufferWithShader:(TSDGLShader *)arg1;
- (void)disableGLElementArrayBuffer;
- (void)drawWithShader:(TSDGLShader *)arg1;
- (void)drawWithShader:(TSDGLShader *)arg1 advanceDynamicBuffer:(bool)arg2;
- (void)drawWithShader:(TSDGLShader *)arg1 deactivateShaderWhenDone:(bool)arg2;
- (void)drawWithShader:(TSDGLShader *)arg1 deactivateShaderWhenDone:(bool)arg2 advanceDynamicBuffer:(bool)arg3;
- (void)drawWithShader:(TSDGLShader *)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 deactivateShaderWhenDone:(bool)arg3;
- (void)drawWithShader:(TSDGLShader *)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 deactivateShaderWhenDone:(bool)arg3 advanceDynamicBuffer:(bool)arg4;
- (void)enableDataBufferWithShader:(TSDGLShader *)arg1;
- (void)enableGLElementArrayBuffer;
- (id)initWithVertexAttributes:(NSArray *)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 bufferCount:(unsigned long long)arg4;
- (id)initWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { double x1; double x2; })arg3 textureFlipped:(bool)arg4 includeCenterAttribute:(bool)arg5;
- (void)setDataForAttribute:(TSDGLDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2 fromAttribute:(TSDGLDataBufferAttribute *)arg3 dataBuffer:(id <TSDGLDataBuffer>)arg4 index:(unsigned long long)arg5;
- (void)setGLushort:(unsigned short)arg1 forIndexElement:(unsigned long long)arg2;
- (void)teardown;
- (void)updateDataBufferAttributes:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct { long long x1; unsigned long long x2; bool x3; char *x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; struct _NSRange { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; unsigned long long x10; }*, unsigned long long, void*
- (TSDGLDataBufferAttribute *)vertexAttributeNamed:(NSString *)arg1;

@end
