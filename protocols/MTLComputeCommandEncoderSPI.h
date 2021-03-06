/* made by EzioChiu.
 */

@protocol MTLComputeCommandEncoderSPI <MTLComputeCommandEncoder>

@required

- (NSData *)newKernelDebugInfo;

@optional

- (void)dispatchBarrier;
- (void)dispatchThreadsWithIndirectBuffer:(id <MTLBuffer>)arg1 indirectBufferOffset:(unsigned long long)arg2;

@end
