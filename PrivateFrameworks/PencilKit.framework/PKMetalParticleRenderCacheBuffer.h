/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKMetalParticleRenderCacheBuffer : NSObject {
    unsigned long long  _numParticles;
    unsigned long long  _numPoints;
    unsigned long long  _numVertices;
    PKMetalBuffer * _pkStrokePointBuffer;
    PKMetalBuffer * _pkUniformsBuffer;
    unsigned long long  _strokePointBufferOffset;
    unsigned long long  _uniformsBufferOffset;
}

@property (nonatomic, readonly) unsigned long long numParticles;
@property (nonatomic, readonly) unsigned long long numPoints;
@property (nonatomic, readonly) unsigned long long numVertices;
@property (nonatomic, readonly) <MTLBuffer> *strokePointBuffer;
@property (nonatomic, readonly) unsigned long long strokePointBufferOffset;
@property (nonatomic, readonly) <MTLBuffer> *uniformsBuffer;
@property (nonatomic, readonly) unsigned long long uniformsBufferOffset;

- (void).cxx_destruct;
- (id)initWithUniforms:(const struct PKMetalParticleKernelUniforms { float x1; float x2; float x3; unsigned int x4; unsigned int x5; unsigned int x6; bool x7; bool x8; bool x9; bool x10; }*)arg1 points:(const struct PKMetalParticleStrokePoint { unsigned int x1; float x2; float x3; struct half { unsigned short x_4_1_1; } x4; struct half { unsigned short x_5_1_1; } x5; struct half { unsigned short x_6_1_1; } x6; struct half { unsigned short x_7_1_1; } x7; unsigned short x8; unsigned short x9; }*)arg2 numPoints:(unsigned long long)arg3 resourceHandler:(id)arg4;
- (bool)lockPurgeableResourcesAddToSet:(id)arg1;
- (unsigned long long)numParticles;
- (unsigned long long)numPoints;
- (unsigned long long)numVertices;
- (id)strokePointBuffer;
- (unsigned long long)strokePointBufferOffset;
- (id)uniformsBuffer;
- (unsigned long long)uniformsBufferOffset;

@end
