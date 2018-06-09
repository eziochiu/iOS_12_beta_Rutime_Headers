/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUGLRenderbuffer : NUGLObject <NUGLFramebufferAttachable> {
    <EAGLDrawable> * _drawable;
    NUPixelFormat * _format;
    struct { 
        long long width; 
        long long height; 
    }  _size;
}

@property (nonatomic, readonly) NUPixelFormat *format;
@property (nonatomic, readonly) struct { long long x1; long long x2; } size;

- (void).cxx_destruct;
- (void)attachToFramebuffer:(id)arg1 atPoint:(unsigned int)arg2 context:(id)arg3;
- (void)copyRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1 toBuffer:(id)arg2 atPoint:(struct { long long x1; long long x2; })arg3 context:(id)arg4;
- (void)delete;
- (void)detachFromFramebuffer:(id)arg1 atPoint:(unsigned int)arg2 context:(id)arg3;
- (void)draw:(id)arg1 block:(id /* block */)arg2;
- (void)flushDrawableWithContext:(id)arg1;
- (id)format;
- (void)generate:(id)arg1;
- (id)init;
- (id)initWithDrawable:(id)arg1;
- (id)initWithSize:(struct { long long x1; long long x2; })arg1 format:(id)arg2;
- (void)read:(id)arg1 block:(id /* block */)arg2;
- (struct { long long x1; long long x2; })size;

@end
