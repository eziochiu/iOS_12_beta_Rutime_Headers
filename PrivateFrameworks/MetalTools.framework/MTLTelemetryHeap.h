/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLTelemetryHeap : MTLToolsHeap {
    MTLTelemetryDevice * _telemetryDevice;
}

@property (nonatomic, readonly) MTLTelemetryDevice *telemetryDevice;

- (id)initWithHeap:(id)arg1 descriptor:(id)arg2 device:(id)arg3;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newTextureWithDescriptor:(id)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (id)telemetryDevice;

@end
