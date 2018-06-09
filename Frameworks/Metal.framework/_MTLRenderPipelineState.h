/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLRenderPipelineState : NSObject <MTLRenderPipelineState> {
    <MTLDevice> * _device;
    MTLIndirectArgumentBufferEmulationData * _fragmentIABEmulationData;
    NSString * _label;
    bool  _supportIndirectCommandBuffers;
    bool  _threadgroupSizeMatchesTileSize;
    unsigned long long  _uniqueIdentifier;
    MTLIndirectArgumentBufferEmulationData * _vertexIABEmulationData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (nonatomic, retain) MTLIndirectArgumentBufferEmulationData *fragmentIABEmulationData;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long imageblockSampleLength;
@property (readonly) NSString *label;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly) Class superclass;
@property (readonly) bool supportIndirectCommandBuffers;
@property (readonly) bool threadgroupSizeMatchesTileSize;
@property (readonly) unsigned long long uniqueIdentifier;
@property (nonatomic, retain) MTLIndirectArgumentBufferEmulationData *vertexIABEmulationData;

- (void)dealloc;
- (id)device;
- (id)fragmentIABEmulationData;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2;
- (id)initWithDeviceAndTileDesc:(id)arg1 tilePipelineStateDescriptor:(id)arg2;
- (id)label;
- (void)setFragmentIABEmulationData:(id)arg1;
- (void)setVertexIABEmulationData:(id)arg1;
- (bool)supportIndirectCommandBuffers;
- (bool)threadgroupSizeMatchesTileSize;
- (unsigned long long)uniqueIdentifier;
- (id)vertexIABEmulationData;

@end
