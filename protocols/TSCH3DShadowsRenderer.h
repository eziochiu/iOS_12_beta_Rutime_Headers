/* made by EzioChiu.
 */

@protocol TSCH3DShadowsRenderer

@required

- (float)blurSlackForQuality:(float)arg1;
- (void)invalidate;
- (void)protectShadowForQuality:(void *)arg1 pipeline:(void *)arg2 renderBlock:(void *)arg3; // needs 3 arg types, found 8: float, TSCH3DSceneRenderPipeline *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TSCH3DGLFramebuffer *, void*
- (TSCH3DGLFramebuffer *)shadowsFBOForContext:(TSCH3DGLContext *)arg1;
- (void)unprotectShadowInSession:(TSCH3DSession *)arg1;

@end
