/* made by EzioChiu.
 */

@protocol MTLComputePipelineStateSPI <MTLComputePipelineState>

@required

- (unsigned int)getComputeKernelTelemetryID;
- (unsigned long long)staticThreadgroupMemoryLength;
- (unsigned long long)uniqueIdentifier;

@optional

- (unsigned long long)resourceIndex;

@end
