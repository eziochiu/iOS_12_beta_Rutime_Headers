/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLTelemetryBuffer : MTLToolsBuffer

- (void)accumBufferDistribution:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 bytes:(const void*)arg3 options:(unsigned long long)arg4;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3;
- (id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;

@end
