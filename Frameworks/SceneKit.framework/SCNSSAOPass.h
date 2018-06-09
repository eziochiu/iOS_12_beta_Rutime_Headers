/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNSSAOPass : NSObject {
    bool  _VRRendering;
    SCNMTLRenderPipeline * _aoPipeline;
    SCNRenderTarget * _aoRenderTarget;
    <MTLTexture> * _aoTexture;
    SCNMTLComputePipeline * _blurXPipelineState;
    SCNMTLComputePipeline * _blurYPipelineState;
    bool  _cameraOrtho;
    <MTLTexture> * _depthMinMaxOffsetTexture;
    unsigned long long  _downsample;
    SCNMTLComputePipeline * _downsamplePipelineState;
    unsigned long long  _frameBufferFormat;
    unsigned long long  _frameBufferHeight;
    unsigned long long  _frameBufferWidth;
    unsigned long long  _sampleCount;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*projectionInfo; 
    }  _uniforms;
    SCNMTLComputePipeline * _upsamplingPipelineState;
}

- (void)_createFramebufferDependantResourcesWithRenderContext:(id)arg1 renderPassDesc:(id)arg2 camera:(struct __C3DCamera { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; unsigned int x_2_1_4 : 1; unsigned int x_2_1_5 : 1; unsigned int x_2_1_6 : 1; unsigned int x_2_1_7 : 1; double x_2_1_8; double x_2_1_9; double x_2_1_10; float x_2_1_11; double x_2_1_12; union C3DMatrix4x4 { float x_13_2_1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_13_2_2[4]; void*x_13_2_3; } x_2_1_13; struct { void*x_14_2_1[4]; void*x_14_2_2[4]; } x_2_1_14; void*x_2_1_15; float x_2_1_16; float x_2_1_17; float x_2_1_18; float x_2_1_19; float x_2_1_20; float x_2_1_21; float x_2_1_22; float x_2_1_23; float x_2_1_24; float x_2_1_25; float x_2_1_26; float x_2_1_27; int x_2_1_28; float x_2_1_29; float x_2_1_30; float x_2_1_31; float x_2_1_32; float x_2_1_33; float x_2_1_34; float x_2_1_35; float x_2_1_36; float x_2_1_37; struct { float x_38_2_1; float x_38_2_2; float x_38_2_3; float x_38_2_4; float x_38_2_5; int x_38_2_6; int x_38_2_7; } x_2_1_38; struct __C3DEffectSlot {} *x_2_1_39; unsigned long long x_2_1_40; } x2; }*)arg3 passInstance:(struct __C3DFXPassInstance { struct __C3DFXPass {} *x1; long long x2; struct __C3DFXPassInstance {} *x3; unsigned char x4; bool x5; unsigned char x6; struct __C3DArray {} *x7[6]; struct __C3DCullingContext { struct __C3DEnginePipeline {} *x_8_1_1; struct { union { struct { float x_1_4_1; float x_1_4_2; float x_1_4_3; float x_1_4_4; } x_1_3_1; } x_2_2_1[6]; } x_8_1_2[6]; union C3DMatrix4x4 { float x_3_2_1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_2[4]; void*x_3_2_3; } x_8_1_3[6]; union C3DMatrix4x4 { float x_4_2_1[16]; void*x_4_2_2[4]; void*x_4_2_3; } x_8_1_4[6]; union C3DMatrix4x4 { float x_5_2_1[16]; void*x_5_2_2[4]; void*x_5_2_3; } x_8_1_5[6]; union C3DMatrix4x4 { float x_6_2_1[16]; void*x_6_2_2[4]; void*x_6_2_3; } x_8_1_6[6]; struct { union { struct { float x_1_4_1; float x_1_4_2; float x_1_4_3; float x_1_4_4; } x_1_3_1; } x_7_2_1[6]; } x_8_1_7[6]; union C3DMatrix4x4 { float x_8_2_1[16]; void*x_8_2_2[4]; void*x_8_2_3; } x_8_1_8[6]; union C3DMatrix4x4 { float x_9_2_1[16]; void*x_9_2_2[4]; void*x_9_2_3; } x_8_1_9[6]; union C3DMatrix4x4 { float x_10_2_1[16]; void*x_10_2_2[4]; void*x_10_2_3; } x_8_1_10[6]; union C3DMatrix4x4 { float x_11_2_1[16]; void*x_11_2_2[4]; void*x_11_2_3; } x_8_1_11[6]; } x8; }*)arg4;
- (void)dealloc;
- (void)executeWithContext:(struct { struct __C3DFXPass {} *x1; struct __C3DFXTechnique {} *x2; void *x3; struct __C3DEngineContext {} *x4; struct __C3DFXProgramObject {} *x5; double x6; void *x7; struct __C3DRendererElement {} *x8; long long x9; }*)arg1;
- (void)setupWithContext:(struct { struct __C3DFXPass {} *x1; struct __C3DFXTechnique {} *x2; void *x3; struct __C3DEngineContext {} *x4; struct __C3DFXProgramObject {} *x5; double x6; void *x7; struct __C3DRendererElement {} *x8; long long x9; }*)arg1;

@end
