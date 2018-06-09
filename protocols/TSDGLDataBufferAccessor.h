/* made by EzioChiu.
 */

@protocol TSDGLDataBufferAccessor <NSObject>

@required

- (struct { float x1; float x2; })GLPoint2DForAttribute:(TSDGLDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
- (struct { float x1; float x2; float x3; })GLPoint3DForAttribute:(TSDGLDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
- (struct { float x1; float x2; float x3; float x4; })GLPoint4DForAttribute:(TSDGLDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
- (float)GLfloatForAttribute:(TSDGLDataBufferAttribute *)arg1 atIndex:(unsigned long long)arg2;
- (void)setCGFloat:(double)arg1 forAttribute:(TSDGLDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLPoint2D:(struct { float x1; float x2; })arg1 forAttribute:(TSDGLDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLPoint3D:(struct { float x1; float x2; float x3; })arg1 forAttribute:(TSDGLDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLPoint4D:(struct { float x1; float x2; float x3; float x4; })arg1 forAttribute:(TSDGLDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLfloat:(float)arg1 forAttribute:(TSDGLDataBufferAttribute *)arg2 atIndex:(unsigned long long)arg3;

@end
