/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFramebufferGaussianBlurAndBlendPipeline : TSCH3DFramebufferGaussianBlurPipeline {
    float  mBlendFactor;
    TSCH3DGLFramebuffer * mBlendTexture;
}

@property (nonatomic) float blendFactor;
@property (nonatomic, retain) TSCH3DGLFramebuffer *blendTexture;

+ (id)effectsArray;

- (float)blendFactor;
- (id)blendTexture;
- (void)dealloc;
- (void)setBlendFactor:(float)arg1;
- (void)setBlendTexture:(id)arg1;
- (void)updateShaderEffectsStates;

@end
