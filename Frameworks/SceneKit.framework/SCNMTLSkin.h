/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMTLSkin : NSObject {
    SCNMTLComputePipeline * _computePS;
    MTLStageInputOutputDescriptor * _computeStageDesc;
    bool  _needNormal;
    bool  _needTangent;
    <MTLBuffer> * _skinIndicesBuffer;
    <MTLBuffer> * _skinWeightsBuffer;
    unsigned int  _vertexCount;
}

- (void)dealloc;
- (id)initWithSkinner:(struct __C3DSkinner { }*)arg1 baseMesh:(struct __C3DMesh { }*)arg2 baseGeometry:(struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct { /* ? */ } *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned char x_10_1_1; bool x_10_1_2; struct { bool x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_10_1_3; struct __C3DMeshElement {} *x_10_1_4; struct __C3DMeshSource {} *x_10_1_5; struct __C3DMesh {} *x_10_1_6; void *x_10_1_7; void *x_10_1_8; } x10; struct { unsigned char x_11_1_1; float x_11_1_2; unsigned int x_11_1_3; unsigned char x_11_1_4; union { struct { float x_1_3_1; float x_1_3_2; } x_5_2_1; struct { float x_2_3_1; } x_5_2_2; struct { float x_3_3_1; } x_5_2_3; struct { unsigned char x_4_3_1; unsigned int x_4_3_2 : 1; unsigned int x_4_3_3 : 1; } x_5_2_4; } x_11_1_5; } x11; }*)arg3 resourceManager:(id)arg4;
- (void)skinMesh:(id)arg1 with:(id)arg2 skinner:(struct __C3DSkinner { }*)arg3 renderContext:(id)arg4;

@end
