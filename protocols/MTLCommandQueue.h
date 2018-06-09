/* made by EzioChiu.
 */

@protocol MTLCommandQueue <NSObject>

@required

- (<MTLCommandBuffer> *)commandBuffer;
- (<MTLCommandBuffer> *)commandBufferWithUnretainedReferences;
- (<MTLDevice> *)device;
- (void)insertDebugCaptureBoundary;
- (NSString *)label;
- (void)setLabel:(NSString *)arg1;

@end
