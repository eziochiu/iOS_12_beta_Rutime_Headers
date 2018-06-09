/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLComputePipelineState : NSObject <MTLComputePipelineState> {
    <MTLDevice> * _device;
    MTLIndirectArgumentBufferEmulationData * _iabEmulationData;
    NSString * _label;
    bool  _supportIndirectCommandBuffers;
    unsigned long long  _uniqueIdentifier;
}

@property (nonatomic, retain) MTLIndirectArgumentBufferEmulationData *IABEmulationData;
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

- (id)IABEmulationData;
- (void)dealloc;
- (id)description;
- (id)device;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2;
- (id)label;
- (void)setIABEmulationData:(id)arg1;
- (unsigned long long)uniqueIdentifier;

@end
