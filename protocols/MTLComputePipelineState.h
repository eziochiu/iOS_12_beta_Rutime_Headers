/* made by EzioChiu.
 */

@protocol MTLComputePipelineState <NSObject>

@required

- (<MTLDevice> *)device;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (NSString *)label;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (unsigned long long)staticThreadgroupMemoryLength;
- (unsigned long long)threadExecutionWidth;

@end
