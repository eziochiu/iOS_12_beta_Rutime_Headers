/* made by EzioChiu.
 */

@protocol NUGLFramebufferAttachable

@required

- (void)attachToFramebuffer:(NUGLFramebuffer *)arg1 atPoint:(unsigned int)arg2 context:(NUGLContext *)arg3;
- (void)detachFromFramebuffer:(NUGLFramebuffer *)arg1 atPoint:(unsigned int)arg2 context:(NUGLContext *)arg3;

@end
