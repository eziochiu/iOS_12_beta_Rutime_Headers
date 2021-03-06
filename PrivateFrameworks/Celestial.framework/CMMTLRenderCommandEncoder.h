/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface CMMTLRenderCommandEncoder : NSObject <MTLRenderCommandEncoder> {
    CMMTLCommandBuffer * _cmCommandBuffer;
    CMMTLRenderPipelineState * _cmRenderPipelineState;
    <MTLRenderCommandEncoder> * _renderEncoder;
    MTLRenderPassDescriptor * _renderPassDescriptor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;
@property (readonly) unsigned long long tileHeight;
@property (readonly) unsigned long long tileWidth;

- (void).cxx_destruct;
- (void)endEncoding;
- (void)forwardInvocation:(id)arg1;
- (id)initWithCMMTLCommandBuffer:(id)arg1 renderDescriptor:(id)arg2;
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setRenderPipelineState:(id)arg1;

@end
