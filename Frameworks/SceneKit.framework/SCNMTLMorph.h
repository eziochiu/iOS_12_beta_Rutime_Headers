/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMTLMorph : NSObject {
    struct { 
        char *memory; 
        <MTLBuffer> *buffer; 
        unsigned long long offset; 
    }  _baseBuffer;
    unsigned int  _baseBufferStride;
    short  _baseBufferTypes;
    unsigned int  _baseBufferTypesCount;
    unsigned int  _baseVertexCount;
    SCNMTLComputePipeline * _blendCPS;
    SCNMTLComputePipeline * _blendSparseCPS;
    struct SCNMTLBufferPool { id x1; id x2; struct vector<SCNMTLBufferPool::Buffer, std::__1::allocator<SCNMTLBufferPool::Buffer> > { struct Buffer {} *x_3_1_1; struct Buffer {} *x_3_1_2; struct __compressed_pair<SCNMTLBufferPool::Buffer *, std::__1::allocator<SCNMTLBufferPool::Buffer> > { struct Buffer {} *x_3_2_1; } x_3_1_3; } x3; unsigned int x4; unsigned int x5; id x6; unsigned long long x7; unsigned long long x8; } * _bufferPool;
    SCNMTLComputePipeline * _copyCPS;
    unsigned char  _dataKindForMorphing;
    unsigned int  _dstSemanticUsageMask;
    NSArray * _originalTargets;
    struct { 
        <MTLBuffer> *perVertexTrianglesOffsets; 
        <MTLBuffer> *perVertexTrianglesIndices; 
        bool sharedTriangleIs16Bits; 
    }  _postUnifyInfo;
    SCNMTLResourceManager * _resourceManager;
    bool  _shouldMorphNormals;
    SCNMTLComputePipeline * _splatCPS;
    <MTLBuffer> * _splatProvokingVertices;
    unsigned int  _srcSemanticUsageMask;
    unsigned int  _targetBufferStride;
    short  _targetBufferTypes;
    unsigned int  _targetBufferTypesCount;
    unsigned long long  _targetCount;
    struct Target { struct { char *x_1_1_1; id x_1_1_2; } x1; unsigned int x2; float x3; struct __C3DMeshSource {} *x4[3]; struct { char *x_5_1_1; id x_5_1_2; } x5; } * _targets;
    bool  _unifyPostMorphNormals;
}

- (void)_prepareTargetDataForIndex:(long long)arg1 morph:(struct __C3DMorph { }*)arg2 baseMesh:(struct __C3DMesh { }*)arg3;
- (void)_writeSources:(const struct __C3DMeshSource {}**)arg1 dstTypes:(short*)arg2 sourcesCount:(unsigned int)arg3 inBuffer:(void*)arg4 stride:(unsigned int)arg5 length:(unsigned long long)arg6 sparse:(bool)arg7 positionScale:(float)arg8;
- (void)dealloc;
- (id)initWithMorph:(struct __C3DMorph { }*)arg1 baseGeometry:(struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct { /* ? */ } *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned char x_10_1_1; bool x_10_1_2; struct { bool x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_10_1_3; struct __C3DMeshElement {} *x_10_1_4; struct __C3DMeshSource {} *x_10_1_5; struct __C3DMesh {} *x_10_1_6; void *x_10_1_7; void *x_10_1_8; } x10; struct { unsigned char x_11_1_1; float x_11_1_2; unsigned int x_11_1_3; unsigned char x_11_1_4; union { struct { float x_1_3_1; float x_1_3_2; } x_5_2_1; struct { float x_2_3_1; } x_5_2_2; struct { float x_3_3_1; } x_5_2_3; struct { unsigned char x_4_3_1; unsigned int x_4_3_2 : 1; unsigned int x_4_3_3 : 1; } x_5_2_4; } x_11_1_5; } x11; }*)arg2 resourceManager:(id)arg3;
- (bool)isCompatibleWithMorph:(struct __C3DMorph { }*)arg1;
- (void)morphIncrementalMesh:(id)arg1 morpher:(struct __C3DMorpher { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DGeometry {} *x2; struct __C3DMorph {} *x3; struct __C3DMesh {} *x4; unsigned int x5; unsigned int x6; float *x7; unsigned int x8; unsigned int x9; }*)arg2 renderContext:(id)arg3;
- (void)morphMesh:(id)arg1 morph:(struct __C3DMorph { }*)arg2 renderContext:(id)arg3;
- (void)morphSparseMesh:(id)arg1 morpher:(struct __C3DMorpher { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DGeometry {} *x2; struct __C3DMorph {} *x3; struct __C3DMesh {} *x4; unsigned int x5; unsigned int x6; float *x7; unsigned int x8; unsigned int x9; }*)arg2 renderContext:(id)arg3;
- (struct { char *x1; id x2; })newBufferWithLength:(unsigned long long)arg1;
- (unsigned int)sparseIndexSize;
- (void)unifyMesh:(id)arg1 renderContext:(id)arg2;

@end
