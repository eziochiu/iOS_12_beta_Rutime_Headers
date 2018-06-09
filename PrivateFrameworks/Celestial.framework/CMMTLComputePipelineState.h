/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface CMMTLComputePipelineState : NSObject <MTLComputePipelineStateSPI> {
    CMMTLDevice * _cmDevice;
    <MTLComputePipelineState> * _computePipelineState;
    <MTLFunction> * _function;
    MTLComputePipelineReflection * _reflection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *label;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly) unsigned long long staticThreadgroupMemoryLength;
@property (readonly) Class superclass;
@property (readonly) unsigned long long threadExecutionWidth;
@property (readonly) unsigned long long uniqueIdentifier;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithCMMTLDevice:(id)arg1 function:(id)arg2 options:(unsigned long long)arg3 reflection:(id*)arg4;

@end
