/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface CMMTLRenderPipelineState : NSObject <MTLRenderPipelineState> {
    CMMTLDevice * _cmDevice;
    MTLRenderPipelineReflection * _reflection;
    MTLRenderPipelineDescriptor * _renderPipelineDescriptor;
    <MTLRenderPipelineState> * _renderPipelineState;
}

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

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithCMMTLDevice:(id)arg1 descriptor:(id)arg2 reflection:(id*)arg3;

@end
