/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPostProcessPass : NSObject {
    void _VRscaleBias;
    SCNMTLComputePipeline * _adaptativeLuminancePipelineState;
    <MTLBuffer> * _autoExposureParametersBuffer;
    <MTLTexture> * _averageLumTexture;
    SCNMTLRenderPipeline * _bloomBlurPipelineState;
    <MTLTexture> * _bloomTextureA;
    <MTLTexture> * _bloomTextureB;
    <MTLTexture> * _dofBlurTexture;
    <MTLTexture> * _dofCoCTextureA;
    <MTLTexture> * _dofCoCTextureB;
    <MTLTexture> * _dofColorCoCTexture;
    <MTLBuffer> * _dofKernel;
    SCNMTLComputePipeline * _dofPipelineState;
    int  _dofSampleCount;
    SCNMTLComputePipeline * _downSampleBloomDOFPipelineState;
    SCNMTLComputePipeline * _fixedLuminancePipelineState;
    unsigned long long  _frameBufferFormat;
    unsigned long long  _frameBufferHeight;
    unsigned long long  _frameBufferWidth;
    unsigned int  _frameIndex;
    <MTLTexture> * _frameLumTexture;
    SCNMTLComputePipeline * _frameLuminanceCS;
    SCNMTLRenderPipeline * _frameLuminancePipelineState;
    SCNMTLRenderPipeline * _mbBlurPipelineState;
    <MTLTexture> * _mbColor;
    <MTLTexture> * _mbNeighborMax;
    <MTLTexture> * _mbTexture;
    <MTLTexture> * _mbTileMax;
    SCNMTLComputePipeline * _mbVelocityPipelineState;
    unsigned long long  _postProcessConstants;
    SCNMTLRenderPipeline * _postProcessPipelineState;
    float  _scaleFactor;
    SCNMTLComputePipeline * _slidingLuminancePipelineState;
    void _viewport;
}

- (unsigned int)_computeBloomBlurUniforms:(void *)arg1 textureSize:(void *)arg2 radius:(void *)arg3 horizontal:(void *)arg4; // needs 4 arg types, found 3: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[16]; }*, float, bool
- (void)_computeDofUniforms:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; int x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; unsigned int x21; unsigned int x22; float x23; int x24; float x25; float x26; }*)arg1 camera:(struct __C3DCamera { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; unsigned int x_2_1_4 : 1; unsigned int x_2_1_5 : 1; unsigned int x_2_1_6 : 1; unsigned int x_2_1_7 : 1; double x_2_1_8; double x_2_1_9; double x_2_1_10; float x_2_1_11; double x_2_1_12; union C3DMatrix4x4 { float x_13_2_1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_13_2_2[4]; void*x_13_2_3; } x_2_1_13; struct { void*x_14_2_1[4]; void*x_14_2_2[4]; } x_2_1_14; void*x_2_1_15; float x_2_1_16; float x_2_1_17; float x_2_1_18; float x_2_1_19; float x_2_1_20; float x_2_1_21; float x_2_1_22; float x_2_1_23; float x_2_1_24; float x_2_1_25; float x_2_1_26; float x_2_1_27; int x_2_1_28; float x_2_1_29; float x_2_1_30; float x_2_1_31; float x_2_1_32; float x_2_1_33; float x_2_1_34; float x_2_1_35; float x_2_1_36; float x_2_1_37; struct { float x_38_2_1; float x_38_2_2; float x_38_2_3; float x_38_2_4; float x_38_2_5; int x_38_2_6; int x_38_2_7; } x_2_1_38; struct __C3DEffectSlot {} *x_2_1_39; unsigned long long x_2_1_40; } x2; }*)arg2 cullingContext:(struct __C3DCullingContext { struct __C3DEnginePipeline {} *x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; } x_2_1_1[6]; } x2[6]; union C3DMatrix4x4 { float x_3_1_1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_1_2[4]; void*x_3_1_3; } x3[6]; union C3DMatrix4x4 { float x_4_1_1[16]; void*x_4_1_2[4]; void*x_4_1_3; } x4[6]; union C3DMatrix4x4 { float x_5_1_1[16]; void*x_5_1_2[4]; void*x_5_1_3; } x5[6]; union C3DMatrix4x4 { float x_6_1_1[16]; void*x_6_1_2[4]; void*x_6_1_3; } x6[6]; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; } x_7_1_1[6]; } x7[6]; union C3DMatrix4x4 { float x_8_1_1[16]; void*x_8_1_2[4]; void*x_8_1_3; } x8[6]; union C3DMatrix4x4 { float x_9_1_1[16]; void*x_9_1_2[4]; void*x_9_1_3; } x9[6]; union C3DMatrix4x4 { float x_10_1_1[16]; void*x_10_1_2[4]; void*x_10_1_3; } x10[6]; union C3DMatrix4x4 { float x_11_1_1[16]; void*x_11_1_2[4]; void*x_11_1_3; } x11[6]; union C3DMatrix4x4 { float x_12_1_1[16]; void*x_12_1_2[4]; void*x_12_1_3; } x12[6]; }*)arg3 passInstance:(struct __C3DFXPassInstance { struct __C3DFXPass {} *x1; long long x2; struct __C3DFXPassInstance {} *x3; unsigned char x4; bool x5; unsigned char x6; struct __C3DArray {} *x7[6]; struct __C3DCullingContext { struct __C3DEnginePipeline {} *x_8_1_1; struct { union { struct { float x_1_4_1; float x_1_4_2; float x_1_4_3; float x_1_4_4; } x_1_3_1; } x_2_2_1[6]; } x_8_1_2[6]; union C3DMatrix4x4 { float x_3_2_1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_2[4]; void*x_3_2_3; } x_8_1_3[6]; union C3DMatrix4x4 { float x_4_2_1[16]; void*x_4_2_2[4]; void*x_4_2_3; } x_8_1_4[6]; union C3DMatrix4x4 { float x_5_2_1[16]; void*x_5_2_2[4]; void*x_5_2_3; } x_8_1_5[6]; union C3DMatrix4x4 { float x_6_2_1[16]; void*x_6_2_2[4]; void*x_6_2_3; } x_8_1_6[6]; struct { union { struct { float x_1_4_1; float x_1_4_2; float x_1_4_3; float x_1_4_4; } x_1_3_1; } x_7_2_1[6]; } x_8_1_7[6]; union C3DMatrix4x4 { float x_8_2_1[16]; void*x_8_2_2[4]; void*x_8_2_3; } x_8_1_8[6]; union C3DMatrix4x4 { float x_9_2_1[16]; void*x_9_2_2[4]; void*x_9_2_3; } x_8_1_9[6]; union C3DMatrix4x4 { float x_10_2_1[16]; void*x_10_2_2[4]; void*x_10_2_3; } x_8_1_10[6]; union C3DMatrix4x4 { float x_11_2_1[16]; void*x_11_2_2[4]; void*x_11_2_3; } x_8_1_11[6]; } x8; }*)arg4 fxContext:(struct __C3DFXContext { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __C3DFXTechnique {} *x2; struct __C3DFXTechnique {} *x3; struct { struct __C3DFXTechnique {} *x_4_1_1; struct __C3DFXTechnique {} *x_4_1_2; struct __C3DFXTechnique {} *x_4_1_3; struct __C3DFXTechnique {} *x_4_1_4; struct __C3DFXTechnique {} *x_4_1_5; struct __C3DFXTechnique {} *x_4_1_6; struct __C3DFXTechnique {} **x_4_1_7; struct __C3DFXTechnique {} *x_4_1_8; long long x_4_1_9; } x4; unsigned char x5; unsigned int x6; unsigned char x7; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; struct __C3DRenderTarget {} *x14; struct __C3DRenderTarget {} *x15; struct { struct __C3DFramebuffer {} *x_16_1_1; struct __C3DFramebuffer {} *x_16_1_2; struct __C3DFXPass {} *x_16_1_3; bool x_16_1_4; bool x_16_1_5; } x16; long long x17; long long x18; struct __C3DNode {} *x19; struct __C3DFXPassInstance {} **x20; struct __C3DAllocator {} *x21; long long x22; }*)arg5 engineContext:(struct __C3DEngineContext { }*)arg6;
- (void)_createFramebufferDependantResourcesWithRenderContext:(id)arg1 renderPassDesc:(id)arg2 postProcessConstants:(unsigned long long)arg3;
- (void)dealloc;
- (void)executeWithContext:(struct { struct __C3DFXPass {} *x1; struct __C3DFXTechnique {} *x2; void *x3; struct __C3DEngineContext {} *x4; struct __C3DFXProgramObject {} *x5; double x6; void *x7; struct __C3DRendererElement {} *x8; long long x9; }*)arg1;
- (void)setupWithContext:(struct { struct __C3DFXPass {} *x1; struct __C3DFXTechnique {} *x2; void *x3; struct __C3DEngineContext {} *x4; struct __C3DFXProgramObject {} *x5; double x6; void *x7; struct __C3DRendererElement {} *x8; long long x9; }*)arg1;

@end
