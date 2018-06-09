/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMTLMesh : NSObject {
    NSArray * _buffers;
    NSArray * _elements;
    long long  _mutabilityTimestamp;
    MTLStageInputOutputDescriptor * _stageDescriptor;
    MTLVertexDescriptor * _tessellationVertexDescriptor;
    unsigned long long  _tessellationVertexDescriptorHash;
    MTLVertexDescriptor * _vertexDescriptor;
    unsigned long long  _vertexDescriptorHash;
    <MTLBuffer> * _volatileBuffer;
    long long  verticesCount;
    unsigned long long  volatileOffset;
    unsigned long long  volatileSize;
    unsigned long long  volatileStride;
}

@property (nonatomic, copy) NSArray *buffers;
@property (nonatomic, copy) NSArray *elements;
@property (nonatomic) long long mutabilityTimestamp;
@property (nonatomic, retain) MTLStageInputOutputDescriptor *stageDescriptor;
@property (nonatomic, readonly) MTLVertexDescriptor *tessellationVertexDescriptor;
@property (nonatomic, readonly) unsigned long long tessellationVertexDescriptorHash;
@property (nonatomic, copy) MTLVertexDescriptor *vertexDescriptor;
@property (nonatomic, readonly) unsigned long long vertexDescriptorHash;
@property (nonatomic) long long verticesCount;
@property (nonatomic, retain) <MTLBuffer> *volatileBuffer;
@property (nonatomic) unsigned long long volatileOffset;
@property (nonatomic) unsigned long long volatileSize;
@property (nonatomic) unsigned long long volatileStride;

- (id)bufferForAttribute:(long long)arg1;
- (id)buffers;
- (void)buildTessellationVertexDescriptorIfNeeded;
- (void)dealloc;
- (id)description;
- (id)elements;
- (long long)mutabilityTimestamp;
- (void)setBuffers:(id)arg1;
- (void)setElements:(id)arg1;
- (void)setMutabilityTimestamp:(long long)arg1;
- (void)setStageDescriptor:(id)arg1;
- (void)setVertexDescriptor:(id)arg1;
- (void)setVerticesCount:(long long)arg1;
- (void)setVolatileBuffer:(id)arg1;
- (void)setVolatileOffset:(unsigned long long)arg1;
- (void)setVolatileSize:(unsigned long long)arg1;
- (void)setVolatileStride:(unsigned long long)arg1;
- (id)stageDescriptor;
- (id)tessellationVertexDescriptor;
- (unsigned long long)tessellationVertexDescriptorHash;
- (id)vertexDescriptor;
- (unsigned long long)vertexDescriptorHash;
- (long long)verticesCount;
- (id)volatileBuffer;
- (unsigned long long)volatileOffset;
- (unsigned long long)volatileSize;
- (unsigned long long)volatileStride;

@end
