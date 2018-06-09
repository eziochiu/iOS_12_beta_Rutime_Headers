/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSceneRenderPipeline : TSCH3DRenderPipeline {
    TSCH3DCamera * mCamera;
    TSCH3DGLFramebuffer * mFramebuffer;
    TSCH3DSceneRenderPipeline * mOriginal;
    NSNumber * mPreserveFramebufferContent;
    NSNumber * mSamples;
    NSNumber * mScale;
    TSCH3DScene * mScene;
    TSCH3DSceneRenderSetup * mSetup;
    NSNumber * mSuperSamples;
}

@property (nonatomic, readonly) TSCH3DCamera *camera;
@property (nonatomic, retain) TSCH3DGLFramebuffer *framebuffer;
@property (nonatomic, retain) TSCH3DSceneRenderPipeline *original;
@property (nonatomic) bool preserveFramebufferContent;
@property (nonatomic, readonly) float renderScale;
@property (nonatomic) float samples;
@property (nonatomic) float scale;
@property (nonatomic, retain) TSCH3DScene *scene;
@property (nonatomic, retain) TSCH3DSceneRenderSetup *setup;
@property (nonatomic) float superSamples;

+ (id)pipelineWithProcessor:(id)arg1 session:(id)arg2 scene:(id)arg3;

- (bool)activateFramebuffer:(id)arg1;
- (struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })backgroundClearColor;
- (id)baseRecloneWithProcessor:(id)arg1 scene:(id)arg2;
- (id)baseRecloneWithRetargetProcessor:(id)arg1 scene:(id)arg2;
- (id)camera;
- (void)clearCamera;
- (void)clearFramebuffer;
- (id)cloneWithProcessor:(id)arg1 scene:(id)arg2;
- (id)cloneWithRetargetProcessor:(id)arg1 scene:(id)arg2;
- (id)concreteSetup;
- (void)dealloc;
- (id)framebuffer;
- (id)initWithProcessor:(id)arg1 session:(id)arg2 scene:(id)arg3;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1;
- (id)labelsMeshRendererForLabelsRenderer:(id)arg1;
- (id)original;
- (bool)preserveFramebufferContent;
- (id)processor;
- (id)recloneWithPipelineClass:(Class)arg1 processor:(id)arg2 scene:(id)arg3;
- (id)recloneWithPipelineClass:(Class)arg1 retargetProcessor:(id)arg2 scene:(id)arg3;
- (bool)render;
- (float)renderScale;
- (void)renderSelector:(SEL)arg1;
- (bool)renderWithFramebuffer:(id)arg1;
- (bool)run;
- (float)samples;
- (float)scale;
- (id)scene;
- (id)session;
- (void)setFramebuffer:(id)arg1;
- (void)setObjectRenderMode:(int)arg1;
- (void)setOriginal:(id)arg1;
- (void)setPreserveFramebufferContent:(bool)arg1;
- (void)setSamples:(float)arg1;
- (void)setScale:(float)arg1;
- (void)setScene:(id)arg1;
- (void)setSetup:(id)arg1;
- (void)setSuperSamples:(float)arg1;
- (id)setup;
- (void)setupCamera:(id)arg1;
- (void)setupRendering;
- (bool)shouldSkipLabelsIfHidden;
- (float)superSamples;

@end
