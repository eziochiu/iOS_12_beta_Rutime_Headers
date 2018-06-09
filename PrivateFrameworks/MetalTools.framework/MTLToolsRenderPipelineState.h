/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsRenderPipelineState : MTLToolsObject <MTLRenderPipelineState>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long imageblockSampleLength;
@property (readonly) NSString *label;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly) Class superclass;
@property (readonly) bool supportIndirectCommandBuffers;
@property (readonly) bool threadgroupSizeMatchesTileSize;

- (void)acceptVisitor:(id)arg1;
- (void)dealloc;
- (id)device;
- (unsigned int)getFragmentShaderTelemetryID;
- (unsigned int)getVertexShaderTelemetryID;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (unsigned long long)imageblockSampleLength;
- (id)label;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (id)newFragmentShaderDebugInfo;
- (id)newVertexShaderDebugInfo;
- (unsigned long long)resourceIndex;
- (bool)supportIndirectCommandBuffers;
- (bool)threadgroupSizeMatchesTileSize;
- (unsigned long long)uniqueIdentifier;

@end
